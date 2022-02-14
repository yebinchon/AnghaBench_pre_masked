
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_6__ {int of_node; int nr_resets; int * ops; } ;
struct meson_aoclk_reset_controller {TYPE_3__ reset; struct regmap* regmap; struct meson_aoclk_data* data; } ;
struct meson_aoclk_data {int num_clks; TYPE_2__* hw_data; TYPE_1__** clks; int num_reset; } ;
struct TYPE_5__ {int num; int * hws; } ;
struct TYPE_4__ {struct regmap* map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int ) ;
 struct meson_aoclk_reset_controller* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int ,void*) ;
 int FUNC_6 (struct device*,TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (struct device*) ;
 int FUNC_8 (int ) ;
 struct regmap* FUNC_9 (int ) ;

int FUNC_10(struct platform_device *VAR_5)
{
 struct meson_aoclk_reset_controller *VAR_6;
 struct meson_aoclk_data *VAR_7;
 struct device *VAR_8 = &VAR_5->dev;
 struct regmap *VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = (struct meson_aoclk_data *) FUNC_7(VAR_8);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_8, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_9 = FUNC_9(FUNC_8(VAR_8->of_node));
 if (FUNC_0(VAR_9)) {
  FUNC_2(VAR_8, "failed to get regmap\n");
  return FUNC_1(VAR_9);
 }


 VAR_6->data = VAR_7;
 VAR_6->regmap = VAR_9;
 VAR_6->reset.ops = &VAR_3;
 VAR_6->reset.nr_resets = VAR_7->num_reset,
 VAR_6->reset.of_node = VAR_8->of_node;
 VAR_10 = FUNC_6(VAR_8, &VAR_6->reset);
 if (VAR_10) {
  FUNC_2(VAR_8, "failed to register reset controller\n");
  return VAR_10;
 }


 for (VAR_11 = 0; VAR_11 < VAR_7->num_clks; VAR_11++)
  VAR_7->clks[VAR_11]->map = VAR_9;


 for (VAR_11 = 0; VAR_11 < VAR_7->hw_data->num; VAR_11++) {
  if (!VAR_7->hw_data->hws[VAR_11])
   continue;

  VAR_10 = FUNC_3(VAR_8, VAR_7->hw_data->hws[VAR_11]);
  if (VAR_10) {
   FUNC_2(VAR_8, "Clock registration failed\n");
   return VAR_10;
  }
 }

 return FUNC_5(VAR_8, VAR_4,
  (void *) VAR_7->hw_data);
}
