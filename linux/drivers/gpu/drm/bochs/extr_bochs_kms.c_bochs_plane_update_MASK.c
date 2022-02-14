
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane_state {TYPE_2__* fb; int crtc_y; int crtc_x; } ;
struct TYPE_3__ {scalar_t__ offset; } ;
struct drm_gem_vram_object {TYPE_1__ bo; } ;
struct bochs_device {int stride; } ;
struct TYPE_4__ {int format; scalar_t__* offsets; int * pitches; int * obj; } ;


 int FUNC_0 (struct bochs_device*,int ,int ,int ,scalar_t__) ;
 int FUNC_1 (struct bochs_device*,int ) ;
 struct drm_gem_vram_object* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct bochs_device *VAR_0,
          struct drm_plane_state *VAR_1)
{
 struct drm_gem_vram_object *VAR_2;

 if (!VAR_1->fb || !VAR_0->stride)
  return;

 VAR_2 = FUNC_2(VAR_1->fb->obj[0]);
 FUNC_0(VAR_0,
    VAR_1->crtc_x,
    VAR_1->crtc_y,
    VAR_1->fb->pitches[0],
    VAR_1->fb->offsets[0] + VAR_2->bo.offset);
 FUNC_1(VAR_0, VAR_1->fb->format);
}
