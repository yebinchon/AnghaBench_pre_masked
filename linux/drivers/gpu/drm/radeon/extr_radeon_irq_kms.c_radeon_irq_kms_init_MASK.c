
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int installed; int lock; } ;
struct radeon_device {int msi_enabled; int hotplug_work; TYPE_2__ irq; TYPE_3__* ddev; int audio_work; int dp_work; int dev; int pdev; int num_crtc; } ;
struct TYPE_7__ {int vblank_disable_immediate; TYPE_1__* pdev; } ;
struct TYPE_5__ {int irq; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct radeon_device *VAR_3)
{
 int VAR_4 = 0;

 FUNC_9(&VAR_3->irq.lock);


 VAR_3->ddev->vblank_disable_immediate = 1;

 VAR_4 = FUNC_5(VAR_3->ddev, VAR_3->num_crtc);
 if (VAR_4) {
  return VAR_4;
 }


 VAR_3->msi_enabled = 0;

 if (FUNC_8(VAR_3)) {
  int VAR_5 = FUNC_7(VAR_3->pdev);
  if (!VAR_5) {
   VAR_3->msi_enabled = 1;
   FUNC_3(VAR_3->dev, "radeon: using MSI.\n");
  }
 }

 FUNC_1(&VAR_3->hotplug_work, VAR_2);
 FUNC_2(&VAR_3->dp_work, VAR_1);
 FUNC_2(&VAR_3->audio_work, VAR_0);

 VAR_3->irq.installed = 1;
 VAR_4 = FUNC_4(VAR_3->ddev, VAR_3->ddev->pdev->irq);
 if (VAR_4) {
  VAR_3->irq.installed = 0;
  FUNC_6(&VAR_3->hotplug_work);
  return VAR_4;
 }

 FUNC_0("radeon: irq initialized.\n");
 return 0;
}
