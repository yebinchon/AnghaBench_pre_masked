
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct oxnas_stdclk_data {int ngates; TYPE_3__* onecell_data; TYPE_1__** gates; } ;
struct of_device_id {struct oxnas_stdclk_data* data; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {int num; int * hws; } ;
struct TYPE_6__ {struct regmap* regmap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (struct device_node*,int ,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_5 (struct device_node*) ;
 struct of_device_id* FUNC_6 (int ,TYPE_2__*) ;
 int VAR_2 ;
 struct regmap* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->dev.of_node;
 const struct oxnas_stdclk_data *VAR_5;
 const struct of_device_id *VAR_6;
 struct regmap *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_6(VAR_2, &VAR_3->dev);
 if (!VAR_6)
  return -VAR_0;
 VAR_5 = VAR_6->data;

 VAR_7 = FUNC_7(FUNC_5(VAR_4));
 if (FUNC_0(VAR_7)) {
  FUNC_2(&VAR_3->dev, "failed to have parent regmap\n");
  return FUNC_1(VAR_7);
 }

 for (VAR_9 = 0 ; VAR_9 < VAR_5->ngates ; ++VAR_9)
  VAR_5->gates[VAR_9]->regmap = VAR_7;

 for (VAR_9 = 0; VAR_9 < VAR_5->onecell_data->num; VAR_9++) {
  if (!VAR_5->onecell_data->hws[VAR_9])
   continue;

  VAR_8 = FUNC_3(&VAR_3->dev,
        VAR_5->onecell_data->hws[VAR_9]);
  if (VAR_8)
   return VAR_8;
 }

 return FUNC_4(VAR_4, VAR_1,
          VAR_5->onecell_data);
}
