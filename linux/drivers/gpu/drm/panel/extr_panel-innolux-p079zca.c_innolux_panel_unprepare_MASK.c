
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct innolux_panel {int prepared; int supplies; TYPE_1__* desc; int enable_gpio; int link; } ;
struct drm_panel {int dev; } ;
struct TYPE_2__ {int num_supplies; scalar_t__ power_down_delay; scalar_t__ sleep_mode_delay; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 struct innolux_panel* FUNC_6 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_7(struct drm_panel *VAR_0)
{
 struct innolux_panel *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;

 if (!VAR_1->prepared)
  return 0;

 VAR_2 = FUNC_3(VAR_1->link);
 if (VAR_2 < 0)
  FUNC_0(VAR_0->dev, "failed to set display off: %d\n",
         VAR_2);

 VAR_2 = FUNC_2(VAR_1->link);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "failed to enter sleep mode: %d\n",
         VAR_2);
  return VAR_2;
 }

 if (VAR_1->desc->sleep_mode_delay)
  FUNC_4(VAR_1->desc->sleep_mode_delay);

 FUNC_1(VAR_1->enable_gpio, 0);

 if (VAR_1->desc->power_down_delay)
  FUNC_4(VAR_1->desc->power_down_delay);

 VAR_2 = FUNC_5(VAR_1->desc->num_supplies,
         VAR_1->supplies);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_1->prepared = 0;

 return 0;
}
