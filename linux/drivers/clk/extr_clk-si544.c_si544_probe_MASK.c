
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct i2c_device_id {int driver_data; } ;
struct TYPE_9__ {TYPE_1__* of_node; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct TYPE_10__ {struct clk_init_data* init; } ;
struct clk_si544 {TYPE_3__ hw; int regmap; int speed_grade; struct i2c_client* i2c_client; } ;
struct clk_init_data {int name; scalar_t__ num_parents; scalar_t__ flags; int * ops; } ;
struct TYPE_8__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 struct clk_si544* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,struct clk_si544*) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (TYPE_1__*,char*,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_6,
  const struct i2c_device_id *VAR_7)
{
 struct clk_si544 *VAR_8;
 struct clk_init_data VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(&VAR_6->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9.ops = &VAR_4;
 VAR_9.flags = 0;
 VAR_9.num_parents = 0;
 VAR_8->hw.init = &VAR_9;
 VAR_8->i2c_client = VAR_6;
 VAR_8->speed_grade = VAR_7->driver_data;

 if (FUNC_8(VAR_6->dev.of_node, "clock-output-names",
   &VAR_9.name))
  VAR_9.name = VAR_6->dev.of_node->name;

 VAR_8->regmap = FUNC_6(VAR_6, &VAR_5);
 if (FUNC_0(VAR_8->regmap))
  return FUNC_1(VAR_8->regmap);

 FUNC_7(VAR_6, VAR_8);


 VAR_10 = FUNC_9(VAR_8->regmap, VAR_2, 0);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_3(&VAR_6->dev, &VAR_8->hw);
 if (VAR_10) {
  FUNC_2(&VAR_6->dev, "clock registration failed\n");
  return VAR_10;
 }
 VAR_10 = FUNC_5(&VAR_6->dev, VAR_3,
       &VAR_8->hw);
 if (VAR_10) {
  FUNC_2(&VAR_6->dev, "unable to add clk provider\n");
  return VAR_10;
 }

 return 0;
}
