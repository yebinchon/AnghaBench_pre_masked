
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_ctx_bindinfo {int * ctx; int res_list; int ctx_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vmw_ctx_bindinfo *VAR_0)
{
 FUNC_0(&VAR_0->ctx_list);
 if (!FUNC_1(&VAR_0->res_list))
  FUNC_0(&VAR_0->res_list);
 VAR_0->ctx = ((void*)0);
}
