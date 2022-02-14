
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_13__ {TYPE_1__* of_node; } ;
struct i2c_client {TYPE_6__ dev; } ;
struct TYPE_12__ {int clk; struct clk_init_data* init; } ;
struct clk_si570 {int frequency; TYPE_5__ hw; int regmap; int max_freq; int div_offset; struct i2c_client* i2c_client; } ;
struct clk_init_data {int name; scalar_t__ num_parents; scalar_t__ flags; int * ops; } ;
typedef enum clk_si570_variant { ____Placeholder_clk_si570_variant } clk_si570_variant ;
struct TYPE_11__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 int FUNC_4 (TYPE_6__*,char*,int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 struct clk_si570* FUNC_6 (TYPE_6__*,int,int ) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,struct clk_si570*) ;
 int FUNC_9 (TYPE_1__*,int ,TYPE_5__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (TYPE_1__*,char*,int *) ;
 int FUNC_12 (TYPE_1__*,char*,int*) ;
 int VAR_6 ;
 int FUNC_13 (struct clk_si570*,int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_9,
  const struct i2c_device_id *VAR_10)
{
 struct clk_si570 *VAR_11;
 struct clk_init_data VAR_12;
 u32 VAR_13, VAR_14, VAR_15;
 int VAR_16;
 enum clk_si570_variant VAR_17 = VAR_10->driver_data;

 VAR_11 = FUNC_6(&VAR_9->dev, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_12.ops = &VAR_6;
 VAR_12.flags = 0;
 VAR_12.num_parents = 0;
 VAR_11->hw.init = &VAR_12;
 VAR_11->i2c_client = VAR_9;

 if (VAR_17 == VAR_8) {
  VAR_16 = FUNC_12(VAR_9->dev.of_node,
    "temperature-stability", &VAR_15);
  if (VAR_16) {
   FUNC_3(&VAR_9->dev,
      "'temperature-stability' property missing\n");
   return VAR_16;
  }

  if (VAR_15 == 7)
   VAR_11->div_offset = VAR_2;

  VAR_11->max_freq = VAR_3;
 } else {
  VAR_11->max_freq = VAR_4;
 }

 if (FUNC_11(VAR_9->dev.of_node, "clock-output-names",
   &VAR_12.name))
  VAR_12.name = VAR_9->dev.of_node->name;

 VAR_16 = FUNC_12(VAR_9->dev.of_node, "factory-fout",
   &VAR_14);
 if (VAR_16) {
  FUNC_3(&VAR_9->dev, "'factory-fout' property missing\n");
  return VAR_16;
 }

 VAR_11->regmap = FUNC_7(VAR_9, &VAR_7);
 if (FUNC_0(VAR_11->regmap)) {
  FUNC_3(&VAR_9->dev, "failed to allocate register map\n");
  return FUNC_1(VAR_11->regmap);
 }

 FUNC_8(VAR_9, VAR_11);
 VAR_16 = FUNC_13(VAR_11, VAR_14);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_5(&VAR_9->dev, &VAR_11->hw);
 if (VAR_16) {
  FUNC_3(&VAR_9->dev, "clock registration failed\n");
  return VAR_16;
 }
 VAR_16 = FUNC_9(VAR_9->dev.of_node, VAR_5,
         &VAR_11->hw);
 if (VAR_16) {
  FUNC_3(&VAR_9->dev, "unable to add clk provider\n");
  return VAR_16;
 }


 if (!FUNC_12(VAR_9->dev.of_node, "clock-frequency",
    &VAR_13)) {
  VAR_16 = FUNC_2(VAR_11->hw.clk, VAR_13);
  if (VAR_16) {
   FUNC_10(VAR_9->dev.of_node);
   return VAR_16;
  }
 }


 FUNC_4(&VAR_9->dev, "registered, current frequency %llu Hz\n",
   VAR_11->frequency);

 return 0;
}
