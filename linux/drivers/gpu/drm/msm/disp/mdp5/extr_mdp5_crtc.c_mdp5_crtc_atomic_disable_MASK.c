
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mdp5_kms {TYPE_2__* dev; int base; TYPE_1__* pdev; } ;
struct mdp5_crtc_state {scalar_t__ cmd_mode; } ;
struct mdp5_crtc {int enabled; int event; int err; int pp_done; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_3__* state; int name; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int * event; int active; } ;
struct TYPE_5__ {int event_lock; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct drm_crtc*,int *) ;
 int FUNC_3 (struct drm_crtc*) ;
 struct mdp5_kms* FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct mdp5_crtc* FUNC_9 (struct drm_crtc*) ;
 struct mdp5_crtc_state* FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_11(struct drm_crtc *VAR_0,
         struct drm_crtc_state *VAR_1)
{
 struct mdp5_crtc *VAR_2 = FUNC_9(VAR_0);
 struct mdp5_crtc_state *VAR_3 = FUNC_10(VAR_0->state);
 struct mdp5_kms *VAR_4 = FUNC_4(VAR_0);
 struct device *VAR_5 = &VAR_4->pdev->dev;
 unsigned long VAR_6;

 FUNC_0("%s", VAR_0->name);

 if (FUNC_1(!VAR_2->enabled))
  return;


 FUNC_3(VAR_0);

 if (VAR_3->cmd_mode)
  FUNC_5(&VAR_4->base, &VAR_2->pp_done);

 FUNC_5(&VAR_4->base, &VAR_2->err);
 FUNC_6(VAR_5);

 if (VAR_0->state->event && !VAR_0->state->active) {
  FUNC_1(VAR_2->event);
  FUNC_7(&VAR_4->dev->event_lock, VAR_6);
  FUNC_2(VAR_0, VAR_0->state->event);
  VAR_0->state->event = ((void*)0);
  FUNC_8(&VAR_4->dev->event_lock, VAR_6);
 }

 VAR_2->enabled = 0;
}
