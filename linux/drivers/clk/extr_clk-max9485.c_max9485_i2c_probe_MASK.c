
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct max9485_driver_data {TYPE_2__* hw; int reg_value; struct i2c_client* client; int reset_gpio; int supply; int xclk; } ;
struct i2c_device_id {int dummy; } ;
struct device {int of_node; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_8__ {TYPE_1__* init; } ;
struct TYPE_7__ {int parent_index; char const* name; int enable_bit; int ops; } ;
struct TYPE_5__ {char const* name; int num_parents; char const** parent_names; int flags; int * ops; } ;
struct TYPE_6__ {TYPE_4__ hw; struct max9485_driver_data* drvdata; TYPE_1__ init; int enable_bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,TYPE_4__*) ;
 int FUNC_6 (struct device*,char*,int ) ;
 struct max9485_driver_data* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int ,struct max9485_driver_data*) ;
 int FUNC_9 (struct device*,char*) ;
 int FUNC_10 (struct i2c_client*,int *,int) ;
 int FUNC_11 (struct i2c_client*,struct max9485_driver_data*) ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_12 (int ,char*,int,char const**) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_7,
        const struct i2c_device_id *VAR_8)
{
 struct max9485_driver_data *VAR_9;
 struct device *VAR_10 = &VAR_7->dev;
 const char *VAR_11;
 int VAR_12, VAR_13;

 VAR_9 = FUNC_7(VAR_10, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->xclk = FUNC_4(VAR_10, "xclk");
 if (FUNC_0(VAR_9->xclk))
  return FUNC_1(VAR_9->xclk);

 VAR_11 = FUNC_2(VAR_9->xclk);

 VAR_9->supply = FUNC_9(VAR_10, "vdd");
 if (FUNC_0(VAR_9->supply))
  return FUNC_1(VAR_9->supply);

 VAR_13 = FUNC_13(VAR_9->supply);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_9->reset_gpio =
  FUNC_6(VAR_10, "reset", VAR_3);
 if (FUNC_0(VAR_9->reset_gpio))
  return FUNC_1(VAR_9->reset_gpio);

 FUNC_11(VAR_7, VAR_9);
 VAR_9->client = VAR_7;

 VAR_13 = FUNC_10(VAR_9->client, &VAR_9->reg_value,
         sizeof(VAR_9->reg_value));
 if (VAR_13 < 0) {
  FUNC_3(VAR_10, "Unable to read device register: %d\n", VAR_13);
  return VAR_13;
 }

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  int VAR_14 = VAR_5[VAR_12].parent_index;
  const char *VAR_15;

  if (FUNC_12(VAR_10->of_node,
        "clock-output-names",
        VAR_12, &VAR_15) == 0) {
   VAR_9->hw[VAR_12].init.name = VAR_15;
  } else {
   VAR_9->hw[VAR_12].init.name = VAR_5[VAR_12].name;
  }

  VAR_9->hw[VAR_12].init.ops = &VAR_5[VAR_12].ops;
  VAR_9->hw[VAR_12].init.num_parents = 1;
  VAR_9->hw[VAR_12].init.flags = 0;

  if (VAR_14 > 0) {
   VAR_9->hw[VAR_12].init.parent_names =
    &VAR_9->hw[VAR_14].init.name;
   VAR_9->hw[VAR_12].init.flags |= VAR_0;
  } else {
   VAR_9->hw[VAR_12].init.parent_names = &VAR_11;
  }

  VAR_9->hw[VAR_12].enable_bit = VAR_5[VAR_12].enable_bit;
  VAR_9->hw[VAR_12].hw.init = &VAR_9->hw[VAR_12].init;
  VAR_9->hw[VAR_12].drvdata = VAR_9;

  VAR_13 = FUNC_5(VAR_10, &VAR_9->hw[VAR_12].hw);
  if (VAR_13 < 0)
   return VAR_13;
 }

 return FUNC_8(VAR_10, VAR_6, VAR_9);
}
