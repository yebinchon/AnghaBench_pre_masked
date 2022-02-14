
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dummy; } ;
struct drm_mode_create_dumb {int pitch; int size; int height; int handle; int bpp; int width; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct radeon_device*,int ,int ,int ) ;
 int FUNC_5 (struct radeon_device*,int,int ,int ,int ,int,struct drm_gem_object**) ;

int FUNC_6(struct drm_file *VAR_3,
       struct drm_device *VAR_4,
       struct drm_mode_create_dumb *VAR_5)
{
 struct radeon_device *VAR_6 = VAR_4->dev_private;
 struct drm_gem_object *VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_5->pitch = FUNC_4(VAR_6, VAR_5->width,
      FUNC_1(VAR_5->bpp, 8), 0);
 VAR_5->size = VAR_5->pitch * VAR_5->height;
 VAR_5->size = FUNC_0(VAR_5->size, VAR_1);

 VAR_9 = FUNC_5(VAR_6, VAR_5->size, 0,
         VAR_2, 0,
         0, &VAR_7);
 if (VAR_9)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_3, VAR_7, &VAR_8);

 FUNC_3(VAR_7);
 if (VAR_9) {
  return VAR_9;
 }
 VAR_5->handle = VAR_8;
 return 0;
}
