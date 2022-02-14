
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vc4_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ start; } ;
struct vc4_crtc_state {scalar_t__ feed_txp; TYPE_1__ mm; } ;
struct drm_crtc {int state; struct drm_device* dev; } ;
struct vc4_crtc {int channel; int * event; struct drm_crtc base; } ;
struct drm_device {int event_lock; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_crtc*,int *) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct vc4_crtc_state* FUNC_6 (int ) ;
 struct vc4_dev* FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*,int ) ;

__attribute__((used)) static void FUNC_9(struct vc4_crtc *VAR_0)
{
 struct drm_crtc *VAR_1 = &VAR_0->base;
 struct drm_device *VAR_2 = VAR_1->dev;
 struct vc4_dev *VAR_3 = FUNC_7(VAR_2);
 struct vc4_crtc_state *VAR_4 = FUNC_6(VAR_1->state);
 u32 VAR_5 = VAR_0->channel;
 unsigned long VAR_6;

 FUNC_4(&VAR_2->event_lock, VAR_6);
 if (VAR_0->event &&
     (VAR_4->mm.start == FUNC_0(FUNC_1(VAR_5)) ||
      VAR_4->feed_txp)) {
  FUNC_2(VAR_1, VAR_0->event);
  VAR_0->event = ((void*)0);
  FUNC_3(VAR_1);







  FUNC_8(VAR_2, VAR_0->channel);
 }
 FUNC_5(&VAR_2->event_lock, VAR_6);
}
