
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dcu_drm_device {int irq; } ;
struct TYPE_2__ {int num_crtc; } ;
struct drm_device {struct fsl_dcu_drm_device* dev_private; int dev; TYPE_1__ mode_config; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (struct fsl_dcu_drm_device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_1, unsigned long VAR_2)
{
 struct fsl_dcu_drm_device *VAR_3 = VAR_1->dev_private;
 int VAR_4;

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1->dev, "failed to initialize mode setting\n");
  return VAR_4;
 }

 VAR_4 = FUNC_6(VAR_1, VAR_1->mode_config.num_crtc);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1->dev, "failed to initialize vblank\n");
  goto done;
 }

 VAR_4 = FUNC_2(VAR_1, VAR_3->irq);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1->dev, "failed to install IRQ handler\n");
  goto done;
 }

 if (VAR_0 != 16 && VAR_0 != 24 &&
     VAR_0 != 32) {
  FUNC_1(VAR_1->dev,
   "Invalid legacyfb_depth.  Defaulting to 24bpp\n");
  VAR_0 = 24;
 }

 return 0;
done:
 FUNC_4(VAR_1);

 FUNC_5(VAR_1);
 FUNC_3(VAR_1);
 VAR_1->dev_private = ((void*)0);

 return VAR_4;
}
