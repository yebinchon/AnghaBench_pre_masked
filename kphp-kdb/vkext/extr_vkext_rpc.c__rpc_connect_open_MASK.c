
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {double timeout; int packet_num; int inbound_packet_num; char* error; int errnum; void* status; int generation; int sfd; int port; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int VAR_2 ;
 double VAR_3 ;
 scalar_t__ FUNC_1 (struct rpc_server*,double) ;
 int FUNC_2 (struct rpc_server*) ;
 int FUNC_3 (struct rpc_server*) ;
 int FUNC_4 (struct rpc_server*,char*,int) ;
 int FUNC_5 (int ,int ,double) ;
 void* VAR_4 ;
 void* VAR_5 ;
 char* FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8 (struct rpc_server *VAR_6, char **VAR_7, int *VAR_8) {


  if (VAR_6->sfd >= 0) {
    FUNC_3 (VAR_6);
  }

  FUNC_7 ();
  double VAR_9 = VAR_3 + VAR_6->timeout;
  VAR_6->sfd = FUNC_5 (VAR_6->host, VAR_6->port, VAR_9);
  if (VAR_6->sfd < 0) {
    FUNC_4 (VAR_6, VAR_1 ? FUNC_6 (VAR_1) : "Connect timed out", VAR_1);
    FUNC_2 (VAR_6);
    if (VAR_7) {
      *VAR_7 = FUNC_0 (VAR_1 ? FUNC_6 (VAR_1) : "Connect timed out");
    }
    if (VAR_8) {
      *VAR_8 = VAR_1;
    }
    VAR_6->status = VAR_5;
    return -1;
  }

  VAR_6->status = VAR_4;
  VAR_0 ++;
  VAR_6->generation = VAR_2;
  VAR_6->packet_num = -2;
  VAR_6->inbound_packet_num = -2;
  if (FUNC_1 (VAR_6, VAR_9) < 0) {
    FUNC_4 (VAR_6, "Rpc handshake failed", 0);
    if (VAR_7) {
      *VAR_7 = FUNC_0 (VAR_6->error);
    }
    if (VAR_8) {
      *VAR_8 = VAR_6->errnum;
    }
    VAR_6->status = VAR_5;
    return -1;
  } else {
    return 1;
  }
}
