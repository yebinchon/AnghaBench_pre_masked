
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipu_plane {int base; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct ipu_crtc {int * event; struct ipu_plane** plane; struct drm_crtc base; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int event_lock; } ;


 int FUNC_0 (struct ipu_plane**) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc*,int *) ;
 int FUNC_3 (struct drm_crtc*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_1, void *VAR_2)
{
 struct ipu_crtc *VAR_3 = VAR_2;
 struct drm_crtc *VAR_4 = &VAR_3->base;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(VAR_4);

 if (VAR_3->event) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->plane); VAR_6++) {
   struct ipu_plane *VAR_7 = VAR_3->plane[VAR_6];

   if (!VAR_7)
    continue;

   if (FUNC_4(&VAR_7->base))
    break;
  }

  if (VAR_6 == FUNC_0(VAR_3->plane)) {
   FUNC_5(&VAR_4->dev->event_lock, VAR_5);
   FUNC_2(VAR_4, VAR_3->event);
   VAR_3->event = ((void*)0);
   FUNC_3(VAR_4);
   FUNC_6(&VAR_4->dev->event_lock, VAR_5);
  }
 }

 return VAR_0;
}
