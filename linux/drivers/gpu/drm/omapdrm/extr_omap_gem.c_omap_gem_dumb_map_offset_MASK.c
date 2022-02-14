
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct drm_gem_object*) ;

int FUNC_3(struct drm_file *VAR_1, struct drm_device *VAR_2,
  u32 VAR_3, u64 *VAR_4)
{
 struct drm_gem_object *VAR_5;
 int VAR_6 = 0;


 VAR_5 = FUNC_0(VAR_1, VAR_3);
 if (VAR_5 == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto fail;
 }

 *VAR_4 = FUNC_2(VAR_5);

 FUNC_1(VAR_5);

fail:
 return VAR_6;
}
