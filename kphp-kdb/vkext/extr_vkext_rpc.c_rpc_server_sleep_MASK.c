
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {int * error; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2 (struct rpc_server *VAR_0) {
  if (VAR_0->error != ((void*)0)) {
    FUNC_1 (VAR_0->error, FUNC_0 (VAR_0->error) + 1);
    VAR_0->error = ((void*)0);
  }
}
