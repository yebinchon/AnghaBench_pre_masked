
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_dcu_drm_device {int regmap; } ;
struct drm_device {struct fsl_dcu_drm_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_2)
{
 struct fsl_dcu_drm_device *VAR_3 = VAR_2->dev_private;

 FUNC_0(VAR_3->regmap, VAR_1, ~0);
 FUNC_0(VAR_3->regmap, VAR_0, ~0);
}
