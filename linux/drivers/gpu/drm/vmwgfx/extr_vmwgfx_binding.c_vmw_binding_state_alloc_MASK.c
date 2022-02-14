
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int dummy; } ;
struct vmw_ctx_binding_state {int list; struct vmw_private* dev_priv; } ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;


 int VAR_0 ;
 struct vmw_ctx_binding_state* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,struct ttm_operation_ctx*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct vmw_private*) ;
 struct vmw_ctx_binding_state* FUNC_5 (int) ;

struct vmw_ctx_binding_state *
FUNC_6(struct vmw_private *VAR_1)
{
 struct vmw_ctx_binding_state *VAR_2;
 struct ttm_operation_ctx VAR_3 = {
  .interruptible = 0,
  .no_wait_gpu = 0
 };
 int VAR_4;

 VAR_4 = FUNC_2(FUNC_4(VAR_1), sizeof(*VAR_2),
    &VAR_3);
 if (VAR_4)
  return FUNC_0(VAR_4);

 VAR_2 = FUNC_5(sizeof(*VAR_2));
 if (!VAR_2) {
  FUNC_3(FUNC_4(VAR_1), sizeof(*VAR_2));
  return FUNC_0(-VAR_0);
 }

 VAR_2->dev_priv = VAR_1;
 FUNC_1(&VAR_2->list);

 return VAR_2;
}
