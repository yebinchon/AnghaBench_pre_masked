
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_dcu_drm_device {int regmap; } ;
struct drm_device {struct fsl_dcu_drm_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 struct fsl_dcu_drm_device *VAR_4 = VAR_3->dev_private;
 unsigned int VAR_5;

 FUNC_0(VAR_4->regmap, VAR_0, &VAR_5);
 VAR_5 &= ~VAR_1;
 FUNC_1(VAR_4->regmap, VAR_0, VAR_5);

 return 0;
}
