
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union omap_gem_size {int dummy; } omap_gem_size ;
typedef int u32 ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_3 (struct drm_device*,union omap_gem_size,int ) ;

int FUNC_4(struct drm_device *VAR_1, struct drm_file *VAR_2,
  union omap_gem_size VAR_3, u32 VAR_4, u32 *VAR_5)
{
 struct drm_gem_object *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_1, VAR_3, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_5);
 if (VAR_7) {
  FUNC_2(VAR_6);
  return VAR_7;
 }


 FUNC_1(VAR_6);

 return 0;
}
