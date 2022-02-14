
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_2__ {int size; } ;
struct vkms_gem_object {TYPE_1__ gem; int vaddr; } ;
struct drm_framebuffer {int dummy; } ;
struct vkms_composer {struct drm_framebuffer fb; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct vkms_composer*,struct vkms_composer*,void*) ;
 int FUNC_3 (void*,struct vkms_composer*) ;
 struct drm_gem_object* FUNC_4 (struct drm_framebuffer*,int ) ;
 struct vkms_gem_object* FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int ,int ) ;
 int FUNC_8 (void*,int ,int ) ;

__attribute__((used)) static uint32_t FUNC_9(struct vkms_composer *VAR_1,
         struct vkms_composer *VAR_2)
{
 struct drm_framebuffer *VAR_3 = &VAR_1->fb;
 struct drm_gem_object *VAR_4 = FUNC_4(VAR_3, 0);
 struct vkms_gem_object *VAR_5 = FUNC_5(VAR_4);
 void *VAR_6 = FUNC_7(VAR_5->gem.size, VAR_0);
 u32 VAR_7 = 0;

 if (!VAR_6) {
  FUNC_0("Failed to allocate memory for output frame.");
  return 0;
 }

 if (FUNC_1(!VAR_5->vaddr)) {
  FUNC_6(VAR_6);
  return VAR_7;
 }

 FUNC_8(VAR_6, VAR_5->vaddr, VAR_5->gem.size);

 if (VAR_2)
  FUNC_2(VAR_2, VAR_1, VAR_6);

 VAR_7 = FUNC_3(VAR_6, VAR_1);

 FUNC_6(VAR_6);

 return VAR_7;
}
