
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_resource {int dummy; } ;
struct vmw_shader {struct vmw_resource res; } ;
struct vmw_private {int dummy; } ;
struct vmw_buffer_object {int dummy; } ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;
typedef int SVGA3dShaderType ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vmw_resource* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct vmw_shader* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,scalar_t__,struct ttm_operation_ctx*) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct vmw_private*,struct vmw_resource*,size_t,size_t,int ,int ,int ,struct vmw_buffer_object*,int ) ;
 int FUNC_8 (struct vmw_private*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static struct vmw_resource *FUNC_9(struct vmw_private *VAR_6,
          struct vmw_buffer_object *VAR_7,
          size_t VAR_8,
          size_t VAR_9,
          SVGA3dShaderType VAR_10)
{
 struct vmw_shader *VAR_11;
 struct vmw_resource *VAR_12;
 struct ttm_operation_ctx VAR_13 = {
  .interruptible = 1,
  .no_wait_gpu = 0
 };
 int VAR_14;

 if (FUNC_6(VAR_5 == 0))
  VAR_5 =
   FUNC_5(sizeof(struct vmw_shader)) +
   VAR_3;

 VAR_14 = FUNC_3(FUNC_8(VAR_6),
       VAR_5,
       &VAR_13);
 if (FUNC_6(VAR_14 != 0)) {
  if (VAR_14 != -VAR_1)
   FUNC_0("Out of graphics memory for shader "
      "creation.\n");
  goto out_err;
 }

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_2);
 if (FUNC_6(!VAR_11)) {
  FUNC_4(FUNC_8(VAR_6),
        VAR_5);
  VAR_14 = -VAR_0;
  goto out_err;
 }

 VAR_12 = &VAR_11->res;




 VAR_14 = FUNC_7(VAR_6, VAR_12, VAR_8,
     VAR_9, VAR_10, 0, 0, VAR_7,
     VAR_4);

out_err:
 return VAR_14 ? FUNC_1(VAR_14) : VAR_12;
}
