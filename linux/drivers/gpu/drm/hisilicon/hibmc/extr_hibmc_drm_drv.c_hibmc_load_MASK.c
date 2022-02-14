
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hibmc_drm_private {int msi_enabled; struct drm_device* dev; } ;
struct TYPE_3__ {int num_crtc; } ;
struct drm_device {TYPE_2__* pdev; TYPE_1__ mode_config; struct hibmc_drm_private* dev_private; int dev; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct hibmc_drm_private* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct drm_device*,int ) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int ) ;
 int FUNC_6 (struct hibmc_drm_private*) ;
 int FUNC_7 (struct hibmc_drm_private*) ;
 int FUNC_8 (struct hibmc_drm_private*) ;
 int FUNC_9 (struct hibmc_drm_private*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(struct drm_device *VAR_2)
{
 struct hibmc_drm_private *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3) {
  FUNC_0("no memory to allocate for hibmc_drm_private\n");
  return -VAR_0;
 }
 VAR_2->dev_private = VAR_3;
 VAR_3->dev = VAR_2;

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_9(VAR_3);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_5(VAR_2, VAR_2->mode_config.num_crtc);
 if (VAR_4) {
  FUNC_0("failed to initialize vblank: %d\n", VAR_4);
  goto err;
 }

 VAR_3->msi_enabled = 0;
 VAR_4 = FUNC_11(VAR_2->pdev);
 if (VAR_4) {
  FUNC_1("enabling MSI failed: %d\n", VAR_4);
 } else {
  VAR_3->msi_enabled = 1;
  VAR_4 = FUNC_3(VAR_2, VAR_2->pdev->irq);
  if (VAR_4)
   FUNC_1("install irq failed: %d\n", VAR_4);
 }


 FUNC_4(VAR_2);

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4) {
  FUNC_0("failed to initialize fbdev: %d\n", VAR_4);
  goto err;
 }

 return 0;

err:
 FUNC_10(VAR_2);
 FUNC_0("failed to initialize drm driver: %d\n", VAR_4);
 return VAR_4;
}
