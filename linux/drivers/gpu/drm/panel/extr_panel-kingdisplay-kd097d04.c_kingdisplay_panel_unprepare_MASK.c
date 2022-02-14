
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kingdisplay_panel {int prepared; int supply; int enable_gpio; int link; } ;
struct drm_panel {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 struct kingdisplay_panel* FUNC_5 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_6(struct drm_panel *VAR_0)
{
 struct kingdisplay_panel *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 if (!VAR_1->prepared)
  return 0;

 VAR_2 = FUNC_2(VAR_1->link);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "failed to enter sleep mode: %d\n",
         VAR_2);
  return VAR_2;
 }


 FUNC_3(120);

 FUNC_1(VAR_1->enable_gpio, 0);

 VAR_2 = FUNC_4(VAR_1->supply);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_1->prepared = 0;

 return 0;
}
