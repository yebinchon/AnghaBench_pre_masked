
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int mode_dev; scalar_t__ hdmi_priv; scalar_t__ iLVDS_enable; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct drm_device*,int *) ;
 int FUNC_2 (struct drm_device*,int *) ;
 int FUNC_3 (struct drm_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_1)
{
 struct drm_psb_private *VAR_2 = VAR_1->dev_private;
 if (VAR_2->iLVDS_enable)
  FUNC_2(VAR_1, &VAR_2->mode_dev);
 else
  FUNC_0(VAR_1->dev, "DSI is not supported\n");
 if (VAR_2->hdmi_priv)
  FUNC_1(VAR_1, &VAR_2->mode_dev);

 FUNC_3(VAR_1, VAR_0);

 return 0;
}
