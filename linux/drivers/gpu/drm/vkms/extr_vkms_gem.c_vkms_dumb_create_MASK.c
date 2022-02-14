
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_mode_create_dumb {int width; int height; int pitch; int size; int handle; int bpp; } ;
struct drm_gem_object {int size; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_4 (struct drm_device*,struct drm_file*,int *,int) ;

int FUNC_5(struct drm_file *VAR_1, struct drm_device *VAR_2,
       struct drm_mode_create_dumb *VAR_3)
{
 struct drm_gem_object *VAR_4;
 u64 VAR_5, VAR_6;

 if (!VAR_3 || !VAR_2 || !VAR_1)
  return -VAR_0;

 VAR_5 = VAR_3->width * FUNC_0(VAR_3->bpp, 8);
 VAR_6 = VAR_5 * VAR_3->height;

 if (!VAR_6)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_2, VAR_1, &VAR_3->handle, VAR_6);
 if (FUNC_2(VAR_4))
  return FUNC_3(VAR_4);

 VAR_3->size = VAR_4->size;
 VAR_3->pitch = VAR_5;

 FUNC_1("Created object of size %lld\n", VAR_6);

 return 0;
}
