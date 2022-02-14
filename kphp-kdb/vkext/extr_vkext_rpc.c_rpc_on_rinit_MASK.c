
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {scalar_t__ sfd; scalar_t__ parse_status; int parse_len; int parse_buf; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct rpc_server** VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

void FUNC_4 (int VAR_11) {
  VAR_2 ++;
  VAR_0 = 0;
  if (VAR_3) {
    VAR_3 = FUNC_1 (VAR_3);
  }
  if (VAR_8) {
    VAR_8 = FUNC_1 (VAR_8);
  }
  VAR_8 = FUNC_0 (0);
  VAR_1 = VAR_5;
  VAR_7 = 0;
  int VAR_12;
  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
    struct rpc_server *VAR_13 = VAR_10[VAR_12];
    if (VAR_13->sfd >= 0) {
      if (VAR_13->parse_status == VAR_9) {
        VAR_13->parse_buf = FUNC_3 (VAR_13->parse_len);
      }
    }
  }
  VAR_4 = 0;
  FUNC_2 ();
}
