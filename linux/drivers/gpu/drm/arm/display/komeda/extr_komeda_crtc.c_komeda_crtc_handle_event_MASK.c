
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct komeda_wb_connector {int base; } ;
struct komeda_events {int* pipes; } ;
struct drm_crtc {TYPE_3__* dev; TYPE_2__* state; } ;
struct komeda_crtc {struct drm_crtc base; int * disable_done; struct komeda_wb_connector* wb_conn; TYPE_1__* master; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct TYPE_6__ {int event_lock; } ;
struct TYPE_5__ {struct drm_pending_vblank_event* event; } ;
struct TYPE_4__ {size_t id; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct komeda_crtc *VAR_3,
         struct komeda_events *VAR_4)
{
 struct drm_crtc *VAR_5 = &VAR_3->base;
 u32 VAR_6 = VAR_4->pipes[VAR_3->master->id];

 if (VAR_6 & VAR_2)
  FUNC_3(VAR_5);

 if (VAR_6 & VAR_0) {
  struct komeda_wb_connector *VAR_7 = VAR_3->wb_conn;

  if (VAR_7)
   FUNC_6(&VAR_7->base, 0);
  else
   FUNC_1("CRTC[%d]: EOW happen but no wb_connector.\n",
     FUNC_4(&VAR_3->base));
 }

 if (VAR_6 & VAR_0)
  FUNC_0("EOW.\n");

 if (VAR_6 & VAR_1) {
  unsigned long VAR_8;
  struct drm_pending_vblank_event *VAR_9;

  FUNC_7(&VAR_5->dev->event_lock, VAR_8);
  if (VAR_3->disable_done) {
   FUNC_2(VAR_3->disable_done);
   VAR_3->disable_done = ((void*)0);
  } else if (VAR_5->state->event) {
   VAR_9 = VAR_5->state->event;




   VAR_5->state->event = ((void*)0);
   FUNC_5(VAR_5, VAR_9);
  } else {
   FUNC_1("CRTC[%d]: FLIP happen but no pending commit.\n",
     FUNC_4(&VAR_3->base));
  }
  FUNC_8(&VAR_5->dev->event_lock, VAR_8);
 }
}
