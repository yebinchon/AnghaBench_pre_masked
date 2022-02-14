
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_vram_object {int dummy; } ;
struct drm_framebuffer {int * obj; } ;
struct drm_crtc {TYPE_1__* primary; } ;
struct TYPE_2__ {struct drm_framebuffer* fb; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct drm_gem_vram_object* FUNC_1 (int ) ;
 int FUNC_2 (struct drm_gem_vram_object*) ;
 int FUNC_3 (struct drm_crtc*,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_1)
{
 FUNC_0("\n");
 FUNC_3(VAR_1, VAR_0);
 if (VAR_1->primary->fb) {
  struct drm_framebuffer *VAR_2 = VAR_1->primary->fb;
  struct drm_gem_vram_object *VAR_3 =
   FUNC_1(VAR_2->obj[0]);
  FUNC_2(VAR_3);
 }
 VAR_1->primary->fb = ((void*)0);
}
