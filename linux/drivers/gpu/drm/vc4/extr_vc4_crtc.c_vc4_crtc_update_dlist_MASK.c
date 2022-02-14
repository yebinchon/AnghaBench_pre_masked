
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vc4_dev {int dummy; } ;
struct TYPE_5__ {int start; } ;
struct vc4_crtc_state {TYPE_2__ mm; scalar_t__ txp_armed; int feed_txp; } ;
struct vc4_crtc {int channel; TYPE_1__* event; } ;
struct drm_device {int event_lock; } ;
struct drm_crtc {TYPE_3__* state; struct drm_device* dev; } ;
struct TYPE_6__ {TYPE_1__* event; } ;
struct TYPE_4__ {int pipe; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_crtc*) ;
 scalar_t__ FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct vc4_crtc* FUNC_7 (struct drm_crtc*) ;
 struct vc4_crtc_state* FUNC_8 (TYPE_3__*) ;
 struct vc4_dev* FUNC_9 (struct drm_device*) ;

__attribute__((used)) static void FUNC_10(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct vc4_dev *VAR_2 = FUNC_9(VAR_1);
 struct vc4_crtc *VAR_3 = FUNC_7(VAR_0);
 struct vc4_crtc_state *VAR_4 = FUNC_8(VAR_0->state);

 if (VAR_0->state->event) {
  unsigned long VAR_5;

  VAR_0->state->event->pipe = FUNC_3(VAR_0);

  FUNC_2(FUNC_4(VAR_0) != 0);

  FUNC_5(&VAR_1->event_lock, VAR_5);

  if (!VAR_4->feed_txp || VAR_4->txp_armed) {
   VAR_3->event = VAR_0->state->event;
   VAR_0->state->event = ((void*)0);
  }

  FUNC_0(FUNC_1(VAR_3->channel),
     VAR_4->mm.start);

  FUNC_6(&VAR_1->event_lock, VAR_5);
 } else {
  FUNC_0(FUNC_1(VAR_3->channel),
     VAR_4->mm.start);
 }
}
