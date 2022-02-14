
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct drm_gem_object {int dummy; } ;
struct vkms_gem_object {struct drm_gem_object gem; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (struct vkms_gem_object*) ;
 struct drm_gem_object* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct vkms_gem_object*) ;
 struct vkms_gem_object* FUNC_3 (struct drm_device*,int ) ;
 int FUNC_4 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_5 (struct drm_gem_object*) ;

struct drm_gem_object *FUNC_6(struct drm_device *VAR_1,
           struct drm_file *VAR_2,
           u32 *VAR_3,
           u64 VAR_4)
{
 struct vkms_gem_object *VAR_5;
 int VAR_6;

 if (!VAR_2 || !VAR_1 || !VAR_3)
  return FUNC_1(-VAR_0);

 VAR_5 = FUNC_3(VAR_1, VAR_4);
 if (FUNC_2(VAR_5))
  return FUNC_0(VAR_5);

 VAR_6 = FUNC_4(VAR_2, &VAR_5->gem, VAR_3);
 FUNC_5(&VAR_5->gem);
 if (VAR_6)
  return FUNC_1(VAR_6);

 return &VAR_5->gem;
}
