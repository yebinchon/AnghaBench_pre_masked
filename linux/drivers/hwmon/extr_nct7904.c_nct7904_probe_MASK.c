
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nct7904_data {int bank_sel; int fanin_mask; int vsen_mask; int tcpu_mask; int temp_mode; int enable_dts; int has_dts; int* fan_mode; int bank_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct device*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 struct device* FUNC_1 (struct device*,int ,struct nct7904_data*,int *,int *) ;
 struct nct7904_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_19 ;
 int FUNC_4 (struct nct7904_data*,int ,scalar_t__) ;
 int FUNC_5 (struct nct7904_data*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_20,
    const struct i2c_device_id *VAR_21)
{
 struct nct7904_data *VAR_22;
 struct device *VAR_23;
 struct device *VAR_24 = &VAR_20->dev;
 int VAR_25, VAR_26;
 u32 VAR_27;
 u8 VAR_28, VAR_29;

 VAR_22 = FUNC_2(VAR_24, sizeof(struct nct7904_data), VAR_10);
 if (!VAR_22)
  return -VAR_6;

 VAR_22->client = VAR_20;
 FUNC_3(&VAR_22->bank_lock);
 VAR_22->bank_sel = -1;



 VAR_25 = FUNC_5(VAR_22, VAR_0, VAR_9);
 if (VAR_25 < 0)
  return VAR_25;
 VAR_22->fanin_mask = (VAR_25 >> 8) | ((VAR_25 & 0xff) << 8);
 VAR_27 = 0;
 VAR_25 = FUNC_5(VAR_22, VAR_0, VAR_16);
 if (VAR_25 >= 0)
  VAR_27 = (VAR_25 >> 8) | ((VAR_25 & 0xff) << 8);
 VAR_25 = FUNC_4(VAR_22, VAR_0, VAR_17);
 if (VAR_25 >= 0)
  VAR_27 |= (VAR_25 << 16);
 VAR_22->vsen_mask = VAR_27;


 VAR_25 = FUNC_4(VAR_22, VAR_0, VAR_16);
 if (VAR_25 < 0)
  return VAR_25;

 if ((VAR_25 & 0x6) == 0x6)
  VAR_22->tcpu_mask |= 1;
 if ((VAR_25 & 0x18) == 0x18)
  VAR_22->tcpu_mask |= 2;
 if ((VAR_25 & 0x20) == 0x20)
  VAR_22->tcpu_mask |= 4;
 if ((VAR_25 & 0x80) == 0x80)
  VAR_22->tcpu_mask |= 8;


 VAR_25 = FUNC_4(VAR_22, VAR_0, VAR_17);
 if (VAR_25 < 0)
  return VAR_25;
 if ((VAR_25 & 0x02) == 0x02)
  VAR_22->tcpu_mask |= 0x10;


 VAR_25 = FUNC_4(VAR_22, VAR_0, VAR_18);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_22->temp_mode = 0;
 for (VAR_26 = 0; VAR_26 < 4; VAR_26++) {
  VAR_28 = (VAR_25 >> (VAR_26 * 2)) & 0x03;
  VAR_29 = (1 << VAR_26);
  if (VAR_28 == VAR_15) {
   VAR_22->tcpu_mask &= ~VAR_29;
  } else if (VAR_28 == VAR_12 && VAR_26 < 2) {
   VAR_22->temp_mode |= VAR_29;
   VAR_22->vsen_mask &= ~(0x06 << (VAR_26 * 2));
  } else if (VAR_28 == VAR_13) {
   VAR_22->vsen_mask &= ~(0x02 << (VAR_26 * 2));
  } else {

   VAR_22->tcpu_mask &= ~VAR_29;
   VAR_22->vsen_mask &= ~(0x06 << (VAR_26 * 2));
  }
 }


 VAR_25 = FUNC_4(VAR_22, VAR_1, VAR_11);
 if (VAR_25 < 0)
  return VAR_25;
 if (VAR_25 & 0x80) {
  VAR_22->enable_dts = 1;
 } else {
  VAR_25 = FUNC_4(VAR_22, VAR_1, VAR_14);
  if (VAR_25 < 0)
   return VAR_25;
  if (VAR_25 & 0x80)
   VAR_22->enable_dts = 0x3;
 }


 if (VAR_22->enable_dts) {
  VAR_25 = FUNC_4(VAR_22, VAR_0, VAR_3);
  if (VAR_25 < 0)
   return VAR_25;
  VAR_22->has_dts = VAR_25 & 0xF;
  if (VAR_22->enable_dts & VAR_5) {
   VAR_25 = FUNC_4(VAR_22, VAR_0, VAR_4);
   if (VAR_25 < 0)
    return VAR_25;
   VAR_22->has_dts |= (VAR_25 & 0xF) << 4;
  }
 }

 for (VAR_26 = 0; VAR_26 < VAR_8; VAR_26++) {
  VAR_25 = FUNC_4(VAR_22, VAR_2, VAR_7 + VAR_26);
  if (VAR_25 < 0)
   return VAR_25;
  VAR_22->fan_mode[VAR_26] = VAR_25;
 }

 VAR_23 =
  FUNC_1(VAR_24, VAR_20->name, VAR_22,
           &VAR_19, ((void*)0));
 return FUNC_0(VAR_23);
}
