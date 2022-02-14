
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ili9322 {int dev; int regmap; } ;
struct drm_panel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct ili9322* FUNC_1 (struct drm_panel*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_2)
{
 struct ili9322 *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->regmap, VAR_0,
      VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_3->dev, "unable to go to standby mode\n");
  return VAR_4;
 }

 return 0;
}
