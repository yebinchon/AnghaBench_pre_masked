
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_crtc {int tcon; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;


 struct sun4i_crtc* FUNC_0 (struct drm_crtc*) ;
 struct drm_encoder* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int ,struct drm_encoder*,struct drm_display_mode*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_0)
{
 struct drm_display_mode *VAR_1 = &VAR_0->state->adjusted_mode;
 struct drm_encoder *VAR_2 = FUNC_1(VAR_0);
 struct sun4i_crtc *VAR_3 = FUNC_0(VAR_0);

 FUNC_2(VAR_3->tcon, VAR_2, VAR_1);
}
