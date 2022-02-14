
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int regmap; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_1)
{
 struct drm_psb_private *VAR_2 = VAR_1->dev_private;
 VAR_2->regmap = VAR_0;
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 return 0;
}
