
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_pending_vblank_event {int dummy; } ;
struct TYPE_7__ {int flags; } ;
struct drm_crtc_state {TYPE_2__ adjusted_mode; } ;
struct TYPE_6__ {int id; } ;
struct drm_crtc {TYPE_5__* dev; TYPE_4__* state; int name; TYPE_1__ base; } ;
struct armada_crtc {TYPE_3__* variant; } ;
struct TYPE_10__ {int event_lock; } ;
struct TYPE_9__ {struct drm_pending_vblank_event* event; int active; } ;
struct TYPE_8__ {int (* disable ) (struct armada_crtc*) ;} ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct armada_crtc*,int) ;
 int FUNC_2 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*) ;
 struct armada_crtc* FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct armada_crtc*) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_1,
        struct drm_crtc_state *VAR_2)
{
 struct armada_crtc *VAR_3 = FUNC_5(VAR_1);
 struct drm_pending_vblank_event *VAR_4;

 FUNC_0("[CRTC:%d:%s]\n", VAR_1->base.id, VAR_1->name);

 if (VAR_2->adjusted_mode.flags & VAR_0)
  FUNC_4(VAR_1);

 FUNC_3(VAR_1);
 FUNC_1(VAR_3, 0);

 if (!VAR_1->state->active) {




  if (VAR_3->variant->disable)
   VAR_3->variant->disable(VAR_3);





  VAR_4 = VAR_1->state->event;
  VAR_1->state->event = ((void*)0);
  if (VAR_4) {
   FUNC_6(&VAR_1->dev->event_lock);
   FUNC_2(VAR_1, VAR_4);
   FUNC_7(&VAR_1->dev->event_lock);
  }
 }
}
