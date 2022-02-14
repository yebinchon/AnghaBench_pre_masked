
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_ctx_binding_state {int dirty; } ;
struct vmw_ctx_bindinfo {int ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct vmw_ctx_binding_state* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct vmw_ctx_bindinfo *VAR_1, bool VAR_2)
{
 struct vmw_ctx_binding_state *VAR_3 =
  FUNC_1(VAR_1->ctx);

 FUNC_0(VAR_0, &VAR_3->dirty);

 return 0;
}
