
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jdi_panel {int prepared; int dcdc_en_gpio; int reset_gpio; int enable_gpio; int supplies; TYPE_1__* dsi; } ;
struct drm_panel {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct jdi_panel*) ;
 int FUNC_4 (int ,int ) ;
 struct jdi_panel* FUNC_5 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_6(struct drm_panel *VAR_0)
{
 struct jdi_panel *VAR_1 = FUNC_5(VAR_0);
 struct device *VAR_2 = &VAR_1->dsi->dev;
 int VAR_3;

 if (!VAR_1->prepared)
  return 0;

 FUNC_3(VAR_1);

 VAR_3 = FUNC_4(FUNC_0(VAR_1->supplies), VAR_1->supplies);
 if (VAR_3 < 0)
  FUNC_1(VAR_2, "regulator disable failed, %d\n", VAR_3);

 FUNC_2(VAR_1->enable_gpio, 0);

 FUNC_2(VAR_1->reset_gpio, 1);

 FUNC_2(VAR_1->dcdc_en_gpio, 0);

 VAR_1->prepared = 0;

 return 0;
}
