
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp5_interface {int dummy; } ;
struct mdp5_encoder {struct mdp5_ctl* ctl; struct mdp5_interface* intf; } ;
struct mdp5_ctl {int dummy; } ;
struct TYPE_2__ {struct mdp5_interface* intf; } ;
struct mdp5_crtc_state {int defer_start; TYPE_1__ pipeline; struct mdp5_ctl* ctl; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_crtc_state*) ;
 struct mdp5_crtc_state* FUNC_1 (struct drm_crtc_state*) ;
 struct mdp5_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_3(struct drm_encoder *VAR_0,
         struct drm_crtc_state *VAR_1,
         struct drm_connector_state *VAR_2)
{
 struct mdp5_encoder *VAR_3 = FUNC_2(VAR_0);
 struct mdp5_crtc_state *VAR_4 = FUNC_1(VAR_1);
 struct mdp5_interface *VAR_5 = VAR_3->intf;
 struct mdp5_ctl *VAR_6 = VAR_3->ctl;

 VAR_4->ctl = VAR_6;
 VAR_4->pipeline.intf = VAR_5;
 if (FUNC_0(VAR_1))
  VAR_4->defer_start = 1;

 return 0;
}
