
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_vblank_crtc {int queue; int enabled; } ;
struct drm_device {int irq_enabled; int num_crtcs; int irq; TYPE_1__* driver; int pdev; int vbl_lock; struct drm_vblank_crtc* vblank; } ;
struct TYPE_2__ {int (* irq_uninstall ) (struct drm_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (int ,struct drm_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (int ,int *,int *,int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct drm_device *VAR_3)
{
 unsigned long VAR_4;
 bool VAR_5;
 int VAR_6;

 VAR_5 = VAR_3->irq_enabled;
 VAR_3->irq_enabled = 0;







 if (VAR_3->num_crtcs) {
  FUNC_5(&VAR_3->vbl_lock, VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_3->num_crtcs; VAR_6++) {
   struct drm_vblank_crtc *VAR_7 = &VAR_3->vblank[VAR_6];

   if (!VAR_7->enabled)
    continue;

   FUNC_1(FUNC_2(VAR_3, VAR_1));

   FUNC_3(VAR_3, VAR_6);
   FUNC_9(&VAR_7->queue);
  }
  FUNC_6(&VAR_3->vbl_lock, VAR_4);
 }

 if (!VAR_5)
  return -VAR_2;

 FUNC_0("irq=%d\n", VAR_3->irq);

 if (FUNC_2(VAR_3, VAR_0))
  FUNC_8(VAR_3->pdev, ((void*)0), ((void*)0), ((void*)0));

 if (VAR_3->driver->irq_uninstall)
  VAR_3->driver->irq_uninstall(VAR_3);

 FUNC_4(VAR_3->irq, VAR_3);

 return 0;
}
