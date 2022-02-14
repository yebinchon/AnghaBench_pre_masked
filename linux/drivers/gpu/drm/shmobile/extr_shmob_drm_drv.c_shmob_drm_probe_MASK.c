
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct shmob_drm_platform_data {int clk_source; } ;
struct shmob_drm_device {struct drm_device* ddev; struct drm_device* mmio; int irq_lock; struct shmob_drm_platform_data* pdata; TYPE_1__* dev; } ;
struct resource {int dummy; } ;
struct TYPE_5__ {struct shmob_drm_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct drm_device {struct shmob_drm_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct drm_device* FUNC_3 (TYPE_1__*,struct resource*) ;
 struct shmob_drm_device* FUNC_4 (TYPE_1__*,int,int ) ;
 struct drm_device* FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*,int ) ;
 int FUNC_8 (struct drm_device*,int ) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*,int) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct shmob_drm_device*) ;
 int VAR_4 ;
 int FUNC_16 (struct shmob_drm_device*) ;
 int FUNC_17 (struct shmob_drm_device*) ;
 int FUNC_18 (struct shmob_drm_device*,unsigned int) ;
 int FUNC_19 (struct shmob_drm_device*,int ) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_5)
{
 struct shmob_drm_platform_data *VAR_6 = VAR_5->dev.platform_data;
 struct shmob_drm_device *VAR_7;
 struct drm_device *VAR_8;
 struct resource *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 if (VAR_6 == ((void*)0)) {
  FUNC_2(&VAR_5->dev, "no platform data\n");
  return -VAR_0;
 }





 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_7->dev = &VAR_5->dev;
 VAR_7->pdata = VAR_6;
 FUNC_20(&VAR_7->irq_lock);

 FUNC_15(VAR_5, VAR_7);

 VAR_9 = FUNC_14(VAR_5, VAR_3, 0);
 VAR_7->mmio = FUNC_3(&VAR_5->dev, VAR_9);
 if (FUNC_0(VAR_7->mmio))
  return FUNC_1(VAR_7->mmio);

 VAR_11 = FUNC_19(VAR_7, VAR_6->clk_source);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_16(VAR_7);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_8 = FUNC_5(&VAR_4, &VAR_5->dev);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_7->ddev = VAR_8;
 VAR_8->dev_private = VAR_7;

 VAR_11 = FUNC_17(VAR_7);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_5->dev, "failed to initialize mode setting\n");
  goto err_free_drm_dev;
 }

 for (VAR_10 = 0; VAR_10 < 4; ++VAR_10) {
  VAR_11 = FUNC_18(VAR_7, VAR_10);
  if (VAR_11 < 0) {
   FUNC_2(&VAR_5->dev, "failed to create plane %u\n", VAR_10);
   goto err_modeset_cleanup;
  }
 }

 VAR_11 = FUNC_12(VAR_8, 1);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_5->dev, "failed to initialize vblank\n");
  goto err_modeset_cleanup;
 }

 VAR_11 = FUNC_8(VAR_8, FUNC_13(VAR_5, 0));
 if (VAR_11 < 0) {
  FUNC_2(&VAR_5->dev, "failed to install IRQ handler\n");
  goto err_modeset_cleanup;
 }





 VAR_11 = FUNC_7(VAR_8, 0);
 if (VAR_11 < 0)
  goto err_irq_uninstall;

 return 0;

err_irq_uninstall:
 FUNC_9(VAR_8);
err_modeset_cleanup:
 FUNC_10(VAR_8);
 FUNC_11(VAR_8);
err_free_drm_dev:
 FUNC_6(VAR_8);

 return VAR_11;
}
