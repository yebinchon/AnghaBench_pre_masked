
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {TYPE_1__* dev; } ;
struct mtk_drm_crtc {int * event; struct drm_crtc base; } ;
struct TYPE_2__ {int event_lock; } ;


 int FUNC_0 (struct drm_crtc*,int *) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mtk_drm_crtc *VAR_0)
{
 struct drm_crtc *VAR_1 = &VAR_0->base;
 unsigned long VAR_2;

 FUNC_2(&VAR_1->dev->event_lock, VAR_2);
 FUNC_0(VAR_1, VAR_0->event);
 FUNC_1(VAR_1);
 VAR_0->event = ((void*)0);
 FUNC_3(&VAR_1->dev->event_lock, VAR_2);
}
