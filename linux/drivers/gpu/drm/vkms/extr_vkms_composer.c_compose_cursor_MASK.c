
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vkms_gem_object {int vaddr; } ;
struct vkms_composer {int fb; } ;
struct drm_gem_object {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,int ,struct vkms_composer*,struct vkms_composer*) ;
 struct drm_gem_object* FUNC_2 (int *,int ) ;
 struct vkms_gem_object* FUNC_3 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_4(struct vkms_composer *VAR_0,
      struct vkms_composer *VAR_1,
      void *VAR_2)
{
 struct drm_gem_object *VAR_3;
 struct vkms_gem_object *VAR_4;

 VAR_3 = FUNC_2(&VAR_0->fb, 0);
 VAR_4 = FUNC_3(VAR_3);

 if (FUNC_0(!VAR_4->vaddr))
  return;

 FUNC_1(VAR_2, VAR_4->vaddr,
       VAR_1, VAR_0);
}
