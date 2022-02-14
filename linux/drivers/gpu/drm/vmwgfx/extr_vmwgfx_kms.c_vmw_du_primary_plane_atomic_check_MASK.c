
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct vmw_display_unit {TYPE_1__ connector; } ;
struct vmw_connector_state {int dummy; } ;
struct drm_plane_state {struct drm_crtc* crtc; int state; struct drm_framebuffer* fb; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 struct drm_crtc_state* FUNC_0 (int ,struct drm_crtc*) ;
 int FUNC_1 (struct drm_plane_state*,struct drm_crtc_state*,int ,int ,int,int) ;
 struct vmw_connector_state* FUNC_2 (int ) ;
 struct vmw_display_unit* FUNC_3 (struct drm_crtc*) ;

int FUNC_4(struct drm_plane *VAR_1,
          struct drm_plane_state *VAR_2)
{
 struct drm_crtc_state *VAR_3 = ((void*)0);
 struct drm_framebuffer *VAR_4 = VAR_2->fb;
 int VAR_5;

 if (VAR_2->crtc)
  VAR_3 = FUNC_0(VAR_2->state, VAR_2->crtc);

 VAR_5 = FUNC_1(VAR_2, VAR_3,
        VAR_0,
        VAR_0,
        0, 1);

 if (!VAR_5 && VAR_4) {
  struct drm_crtc *VAR_6 = VAR_2->crtc;
  struct vmw_connector_state *VAR_7;
  struct vmw_display_unit *VAR_8 = FUNC_3(VAR_6);

  VAR_7 = FUNC_2(VAR_8->connector.state);
 }


 return VAR_5;
}
