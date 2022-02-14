
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp5_pipeline {int dummy; } ;
struct mdp5_ctl {int dummy; } ;
struct mdp5_crtc_state {struct mdp5_ctl* ctl; struct mdp5_pipeline pipeline; } ;
struct mdp5_crtc {struct drm_pending_vblank_event* event; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int event_lock; } ;
struct drm_crtc {TYPE_1__* state; int name; struct drm_device* dev; } ;
struct TYPE_2__ {int enable; } ;


 int FUNC_0 (char*,int ,struct drm_pending_vblank_event*) ;
 int FUNC_1 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_2 (struct mdp5_ctl*,struct mdp5_pipeline*,int *,int *,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct mdp5_crtc* FUNC_5 (struct drm_crtc*) ;
 struct mdp5_crtc_state* FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_0, struct drm_file *VAR_1)
{
 struct mdp5_crtc_state *VAR_2 = FUNC_6(VAR_0->state);
 struct mdp5_pipeline *VAR_3 = &VAR_2->pipeline;
 struct mdp5_crtc *VAR_4 = FUNC_5(VAR_0);
 struct mdp5_ctl *VAR_5 = VAR_2->ctl;
 struct drm_device *VAR_6 = VAR_0->dev;
 struct drm_pending_vblank_event *VAR_7;
 unsigned long VAR_8;

 FUNC_3(&VAR_6->event_lock, VAR_8);
 VAR_7 = VAR_4->event;
 if (VAR_7) {
  VAR_4->event = ((void*)0);
  FUNC_0("%s: send event: %p", VAR_0->name, VAR_7);
  FUNC_1(VAR_0, VAR_7);
 }
 FUNC_4(&VAR_6->event_lock, VAR_8);

 if (VAR_5 && !VAR_0->state->enable) {

  FUNC_2(VAR_5, VAR_3, ((void*)0), ((void*)0), 0, 0);


 }
}
