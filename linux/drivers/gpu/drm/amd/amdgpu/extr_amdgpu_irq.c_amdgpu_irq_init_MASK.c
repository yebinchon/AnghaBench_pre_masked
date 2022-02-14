
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int msi_enabled; int installed; int ih2_work; int ih1_work; int lock; } ;
struct TYPE_6__ {int num_crtc; } ;
struct amdgpu_device {TYPE_4__* ddev; int hotplug_work; TYPE_3__ irq; TYPE_1__ mode_info; int enable_virtual_display; int dev; int pdev; } ;
struct TYPE_9__ {int vblank_disable_immediate; int max_vblank_count; TYPE_2__* pdev; } ;
struct TYPE_7__ {int irq; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct amdgpu_device *VAR_3)
{
 int VAR_4 = 0;

 FUNC_9(&VAR_3->irq.lock);


 VAR_3->irq.msi_enabled = 0;

 if (FUNC_3(VAR_3)) {
  int VAR_5 = FUNC_8(VAR_3->pdev);
  if (!VAR_5) {
   VAR_3->irq.msi_enabled = 1;
   FUNC_4(VAR_3->dev, "amdgpu: using MSI.\n");
  }
 }

 if (!FUNC_2(VAR_3)) {
  if (!VAR_3->enable_virtual_display)


   VAR_3->ddev->vblank_disable_immediate = 1;

  VAR_4 = FUNC_6(VAR_3->ddev, VAR_3->mode_info.num_crtc);
  if (VAR_4)
   return VAR_4;


  FUNC_1(&VAR_3->hotplug_work,
    VAR_0);
 }

 FUNC_1(&VAR_3->irq.ih1_work, VAR_1);
 FUNC_1(&VAR_3->irq.ih2_work, VAR_2);

 VAR_3->irq.installed = 1;
 VAR_4 = FUNC_5(VAR_3->ddev, VAR_3->ddev->pdev->irq);
 if (VAR_4) {
  VAR_3->irq.installed = 0;
  if (!FUNC_2(VAR_3))
   FUNC_7(&VAR_3->hotplug_work);
  return VAR_4;
 }
 VAR_3->ddev->max_vblank_count = 0x00ffffff;

 FUNC_0("amdgpu: irq initialized.\n");
 return 0;
}
