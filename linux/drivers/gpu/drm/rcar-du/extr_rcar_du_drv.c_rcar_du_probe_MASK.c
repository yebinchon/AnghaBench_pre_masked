
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct rcar_du_device {struct drm_device* ddev; struct drm_device* mmio; int * dev; int info; } ;
struct platform_device {int dev; } ;
struct drm_device {int irq_enabled; struct rcar_du_device* dev_private; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 struct drm_device* FUNC_5 (int *,struct resource*) ;
 struct rcar_du_device* FUNC_6 (int *,int,int ) ;
 struct drm_device* FUNC_7 (int *,int *) ;
 int FUNC_8 (struct drm_device*,int ) ;
 int FUNC_9 (struct drm_device*,int) ;
 int FUNC_10 (int *) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct rcar_du_device*) ;
 int VAR_4 ;
 int FUNC_13 (struct rcar_du_device*) ;
 int FUNC_14 (struct platform_device*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_5)
{
 struct rcar_du_device *VAR_6;
 struct drm_device *VAR_7;
 struct resource *VAR_8;
 int VAR_9;


 VAR_6 = FUNC_6(&VAR_5->dev, sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->dev = &VAR_5->dev;
 VAR_6->info = FUNC_10(VAR_6->dev);

 FUNC_12(VAR_5, VAR_6);


 VAR_8 = FUNC_11(VAR_5, VAR_3, 0);
 VAR_6->mmio = FUNC_5(&VAR_5->dev, VAR_8);
 if (FUNC_1(VAR_6->mmio))
  return FUNC_2(VAR_6->mmio);


 VAR_7 = FUNC_7(&VAR_4, &VAR_5->dev);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 VAR_6->ddev = VAR_7;
 VAR_7->dev_private = VAR_6;

 VAR_9 = FUNC_13(VAR_6);
 if (VAR_9 < 0) {
  if (VAR_9 != -VAR_1)
   FUNC_3(&VAR_5->dev,
    "failed to initialize DRM/KMS (%d)\n", VAR_9);
  goto error;
 }

 VAR_7->irq_enabled = 1;





 VAR_9 = FUNC_8(VAR_7, 0);
 if (VAR_9)
  goto error;

 FUNC_0("Device %s probed\n", FUNC_4(&VAR_5->dev));

 FUNC_9(VAR_7, 32);

 return 0;

error:
 FUNC_14(VAR_5);

 return VAR_9;
}
