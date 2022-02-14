
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_mode_create_dumb {int width; int bpp; int pitch; int size; int height; int handle; } ;
struct drm_gem_shmem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct drm_gem_shmem_object*) ;
 struct drm_gem_shmem_object* FUNC_2 (struct drm_file*,struct drm_device*,int,int *) ;

int FUNC_3(struct drm_file *VAR_0, struct drm_device *VAR_1,
         struct drm_mode_create_dumb *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2->width * VAR_2->bpp, 8);
 struct drm_gem_shmem_object *VAR_4;

 if (!VAR_2->pitch || !VAR_2->size) {
  VAR_2->pitch = VAR_3;
  VAR_2->size = VAR_2->pitch * VAR_2->height;
 } else {

  if (VAR_2->pitch < VAR_3)
   VAR_2->pitch = VAR_3;
  if (VAR_2->size < VAR_2->pitch * VAR_2->height)
   VAR_2->size = VAR_2->pitch * VAR_2->height;
 }

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2->size, &VAR_2->handle);

 return FUNC_1(VAR_4);
}
