
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u64 ;
typedef int u32 ;
struct drm_mode_create_dumb {int size; int height; int handle; scalar_t__ pitch; int bpp; int width; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct TYPE_2__ {scalar_t__ buffer_funcs_enabled; } ;
struct amdgpu_device {TYPE_1__ mman; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct amdgpu_device*,int ,int ,int ) ;
 int FUNC_3 (struct amdgpu_device*,int ) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*,int,int ,int ,int,int ,int *,struct drm_gem_object**) ;
 int FUNC_6 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_7 (struct drm_gem_object*) ;
 int VAR_5 ;

int FUNC_8(struct drm_file *VAR_6,
       struct drm_device *VAR_7,
       struct drm_mode_create_dumb *VAR_8)
{
 struct amdgpu_device *VAR_9 = VAR_7->dev_private;
 struct drm_gem_object *VAR_10;
 uint32_t VAR_11;
 u64 VAR_12 = VAR_0 |
      VAR_1;
 u32 VAR_13;
 int VAR_14;






 if (VAR_9->mman.buffer_funcs_enabled)
  VAR_12 |= VAR_2;

 VAR_8->pitch = FUNC_2(VAR_9, VAR_8->width,
      FUNC_1(VAR_8->bpp, 8), 0);
 VAR_8->size = (u64)VAR_8->pitch * VAR_8->height;
 VAR_8->size = FUNC_0(VAR_8->size, VAR_4);
 VAR_13 = FUNC_3(VAR_9,
    FUNC_4(VAR_9, VAR_12));
 VAR_14 = FUNC_5(VAR_9, VAR_8->size, 0, VAR_13, VAR_12,
         VAR_5, ((void*)0), &VAR_10);
 if (VAR_14)
  return -VAR_3;

 VAR_14 = FUNC_6(VAR_6, VAR_10, &VAR_11);

 FUNC_7(VAR_10);
 if (VAR_14) {
  return VAR_14;
 }
 VAR_8->handle = VAR_11;
 return 0;
}
