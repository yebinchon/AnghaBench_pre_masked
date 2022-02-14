
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u64 ;
typedef int u32 ;
struct vmw_private {int reservation_sem; } ;
struct TYPE_3__ {scalar_t__ num_pages; } ;
struct vmw_buffer_object {TYPE_1__ base; } ;
struct ttm_object_file {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum drm_vmw_shader_type { ____Placeholder_drm_vmw_shader_type } drm_vmw_shader_type ;
struct TYPE_4__ {struct ttm_object_file* tfile; } ;
typedef int SVGA3dShaderType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;


 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct vmw_buffer_object**) ;
 TYPE_2__* FUNC_5 (struct drm_file*) ;
 struct vmw_private* FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct ttm_object_file*,int ,struct vmw_buffer_object**,int *) ;
 int FUNC_8 (struct vmw_private*,struct vmw_buffer_object*,size_t,size_t,int ,int ,int ,struct ttm_object_file*,int *) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_5, struct drm_file *VAR_6,
        enum drm_vmw_shader_type VAR_7,
        u32 VAR_8, size_t VAR_9, size_t VAR_10,
        uint8_t VAR_11, uint8_t VAR_12,
        uint32_t *VAR_13)
{
 struct vmw_private *VAR_14 = FUNC_6(VAR_5);
 struct ttm_object_file *VAR_15 = FUNC_5(VAR_6)->tfile;
 struct vmw_buffer_object *VAR_16 = ((void*)0);
 SVGA3dShaderType VAR_17;
 int VAR_18;

 if (VAR_8 != VAR_2) {
  VAR_18 = FUNC_7(VAR_15, VAR_8,
          &VAR_16, ((void*)0));
  if (FUNC_3(VAR_18 != 0)) {
   FUNC_0("Couldn't find buffer for shader creation.\n");
   return VAR_18;
  }

  if ((u64)VAR_16->base.num_pages * VAR_1 <
      (u64)VAR_9 + (u64)VAR_10) {
   FUNC_0("Illegal buffer- or shader size.\n");
   VAR_18 = -VAR_0;
   goto out_bad_arg;
  }
 }

 switch (VAR_7) {
 case 128:
  VAR_17 = VAR_4;
  break;
 case 129:
  VAR_17 = VAR_3;
  break;
 default:
  FUNC_0("Illegal shader type.\n");
  VAR_18 = -VAR_0;
  goto out_bad_arg;
 }

 VAR_18 = FUNC_1(&VAR_14->reservation_sem, 1);
 if (FUNC_3(VAR_18 != 0))
  goto out_bad_arg;

 VAR_18 = FUNC_8(VAR_14, VAR_16, VAR_9, VAR_10,
        VAR_17, VAR_11,
        VAR_12, VAR_15, VAR_13);

 FUNC_2(&VAR_14->reservation_sem);
out_bad_arg:
 FUNC_4(&VAR_16);
 return VAR_18;
}
