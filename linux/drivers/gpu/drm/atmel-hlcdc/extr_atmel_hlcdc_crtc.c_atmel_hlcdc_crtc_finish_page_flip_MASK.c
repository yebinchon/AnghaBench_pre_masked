
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int event_lock; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct atmel_hlcdc_crtc {int * event; TYPE_1__ base; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct atmel_hlcdc_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->base.dev;
 unsigned long VAR_2;

 FUNC_2(&VAR_1->event_lock, VAR_2);
 if (VAR_0->event) {
  FUNC_0(&VAR_0->base, VAR_0->event);
  FUNC_1(&VAR_0->base);
  VAR_0->event = ((void*)0);
 }
 FUNC_3(&VAR_1->event_lock, VAR_2);
}
