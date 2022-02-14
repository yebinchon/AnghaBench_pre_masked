
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mdp5_crtc_state {int pp_done_irqmask; int err_irqmask; int vblank_irqmask; scalar_t__ cmd_mode; int ctl; } ;
struct TYPE_7__ {int irqmask; } ;
struct TYPE_6__ {int irqmask; } ;
struct TYPE_5__ {int irqmask; } ;
struct mdp5_crtc {TYPE_3__ pp_done; TYPE_2__ err; TYPE_1__ vblank; int flushed_mask; int * event; } ;
struct drm_device {int event_lock; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_4__* state; int name; struct drm_device* dev; } ;
struct TYPE_8__ {int * event; } ;


 int FUNC_0 (char*,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*,int ) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct mdp5_crtc* FUNC_8 (struct drm_crtc*) ;
 struct mdp5_crtc_state* FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct drm_crtc *VAR_1,
       struct drm_crtc_state *VAR_2)
{
 struct mdp5_crtc *VAR_3 = FUNC_8(VAR_1);
 struct mdp5_crtc_state *VAR_4 = FUNC_9(VAR_1->state);
 struct drm_device *VAR_5 = VAR_1->dev;
 unsigned long VAR_6;

 FUNC_0("%s: event: %p", VAR_1->name, VAR_1->state->event);

 FUNC_1(VAR_3->event);

 FUNC_6(&VAR_5->event_lock, VAR_6);
 VAR_3->event = VAR_1->state->event;
 VAR_1->state->event = ((void*)0);
 FUNC_7(&VAR_5->event_lock, VAR_6);







 if (FUNC_10(!VAR_4->ctl))
  return;

 FUNC_2(VAR_1);







 if (VAR_4->cmd_mode)
  FUNC_5(VAR_1);

 VAR_3->flushed_mask = FUNC_3(VAR_1);


 VAR_3->vblank.irqmask = VAR_4->vblank_irqmask;
 VAR_3->err.irqmask = VAR_4->err_irqmask;
 VAR_3->pp_done.irqmask = VAR_4->pp_done_irqmask;

 FUNC_4(VAR_1, VAR_0);
}
