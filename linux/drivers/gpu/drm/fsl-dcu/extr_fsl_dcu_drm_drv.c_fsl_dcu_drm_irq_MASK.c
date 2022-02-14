
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_dcu_drm_device {int regmap; } ;
struct drm_device {int dev; struct fsl_dcu_drm_device* dev_private; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5;
 struct fsl_dcu_drm_device *VAR_7 = VAR_6->dev_private;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_7->regmap, VAR_0, &VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_6->dev, "read DCU_INT_STATUS failed\n");
  return VAR_3;
 }

 if (VAR_8 & VAR_1)
  FUNC_1(VAR_6, 0);

 FUNC_3(VAR_7->regmap, VAR_0, VAR_8);

 return VAR_2;
}
