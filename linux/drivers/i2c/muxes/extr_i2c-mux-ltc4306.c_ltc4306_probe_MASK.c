
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltc4306 {struct gpio_desc* regmap; struct chip_desc const* chip; } ;
struct i2c_mux_core {int dummy; } ;
struct i2c_client {int name; int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct gpio_desc {int dummy; } ;
struct chip_desc {int nchans; } ;
struct TYPE_2__ {size_t driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (struct gpio_desc*) ;
 struct chip_desc* VAR_8 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 struct gpio_desc* FUNC_6 (int *,char*,int ) ;
 struct gpio_desc* FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct gpio_desc*,int) ;
 TYPE_1__* FUNC_9 (int ,struct i2c_client*) ;
 int FUNC_10 (struct i2c_mux_core*,int ,int,int ) ;
 struct i2c_mux_core* FUNC_11 (struct i2c_adapter*,int *,int,int,int ,int ,int *) ;
 int FUNC_12 (struct i2c_mux_core*) ;
 struct ltc4306* FUNC_13 (struct i2c_mux_core*) ;
 int FUNC_14 (struct i2c_client*,struct i2c_mux_core*) ;
 int * VAR_9 ;
 int FUNC_15 (struct ltc4306*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct chip_desc* FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (struct gpio_desc*,int ,unsigned int) ;
 int FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_13)
{
 struct i2c_adapter *VAR_14 = VAR_13->adapter;
 const struct chip_desc *VAR_15;
 struct i2c_mux_core *VAR_16;
 struct ltc4306 *VAR_17;
 struct gpio_desc *VAR_18;
 bool VAR_19;
 unsigned int VAR_20 = 0;
 int VAR_21, VAR_22;

 VAR_15 = FUNC_16(&VAR_13->dev);

 if (!VAR_15)
  VAR_15 = &VAR_8[FUNC_9(VAR_10, VAR_13)->driver_data];

 VAR_19 = FUNC_5(&VAR_13->dev,
           "i2c-mux-idle-disconnect");

 VAR_16 = FUNC_11(VAR_14, &VAR_13->dev,
        VAR_15->nchans, sizeof(*VAR_17),
        VAR_3, VAR_12,
        VAR_19 ? VAR_9 : ((void*)0));
 if (!VAR_16)
  return -VAR_1;
 VAR_17 = FUNC_13(VAR_16);
 VAR_17->chip = VAR_15;

 FUNC_14(VAR_13, VAR_16);

 VAR_17->regmap = FUNC_7(VAR_13, &VAR_11);
 if (FUNC_0(VAR_17->regmap)) {
  VAR_22 = FUNC_1(VAR_17->regmap);
  FUNC_2(&VAR_13->dev, "Failed to allocate register map: %d\n",
   VAR_22);
  return VAR_22;
 }


 VAR_18 = FUNC_6(&VAR_13->dev, "enable", VAR_2);
 if (FUNC_0(VAR_18))
  return FUNC_1(VAR_18);

 if (VAR_18) {
  FUNC_18(1);
  FUNC_8(VAR_18, 1);
 }






 if (FUNC_17(VAR_17->regmap, VAR_6, 0) < 0) {
  FUNC_4(&VAR_13->dev, "probe failed\n");
  return -VAR_0;
 }

 if (FUNC_5(&VAR_13->dev,
          "ltc,downstream-accelerators-enable"))
  VAR_20 |= VAR_4;

 if (FUNC_5(&VAR_13->dev,
          "ltc,upstream-accelerators-enable"))
  VAR_20 |= VAR_7;

 if (FUNC_17(VAR_17->regmap, VAR_5, VAR_20) < 0)
  return -VAR_0;

 VAR_22 = FUNC_15(VAR_17);
 if (VAR_22 < 0)
  return VAR_22;


 for (VAR_21 = 0; VAR_21 < VAR_15->nchans; VAR_21++) {
  VAR_22 = FUNC_10(VAR_16, 0, VAR_21, 0);
  if (VAR_22) {
   FUNC_12(VAR_16);
   return VAR_22;
  }
 }

 FUNC_3(&VAR_13->dev,
   "registered %d multiplexed busses for I2C switch %s\n",
   VAR_21, VAR_13->name);

 return 0;
}
