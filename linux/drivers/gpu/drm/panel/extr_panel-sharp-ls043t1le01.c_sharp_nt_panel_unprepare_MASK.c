
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sharp_nt_panel {int prepared; scalar_t__ reset_gpio; int supply; } ;
struct drm_panel {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sharp_nt_panel*) ;
 struct sharp_nt_panel* FUNC_4 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_0)
{
 struct sharp_nt_panel *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 if (!VAR_1->prepared)
  return 0;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "failed to set panel off: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_2(VAR_1->supply);
 if (VAR_1->reset_gpio)
  FUNC_1(VAR_1->reset_gpio, 0);

 VAR_1->prepared = 0;

 return 0;
}
