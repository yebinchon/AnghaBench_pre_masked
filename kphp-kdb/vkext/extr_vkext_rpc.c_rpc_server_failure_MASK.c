
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {scalar_t__ status; } ;


 int FUNC_0 (struct rpc_server*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1 (struct rpc_server *VAR_1) {
  if (VAR_1->status != VAR_0) {
    FUNC_0 (VAR_1);
    return 0;
  } else {
    return 1;
  }
}
