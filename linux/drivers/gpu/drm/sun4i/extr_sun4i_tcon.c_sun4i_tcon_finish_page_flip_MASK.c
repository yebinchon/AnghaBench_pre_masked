
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_crtc {int * event; int crtc; } ;
struct drm_device {int event_lock; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_0,
     struct sun4i_crtc *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->event_lock, VAR_2);
 if (VAR_1->event) {
  FUNC_0(&VAR_1->crtc, VAR_1->event);
  FUNC_1(&VAR_1->crtc);
  VAR_1->event = ((void*)0);
 }
 FUNC_3(&VAR_0->event_lock, VAR_2);
}
