
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {int dummy; } ;
struct vmw_legacy_display_unit {int dummy; } ;
struct vmw_framebuffer {int dummy; } ;
struct drm_plane_state {struct drm_crtc* crtc; } ;
struct drm_plane {TYPE_1__* state; int dev; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {struct drm_framebuffer* fb; int crtc; } ;


 struct vmw_legacy_display_unit* FUNC_0 (struct drm_crtc*) ;
 struct vmw_framebuffer* FUNC_1 (struct drm_framebuffer*) ;
 int FUNC_2 (struct vmw_private*,struct vmw_legacy_display_unit*,struct vmw_framebuffer*) ;
 int FUNC_3 (struct vmw_private*) ;
 int FUNC_4 (struct vmw_private*,struct vmw_legacy_display_unit*) ;
 struct vmw_private* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct drm_plane *VAR_0,
        struct drm_plane_state *VAR_1)
{
 struct vmw_private *VAR_2;
 struct vmw_legacy_display_unit *VAR_3;
 struct vmw_framebuffer *VAR_4;
 struct drm_framebuffer *VAR_5;
 struct drm_crtc *VAR_6 = VAR_0->state->crtc ?: VAR_1->crtc;


 VAR_3 = FUNC_0(VAR_6);
 VAR_2 = FUNC_5(VAR_0->dev);
 VAR_5 = VAR_0->state->fb;

 VAR_4 = (VAR_5) ? FUNC_1(VAR_5) : ((void*)0);

 if (VAR_4)
  FUNC_2(VAR_2, VAR_3, VAR_4);
 else
  FUNC_4(VAR_2, VAR_3);

 FUNC_3(VAR_2);
}
