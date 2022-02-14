
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u32 ;
struct TYPE_4__ {int shareable; int handle; int * tfile; } ;
struct vmw_resource {int dummy; } ;
struct TYPE_3__ {struct vmw_resource res; } ;
struct vmw_user_shader {TYPE_2__ base; TYPE_1__ shader; } ;
struct vmw_private {int dummy; } ;
struct vmw_buffer_object {int dummy; } ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;
struct ttm_object_file {int dummy; } ;
typedef int SVGA3dShaderType ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct vmw_user_shader* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ttm_object_file*,TYPE_2__*,int,int ,int *,int *) ;
 int FUNC_3 (int ,scalar_t__,struct ttm_operation_ctx*) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct vmw_private*,struct vmw_resource*,size_t,size_t,int ,int ,int ,struct vmw_buffer_object*,int ) ;
 int FUNC_8 (struct vmw_private*) ;
 struct vmw_resource* FUNC_9 (struct vmw_resource*) ;
 int FUNC_10 (struct vmw_resource**) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_11(struct vmw_private *VAR_9,
     struct vmw_buffer_object *VAR_10,
     size_t VAR_11,
     size_t VAR_12,
     SVGA3dShaderType VAR_13,
     uint8_t VAR_14,
     uint8_t VAR_15,
     struct ttm_object_file *VAR_16,
     u32 *VAR_17)
{
 struct vmw_user_shader *VAR_18;
 struct vmw_resource *VAR_19, *VAR_20;
 struct ttm_operation_ctx VAR_21 = {
  .interruptible = 1,
  .no_wait_gpu = 0
 };
 int VAR_22;

 if (FUNC_6(VAR_8 == 0))
  VAR_8 =
   FUNC_5(sizeof(struct vmw_user_shader)) +
   VAR_4 + VAR_3;

 VAR_22 = FUNC_3(FUNC_8(VAR_9),
       VAR_8,
       &VAR_21);
 if (FUNC_6(VAR_22 != 0)) {
  if (VAR_22 != -VAR_1)
   FUNC_0("Out of graphics memory for shader "
      "creation.\n");
  goto out;
 }

 VAR_18 = FUNC_1(sizeof(*VAR_18), VAR_2);
 if (FUNC_6(!VAR_18)) {
  FUNC_4(FUNC_8(VAR_9),
        VAR_8);
  VAR_22 = -VAR_0;
  goto out;
 }

 VAR_19 = &VAR_18->shader.res;
 VAR_18->base.shareable = 0;
 VAR_18->base.tfile = ((void*)0);





 VAR_22 = FUNC_7(VAR_9, VAR_19, VAR_11,
     VAR_12, VAR_13, VAR_14,
     VAR_15, VAR_10,
     VAR_7);
 if (FUNC_6(VAR_22 != 0))
  goto out;

 VAR_20 = FUNC_9(VAR_19);
 VAR_22 = FUNC_2(VAR_16, &VAR_18->base, 0,
       VAR_5,
       &VAR_6, ((void*)0));

 if (FUNC_6(VAR_22 != 0)) {
  FUNC_10(&VAR_20);
  goto out_err;
 }

 if (VAR_17)
  *VAR_17 = VAR_18->base.handle;
out_err:
 FUNC_10(&VAR_19);
out:
 return VAR_22;
}
