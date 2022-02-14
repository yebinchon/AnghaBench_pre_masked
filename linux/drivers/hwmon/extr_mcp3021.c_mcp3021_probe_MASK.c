
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct mcp3021_data {int vdd; int hwmon_dev; int output_res; int sar_mask; int sar_shift; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_5__ {int kobj; struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; int adapter; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 TYPE_4__ VAR_14 ;
 int* FUNC_2 (TYPE_1__*) ;
 struct mcp3021_data* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct i2c_client*,struct mcp3021_data*) ;


 int FUNC_7 (struct device_node*,char*,int*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_15,
    const struct i2c_device_id *VAR_16)
{
 int VAR_17;
 struct mcp3021_data *VAR_18 = ((void*)0);
 struct device_node *VAR_19 = VAR_15->dev.of_node;

 if (!FUNC_5(VAR_15->adapter, VAR_4))
  return -VAR_1;

 VAR_18 = FUNC_3(&VAR_15->dev, sizeof(struct mcp3021_data),
       VAR_3);
 if (!VAR_18)
  return -VAR_2;

 FUNC_6(VAR_15, VAR_18);

 if (VAR_19) {
  if (!FUNC_7(VAR_19, "reference-voltage-microvolt",
       &VAR_18->vdd))
   VAR_18->vdd /= 1000;
  else
   VAR_18->vdd = VAR_8;
 } else {
  u32 *VAR_20 = FUNC_2(&VAR_15->dev);

  if (VAR_20)
   VAR_18->vdd = *VAR_20;
  else
   VAR_18->vdd = VAR_8;
 }

 switch (VAR_16->driver_data) {
 case 129:
  VAR_18->sar_shift = VAR_7;
  VAR_18->sar_mask = VAR_6;
  VAR_18->output_res = VAR_5;
  break;

 case 128:
  VAR_18->sar_shift = VAR_13;
  VAR_18->sar_mask = VAR_12;
  VAR_18->output_res = VAR_11;
  break;
 }

 if (VAR_18->vdd > VAR_9 || VAR_18->vdd < VAR_10)
  return -VAR_0;

 VAR_17 = FUNC_8(&VAR_15->dev.kobj, &VAR_14.attr);
 if (VAR_17)
  return VAR_17;

 VAR_18->hwmon_dev = FUNC_4(&VAR_15->dev);
 if (FUNC_0(VAR_18->hwmon_dev)) {
  VAR_17 = FUNC_1(VAR_18->hwmon_dev);
  goto exit_remove;
 }

 return 0;

exit_remove:
 FUNC_9(&VAR_15->dev.kobj, &VAR_14.attr);
 return VAR_17;
}
