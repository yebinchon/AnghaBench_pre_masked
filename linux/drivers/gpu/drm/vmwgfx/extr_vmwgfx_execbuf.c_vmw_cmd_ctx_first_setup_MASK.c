
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_sw_context {int staged_bindings_inuse; int ctx_list; int * staged_bindings; } ;
struct vmw_resource {int dummy; } ;
struct vmw_private {int dummy; } ;
struct vmw_ctx_validation_info {int head; int cur; struct vmw_resource* ctx; int * staged; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (struct vmw_private*) ;
 int FUNC_5 (struct vmw_resource*) ;
 int FUNC_6 (struct vmw_private*,struct vmw_sw_context*,struct vmw_resource*) ;

__attribute__((used)) static int FUNC_7(struct vmw_private *VAR_0,
       struct vmw_sw_context *VAR_1,
       struct vmw_resource *VAR_2,
       struct vmw_ctx_validation_info *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_6(VAR_0, VAR_1, VAR_2);
 if (FUNC_3(VAR_4 != 0))
  goto out_err;

 if (!VAR_1->staged_bindings) {
  VAR_1->staged_bindings = FUNC_4(VAR_0);
  if (FUNC_0(VAR_1->staged_bindings)) {
   VAR_4 = FUNC_1(VAR_1->staged_bindings);
   VAR_1->staged_bindings = ((void*)0);
   goto out_err;
  }
 }

 if (VAR_1->staged_bindings_inuse) {
  VAR_3->staged = FUNC_4(VAR_0);
  if (FUNC_0(VAR_3->staged)) {
   VAR_4 = FUNC_1(VAR_3->staged);
   VAR_3->staged = ((void*)0);
   goto out_err;
  }
 } else {
  VAR_3->staged = VAR_1->staged_bindings;
  VAR_1->staged_bindings_inuse = 1;
 }

 VAR_3->ctx = VAR_2;
 VAR_3->cur = FUNC_5(VAR_2);
 FUNC_2(&VAR_3->head, &VAR_1->ctx_list);

 return 0;

out_err:
 return VAR_4;
}
