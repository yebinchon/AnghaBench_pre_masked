
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jc42_data {int extended; int orig_config; int config; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (struct device*,int ,struct jc42_data*,int *,int *) ;
 struct jc42_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct i2c_client*,struct jc42_data*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_9, const struct i2c_device_id *VAR_10)
{
 struct device *VAR_11 = &VAR_9->dev;
 struct device *VAR_12;
 struct jc42_data *VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_3(VAR_11, sizeof(struct jc42_data), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->client = VAR_9;
 FUNC_4(VAR_9, VAR_13);
 FUNC_7(&VAR_13->update_lock);

 VAR_15 = FUNC_5(VAR_9, VAR_4);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_13->extended = !!(VAR_15 & VAR_2);

 if (FUNC_1(VAR_11, "smbus-timeout-disable")) {
  int VAR_16;







  VAR_16 = FUNC_5(VAR_9, VAR_6);
  if (VAR_16 < 0)
   return VAR_16;
  FUNC_6(VAR_9, VAR_6,
          VAR_16 | VAR_7);
 }

 VAR_14 = FUNC_5(VAR_9, VAR_5);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_13->orig_config = VAR_14;
 if (VAR_14 & VAR_3) {
  VAR_14 &= ~VAR_3;
  FUNC_6(VAR_9, VAR_5, VAR_14);
 }
 VAR_13->config = VAR_14;

 VAR_12 = FUNC_2(VAR_11, VAR_9->name,
        VAR_13, &VAR_8,
        ((void*)0));
 return FUNC_0(VAR_12);
}
