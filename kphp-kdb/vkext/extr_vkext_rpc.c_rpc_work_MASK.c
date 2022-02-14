
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {int dummy; } ;


 int FUNC_0 (int (*) (struct rpc_server*,int,double)) ;
 int FUNC_1 (struct rpc_server*,int,double) ;
 int FUNC_2 (struct rpc_server*) ;

__attribute__((used)) static int FUNC_3 (struct rpc_server *VAR_0, int VAR_1, double VAR_2) {
  FUNC_0(FUNC_3);
  int VAR_3 = FUNC_1 (VAR_0, VAR_1, VAR_2);
  if (VAR_3 < 0) {
    FUNC_2 (VAR_0);
    return -1;
  } else if (VAR_3 == 0) {
    return 0;
  } else {
    return 1;
  }
}
