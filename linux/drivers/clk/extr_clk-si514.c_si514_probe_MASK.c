
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_10__ {TYPE_1__* of_node; } ;
struct i2c_client {TYPE_4__ dev; } ;
struct TYPE_9__ {struct clk_init_data* init; } ;
struct clk_si514 {TYPE_3__ hw; int regmap; struct i2c_client* i2c_client; } ;
struct clk_init_data {int name; scalar_t__ num_parents; scalar_t__ flags; int * ops; } ;
struct TYPE_8__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 struct clk_si514* FUNC_4 (TYPE_4__*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct clk_si514*) ;
 int FUNC_7 (TYPE_1__*,int ,TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (TYPE_1__*,char*,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_5,
  const struct i2c_device_id *VAR_6)
{
 struct clk_si514 *VAR_7;
 struct clk_init_data VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8.ops = &VAR_3;
 VAR_8.flags = 0;
 VAR_8.num_parents = 0;
 VAR_7->hw.init = &VAR_8;
 VAR_7->i2c_client = VAR_5;

 if (FUNC_8(VAR_5->dev.of_node, "clock-output-names",
   &VAR_8.name))
  VAR_8.name = VAR_5->dev.of_node->name;

 VAR_7->regmap = FUNC_5(VAR_5, &VAR_4);
 if (FUNC_0(VAR_7->regmap)) {
  FUNC_2(&VAR_5->dev, "failed to allocate register map\n");
  return FUNC_1(VAR_7->regmap);
 }

 FUNC_6(VAR_5, VAR_7);

 VAR_9 = FUNC_3(&VAR_5->dev, &VAR_7->hw);
 if (VAR_9) {
  FUNC_2(&VAR_5->dev, "clock registration failed\n");
  return VAR_9;
 }
 VAR_9 = FUNC_7(VAR_5->dev.of_node, VAR_2,
         &VAR_7->hw);
 if (VAR_9) {
  FUNC_2(&VAR_5->dev, "unable to add clk provider\n");
  return VAR_9;
 }

 return 0;
}
