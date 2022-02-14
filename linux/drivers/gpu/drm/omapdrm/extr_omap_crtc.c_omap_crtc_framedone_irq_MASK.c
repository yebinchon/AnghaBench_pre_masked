
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct omap_crtc {int pending; int pending_wait; int * event; int framedone_handler_data; int (* framedone_handler ) (int ) ;} ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {int event_lock; } ;


 int FUNC_0 (struct drm_crtc*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct omap_crtc* FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct drm_crtc *VAR_0, uint32_t VAR_1)
{
 struct omap_crtc *VAR_2 = FUNC_4(VAR_0);

 if (!VAR_2->framedone_handler)
  return;

 VAR_2->framedone_handler(VAR_2->framedone_handler_data);

 FUNC_1(&VAR_0->dev->event_lock);

 if (VAR_2->event) {
  FUNC_0(VAR_0, VAR_2->event);
  VAR_2->event = ((void*)0);
 }
 VAR_2->pending = 0;
 FUNC_2(&VAR_0->dev->event_lock);


 FUNC_5(&VAR_2->pending_wait);
}
