
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
 int FUNC_4 (struct jdi_panel*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 struct jdi_panel* FUNC_8 (struct drm_panel*) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct drm_panel *VAR_0)
{
 struct jdi_panel *VAR_1 = FUNC_8(VAR_0);
 struct device *VAR_2 = &VAR_1->dsi->dev;
 int VAR_3;

 if (VAR_1->prepared)
  return 0;

 VAR_3 = FUNC_7(FUNC_0(VAR_1->supplies), VAR_1->supplies);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2, "regulator enable failed, %d\n", VAR_3);
  return VAR_3;
 }

 FUNC_5(20);

 FUNC_2(VAR_1->dcdc_en_gpio, 1);
 FUNC_9(10, 20);

 FUNC_2(VAR_1->reset_gpio, 0);
 FUNC_9(10, 20);

 FUNC_2(VAR_1->enable_gpio, 1);
 FUNC_9(10, 20);

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2, "failed to init panel: %d\n", VAR_3);
  goto poweroff;
 }

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2, "failed to set panel on: %d\n", VAR_3);
  goto poweroff;
 }

 VAR_1->prepared = 1;

 return 0;

poweroff:
 VAR_3 = FUNC_6(FUNC_0(VAR_1->supplies), VAR_1->supplies);
 if (VAR_3 < 0)
  FUNC_1(VAR_2, "regulator disable failed, %d\n", VAR_3);

 FUNC_2(VAR_1->enable_gpio, 0);

 FUNC_2(VAR_1->reset_gpio, 1);

 FUNC_2(VAR_1->dcdc_en_gpio, 0);

 return VAR_3;
}
