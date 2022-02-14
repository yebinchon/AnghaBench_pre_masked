
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {int in_bytes; int sfd; } ;
struct pollfd {int fd; int events; int revents; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (double) ;
 int FUNC_5 (struct rpc_server*,int) ;
 scalar_t__ FUNC_6 (struct pollfd*,int,int) ;
 int FUNC_7 (struct rpc_server*,char*,scalar_t__) ;
 char* FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9 (struct rpc_server *VAR_6, int VAR_7, double VAR_8) {
  int VAR_9 = VAR_7;
  if (VAR_7 <= VAR_6->in_bytes) { return VAR_6->in_bytes; }
  FUNC_0(VAR_5);
  FUNC_2 (VAR_5);
  VAR_7 -= VAR_6->in_bytes;


  int VAR_10 = VAR_6->sfd;
  FUNC_3 (VAR_10 >= 0);

  struct pollfd VAR_11;
  VAR_11.fd = VAR_10;
  VAR_11.events = VAR_2 | VAR_0 | VAR_3 | VAR_1;
  int VAR_12 = 0;
  int VAR_13 = 1;
  do {
    VAR_4 = 0;
    if (FUNC_6 (&VAR_11, 1, VAR_12) <= 0) {
      if (VAR_13) {
        VAR_13 = 0;
        continue;
      }
      FUNC_7 (VAR_6, VAR_4 ? FUNC_8 (VAR_4) : "Timeout", VAR_4);
      FUNC_1 (VAR_5);
      return VAR_9 - VAR_7;
    }
    VAR_13 = 0;
    int VAR_14 = FUNC_5 (VAR_6, VAR_7);
    if (VAR_14 < 0) {
      return -1;
    }
    VAR_7 -= VAR_14;
    if (VAR_7 <= 0) { FUNC_1 (VAR_5); return VAR_9 - VAR_7;}
    if (VAR_11.revents & (VAR_0 | VAR_3 | VAR_1)) {
      return -1;
    }
  } while ((VAR_12 = FUNC_4 (VAR_8)));
  FUNC_1 (VAR_5);
  return VAR_9 - VAR_7;
}
