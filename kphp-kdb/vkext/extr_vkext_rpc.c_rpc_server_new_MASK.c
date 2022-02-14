
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {unsigned int host; unsigned short port; double timeout; double retry_interval; int packet_num; int inbound_packet_num; int fd; int sfd; int magic; int status; } ;
struct pollfd {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct rpc_server*,int ,int) ;
 int FUNC_3 (struct rpc_server*) ;
 int VAR_2 ;
 struct rpc_server** VAR_3 ;
 struct rpc_server** VAR_4 ;
 struct rpc_server** VAR_5 ;
 int VAR_6 ;
 struct rpc_server* FUNC_4 (int) ;
 struct rpc_server** FUNC_5 (struct rpc_server**,int,int) ;

__attribute__((used)) static struct rpc_server *FUNC_6 (unsigned VAR_7, unsigned short VAR_8, double VAR_9, double VAR_10) {
  struct rpc_server *VAR_11 = FUNC_4 (sizeof (*VAR_11));
  FUNC_0 (sizeof (*VAR_11));
  FUNC_2 (VAR_11, 0, sizeof (*VAR_11));

  VAR_11->host = VAR_7;

  VAR_11->port = VAR_8;
  VAR_11->status = VAR_2;

  VAR_11->timeout = VAR_9;
  VAR_11->retry_interval = VAR_10;

  VAR_11->packet_num = -2;
  VAR_11->inbound_packet_num = -2;

  VAR_11->magic = VAR_0;

  VAR_11->fd = VAR_1 ++;
  if (VAR_11->fd >= VAR_6) {
    int VAR_12 = VAR_6 * 2 + 100;
    VAR_5 = FUNC_5 (VAR_5, sizeof (void *) * VAR_6, sizeof (void *) * VAR_12);
    FUNC_1 (sizeof (void *) * VAR_6, sizeof (void *) * VAR_12);
    VAR_3 = FUNC_5 (VAR_3, sizeof (struct pollfd) * VAR_6, sizeof (struct pollfd) * VAR_12);
    FUNC_1 (sizeof (struct pollfd) * VAR_6, sizeof (struct pollfd) * VAR_12);
    VAR_4 = FUNC_5 (VAR_4, sizeof (int) * VAR_6, sizeof (int) * VAR_12);
    FUNC_1 (sizeof (int) * VAR_6, sizeof (int) * VAR_12);
    VAR_6 = VAR_12;
  }
  VAR_5[VAR_11->fd] = VAR_11;
  VAR_11->sfd = -1;
  FUNC_3 (VAR_11);

  return VAR_11;
}
