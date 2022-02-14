
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {scalar_t__ status; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct rpc_server*,double) ;
 int FUNC_4 (struct rpc_server*) ;
 scalar_t__ VAR_1 ;

int FUNC_5 (struct rpc_server *VAR_2, double VAR_3) {
  FUNC_0 (VAR_0);
  FUNC_2 (VAR_0);
  if (!VAR_2 || VAR_2->status != VAR_1) {
    FUNC_1 (VAR_0);
    return 0;
  }
  if (FUNC_3 (VAR_2, VAR_3) < 0) {
    FUNC_4 (VAR_2);
    FUNC_1 (VAR_0);
    return -1;
  } else {
    FUNC_1 (VAR_0);
    return 1;
  }
}
