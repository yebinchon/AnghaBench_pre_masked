
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sharp_nt_panel {int prepared; scalar_t__ reset_gpio; int supply; } ;
struct drm_panel {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sharp_nt_panel*) ;
 int FUNC_6 (struct sharp_nt_panel*) ;
 struct sharp_nt_panel* FUNC_7 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_8(struct drm_panel *VAR_0)
{
 struct sharp_nt_panel *VAR_1 = FUNC_7(VAR_0);
 int VAR_2;

 if (VAR_1->prepared)
  return 0;

 VAR_2 = FUNC_4(VAR_1->supply);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_2(20);

 if (VAR_1->reset_gpio) {
  FUNC_1(VAR_1->reset_gpio, 1);
  FUNC_2(1);
  FUNC_1(VAR_1->reset_gpio, 0);
  FUNC_2(1);
  FUNC_1(VAR_1->reset_gpio, 1);
  FUNC_2(10);
 }

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "failed to init panel: %d\n", VAR_2);
  goto poweroff;
 }

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "failed to set panel on: %d\n", VAR_2);
  goto poweroff;
 }

 VAR_1->prepared = 1;

 return 0;

poweroff:
 FUNC_3(VAR_1->supply);
 if (VAR_1->reset_gpio)
  FUNC_1(VAR_1->reset_gpio, 0);
 return VAR_2;
}
