
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malidp_hw_device {int dummy; } ;
struct malidp_drm {struct malidp_hw_device* dev; } ;
struct drm_device {int dev; struct malidp_drm* dev_private; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int ,int ,int ,char*,struct drm_device*) ;
 int VAR_3 ;
 int FUNC_2 (struct malidp_hw_device*) ;
 int VAR_4 ;
 int FUNC_3 (struct malidp_hw_device*,int ,int) ;
 int FUNC_4 (struct malidp_hw_device*,int ,int) ;

int FUNC_5(struct drm_device *VAR_5, int VAR_6)
{
 struct malidp_drm *VAR_7 = VAR_5->dev_private;
 struct malidp_hw_device *VAR_8 = VAR_7->dev;
 int VAR_9;


 FUNC_4(VAR_8, VAR_2, 0xffffffff);
 FUNC_3(VAR_8, VAR_2, 0xffffffff);
 FUNC_4(VAR_8, VAR_1, 0xffffffff);
 FUNC_3(VAR_8, VAR_1, 0xffffffff);

 VAR_9 = FUNC_1(VAR_5->dev, VAR_6, VAR_3,
     VAR_4,
     VAR_0, "malidp-de", VAR_5);
 if (VAR_9 < 0) {
  FUNC_0("failed to install DE IRQ handler\n");
  return VAR_9;
 }

 FUNC_2(VAR_8);

 return 0;
}
