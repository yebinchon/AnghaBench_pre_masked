
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seiko_panel {int prepared; int dvdd; int avdd; } ;
struct drm_panel {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct seiko_panel* FUNC_4 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_0)
{
 struct seiko_panel *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 if (VAR_1->prepared)
  return 0;

 VAR_2 = FUNC_3(VAR_1->dvdd);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "failed to enable dvdd: %d\n", VAR_2);
  return VAR_2;
 }


 FUNC_1(100);

 VAR_2 = FUNC_3(VAR_1->avdd);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "failed to enable avdd: %d\n", VAR_2);
  goto disable_dvdd;
 }

 VAR_1->prepared = 1;

 return 0;

disable_dvdd:
 FUNC_2(VAR_1->dvdd);
 return VAR_2;
}
