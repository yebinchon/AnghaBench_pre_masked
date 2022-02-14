
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_plane_state {int dummy; } ;
struct komeda_plane {struct komeda_layer* layer; } ;
struct komeda_layer {int dummy; } ;
struct komeda_data_flow_cfg {scalar_t__ en_split; } ;
struct komeda_crtc_state {int dummy; } ;
struct drm_plane_state {int crtc; int state; int fb; } ;
struct drm_plane {int dummy; } ;
struct drm_crtc_state {int active; int enable; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_crtc_state*) ;
 struct drm_crtc_state* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct komeda_layer*,struct komeda_plane_state*,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 int FUNC_4 (struct komeda_layer*,struct komeda_plane_state*,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 int FUNC_5 (struct drm_plane_state*,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 struct komeda_crtc_state* FUNC_6 (struct drm_crtc_state*) ;
 struct komeda_plane* FUNC_7 (struct drm_plane*) ;
 struct komeda_plane_state* FUNC_8 (struct drm_plane_state*) ;

__attribute__((used)) static int
FUNC_9(struct drm_plane *VAR_1,
     struct drm_plane_state *VAR_2)
{
 struct komeda_plane *VAR_3 = FUNC_7(VAR_1);
 struct komeda_plane_state *VAR_4 = FUNC_8(VAR_2);
 struct komeda_layer *VAR_5 = VAR_3->layer;
 struct drm_crtc_state *VAR_6;
 struct komeda_crtc_state *VAR_7;
 struct komeda_data_flow_cfg VAR_8;
 int VAR_9;

 if (!VAR_2->crtc || !VAR_2->fb)
  return 0;

 VAR_6 = FUNC_2(VAR_2->state, VAR_2->crtc);
 if (FUNC_1(VAR_6) || !VAR_6->enable) {
  FUNC_0("Cannot update plane on a disabled CRTC.\n");
  return -VAR_0;
 }


 if (!VAR_6->active)
  return 0;

 VAR_7 = FUNC_6(VAR_6);

 VAR_9 = FUNC_5(VAR_2, VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8.en_split)
  VAR_9 = FUNC_4(VAR_5,
    VAR_4, VAR_7, &VAR_8);
 else
  VAR_9 = FUNC_3(VAR_5,
    VAR_4, VAR_7, &VAR_8);

 return VAR_9;
}
