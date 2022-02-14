
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct meson_eeclkc_data {int regmap_clk_num; TYPE_2__* hw_onecell_data; TYPE_1__** regmap_clks; scalar_t__ init_count; int init_regs; } ;
struct TYPE_4__ {int num; int * hws; } ;
struct TYPE_3__ {struct regmap* map; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct device*,int ,TYPE_2__*) ;
 int VAR_1 ;
 struct meson_eeclkc_data* FUNC_5 (struct device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct regmap*,int ,scalar_t__) ;
 struct regmap* FUNC_8 (int ) ;

int FUNC_9(struct platform_device *VAR_2)
{
 const struct meson_eeclkc_data *VAR_3;
 struct device *VAR_4 = &VAR_2->dev;
 struct regmap *VAR_5;
 int VAR_6, VAR_7;

 VAR_3 = FUNC_5(VAR_4);
 if (!VAR_3)
  return -VAR_0;


 VAR_5 = FUNC_8(FUNC_6(VAR_4->of_node));
 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_4,
   "failed to get HHI regmap\n");
  return FUNC_1(VAR_5);
 }

 if (VAR_3->init_count)
  FUNC_7(VAR_5, VAR_3->init_regs, VAR_3->init_count);


 for (VAR_7 = 0; VAR_7 < VAR_3->regmap_clk_num; VAR_7++)
  VAR_3->regmap_clks[VAR_7]->map = VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_3->hw_onecell_data->num; VAR_7++) {

  if (!VAR_3->hw_onecell_data->hws[VAR_7])
   continue;

  VAR_6 = FUNC_3(VAR_4, VAR_3->hw_onecell_data->hws[VAR_7]);
  if (VAR_6) {
   FUNC_2(VAR_4, "Clock registration failed\n");
   return VAR_6;
  }
 }

 return FUNC_4(VAR_4, VAR_1,
        VAR_3->hw_onecell_data);
}
