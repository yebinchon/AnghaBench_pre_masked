
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_mode_create_dumb {int pitch; int width; int size; int height; int handle; int bpp; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (struct drm_device*,int,int,struct drm_gem_object**) ;

int FUNC_6(struct drm_file *VAR_0, struct drm_device *VAR_1,
        struct drm_mode_create_dumb *VAR_2)
{
 struct drm_gem_object *VAR_3;
 u32 VAR_4;
 int VAR_5;

 VAR_2->pitch = FUNC_0(VAR_2->width * FUNC_1(VAR_2->bpp, 8), 16);
 VAR_2->size = VAR_2->pitch * VAR_2->height;

 VAR_5 = FUNC_5(VAR_1, VAR_2->size, 0,
          &VAR_3);
 if (VAR_5) {
  FUNC_2("failed to create GEM object: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_0, VAR_3, &VAR_4);
 FUNC_4(VAR_3);
 if (VAR_5) {
  FUNC_2("failed to unreference GEM object: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_2->handle = VAR_4;
 return 0;
}
