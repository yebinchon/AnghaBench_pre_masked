
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_bo {int dummy; } ;
struct drm_radeon_gem_set_tiling {int pitch; int tiling_flags; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct radeon_bo* FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct radeon_bo*,int ,int ) ;

int FUNC_5(struct drm_device *VAR_1, void *VAR_2,
    struct drm_file *VAR_3)
{
 struct drm_radeon_gem_set_tiling *VAR_4 = VAR_2;
 struct drm_gem_object *VAR_5;
 struct radeon_bo *VAR_6;
 int VAR_7 = 0;

 FUNC_0("%d \n", VAR_4->handle);
 VAR_5 = FUNC_1(VAR_3, VAR_4->handle);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_6 = FUNC_3(VAR_5);
 VAR_7 = FUNC_4(VAR_6, VAR_4->tiling_flags, VAR_4->pitch);
 FUNC_2(VAR_5);
 return VAR_7;
}
