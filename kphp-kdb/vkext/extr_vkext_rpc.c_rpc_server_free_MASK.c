
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {scalar_t__ magic; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rpc_server*) ;
 int FUNC_2 (struct rpc_server*,int) ;

__attribute__((used)) static void FUNC_3 (struct rpc_server *VAR_0) {
  FUNC_1 (VAR_0);

  VAR_0->magic = 0;
  FUNC_2 (VAR_0, sizeof (*VAR_0));
  FUNC_0 (sizeof (*VAR_0));
}
