
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_gem_vram_object {int dummy; } ;
struct drm_framebuffer {int * obj; } ;
struct drm_crtc {TYPE_2__* primary; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {TYPE_1__* fb; } ;
struct TYPE_3__ {int * obj; } ;


 int VAR_0 ;
 struct drm_gem_vram_object* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_gem_vram_object*) ;
 int FUNC_2 (struct drm_gem_vram_object*,int ) ;
 int FUNC_3 (struct drm_gem_vram_object*) ;
 int FUNC_4 (struct drm_crtc*,int ) ;

__attribute__((used)) static int FUNC_5(struct drm_crtc *VAR_1,
    struct drm_framebuffer *VAR_2,
    int VAR_3, int VAR_4, int VAR_5)
{
 struct drm_gem_vram_object *VAR_6;
 int VAR_7;
 s64 VAR_8;

 if (!VAR_5 && VAR_2) {
  VAR_6 = FUNC_0(VAR_2->obj[0]);
  FUNC_3(VAR_6);
 }

 VAR_6 = FUNC_0(VAR_1->primary->fb->obj[0]);

 VAR_7 = FUNC_2(VAR_6, VAR_0);
 if (VAR_7)
  return VAR_7;
 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8 < 0) {
  VAR_7 = (int)VAR_8;
  goto err_drm_gem_vram_unpin;
 }

 FUNC_4(VAR_1, (u32)VAR_8);

 return 0;

err_drm_gem_vram_unpin:
 FUNC_3(VAR_6);
 return VAR_7;
}
