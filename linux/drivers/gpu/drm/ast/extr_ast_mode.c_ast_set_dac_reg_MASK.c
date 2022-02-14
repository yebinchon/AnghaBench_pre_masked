
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_framebuffer {TYPE_2__* format; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {TYPE_1__* primary; } ;
struct ast_vbios_mode_info {int dummy; } ;
struct TYPE_4__ {int* cpp; } ;
struct TYPE_3__ {struct drm_framebuffer* fb; } ;



__attribute__((used)) static bool FUNC_0(struct drm_crtc *VAR_0, struct drm_display_mode *VAR_1,
       struct ast_vbios_mode_info *VAR_2)
{
 const struct drm_framebuffer *VAR_3 = VAR_0->primary->fb;

 switch (VAR_3->format->cpp[0] * 8) {
 case 8:
  break;
 default:
  return 0;
 }
 return 1;
}
