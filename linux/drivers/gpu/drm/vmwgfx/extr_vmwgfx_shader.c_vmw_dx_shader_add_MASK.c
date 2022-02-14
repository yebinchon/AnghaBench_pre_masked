
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmw_resource {int hw_destroy; int id; struct vmw_private* dev_priv; } ;
struct vmw_private {int dummy; } ;
struct vmw_dx_shader {int committed; int id; int cotable_head; int cotable; struct vmw_resource* ctx; struct vmw_resource res; } ;
struct vmw_cmdbuf_res_manager {int dummy; } ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;
struct list_head {int dummy; } ;
typedef int SVGA3dShaderType ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 struct vmw_dx_shader* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,scalar_t__,struct ttm_operation_ctx*) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct vmw_cmdbuf_res_manager*,int ,int ,struct vmw_resource*,struct list_head*) ;
 int VAR_5 ;
 int FUNC_7 (struct vmw_resource*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct vmw_private*) ;
 int FUNC_9 (struct vmw_private*,struct vmw_resource*,int,int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct vmw_resource**) ;
 scalar_t__ VAR_9 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;

int FUNC_14(struct vmw_cmdbuf_res_manager *VAR_10,
        struct vmw_resource *VAR_11,
        u32 VAR_12,
        SVGA3dShaderType VAR_13,
        struct list_head *VAR_14)
{
 struct vmw_dx_shader *VAR_15;
 struct vmw_resource *VAR_16;
 struct vmw_private *VAR_17 = VAR_11->dev_priv;
 struct ttm_operation_ctx VAR_18 = {
  .interruptible = 1,
  .no_wait_gpu = 0
 };
 int VAR_19;

 if (!VAR_9)
  VAR_9 = FUNC_5(sizeof(*VAR_15));

 if (!FUNC_12(VAR_12, VAR_13))
  return -VAR_0;

 VAR_19 = FUNC_3(FUNC_8(VAR_17), VAR_9,
       &VAR_18);
 if (VAR_19) {
  if (VAR_19 != -VAR_2)
   FUNC_0("Out of graphics memory for shader "
      "creation.\n");
  return VAR_19;
 }

 VAR_15 = FUNC_2(sizeof(*VAR_15), VAR_3);
 if (!VAR_15) {
  FUNC_4(FUNC_8(VAR_17), VAR_9);
  return -VAR_1;
 }

 VAR_16 = &VAR_15->res;
 VAR_15->ctx = VAR_11;
 VAR_15->cotable = FUNC_10
  (FUNC_7(VAR_11, VAR_4));
 VAR_15->id = VAR_12;
 VAR_15->committed = 0;
 FUNC_1(&VAR_15->cotable_head);
 VAR_19 = FUNC_9(VAR_17, VAR_16, 1,
    VAR_7, &VAR_6);
 if (VAR_19)
  goto out_resource_init;





 VAR_19 = FUNC_6(VAR_10, VAR_5,
     FUNC_13(VAR_12, 0),
     VAR_16, VAR_14);
 if (VAR_19)
  goto out_resource_init;

 VAR_16->id = VAR_15->id;
 VAR_16->hw_destroy = VAR_8;

out_resource_init:
 FUNC_11(&VAR_16);

 return VAR_19;
}
