
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdp5_pipeline {struct mdp5_hw_mixer* mixer; struct mdp5_interface* intf; struct mdp5_hw_mixer* r_mixer; } ;
struct mdp5_interface {scalar_t__ type; scalar_t__ mode; int num; } ;
struct mdp5_hw_mixer {int dummy; } ;
struct mdp5_crtc_state {int cmd_mode; scalar_t__ pp_done_irqmask; int vblank_irqmask; int err_irqmask; struct mdp5_pipeline pipeline; } ;
struct drm_crtc_state {int state; } ;
struct drm_crtc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mdp5_hw_mixer*,struct mdp5_interface*) ;
 scalar_t__ FUNC_2 (struct mdp5_hw_mixer*) ;
 int FUNC_3 (int ,struct drm_crtc*,int ,struct mdp5_hw_mixer**,struct mdp5_hw_mixer**) ;
 int FUNC_4 (int ,struct mdp5_hw_mixer*) ;
 struct mdp5_crtc_state* FUNC_5 (struct drm_crtc_state*) ;

int FUNC_6(struct drm_crtc *VAR_4,
        struct drm_crtc_state *VAR_5,
        bool VAR_6)
{
 struct mdp5_crtc_state *VAR_7 =
   FUNC_5(VAR_5);
 struct mdp5_pipeline *VAR_8 = &VAR_7->pipeline;
 struct mdp5_interface *VAR_9;
 bool VAR_10 = 0;

 VAR_10 = !VAR_8->mixer;

 if ((VAR_6 && !VAR_8->r_mixer) ||
     (!VAR_6 && VAR_8->r_mixer))
  VAR_10 = 1;

 if (VAR_10) {
  struct mdp5_hw_mixer *VAR_11 = VAR_8->mixer;
  struct mdp5_hw_mixer *VAR_12 = VAR_8->r_mixer;
  u32 VAR_13;
  int VAR_14;

  VAR_13 = VAR_2;
  if (VAR_6)
   VAR_13 |= VAR_3;

  VAR_14 = FUNC_3(VAR_5->state, VAR_4, VAR_13,
     &VAR_8->mixer, VAR_6 ?
     &VAR_8->r_mixer : ((void*)0));
  if (VAR_14)
   return VAR_14;

  FUNC_4(VAR_5->state, VAR_11);
  if (VAR_12) {
   FUNC_4(VAR_5->state, VAR_12);
   if (!VAR_6)
    VAR_8->r_mixer = ((void*)0);
  }
 }





 VAR_9 = VAR_8->intf;

 VAR_7->err_irqmask = FUNC_0(VAR_9->num);
 VAR_7->vblank_irqmask = FUNC_1(VAR_8->mixer, VAR_9);

 if ((VAR_9->type == VAR_0) &&
     (VAR_9->mode == VAR_1)) {
  VAR_7->pp_done_irqmask = FUNC_2(VAR_8->mixer);
  VAR_7->cmd_mode = 1;
 } else {
  VAR_7->pp_done_irqmask = 0;
  VAR_7->cmd_mode = 0;
 }

 return 0;
}
