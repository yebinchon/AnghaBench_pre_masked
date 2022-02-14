
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm90_data {int valid; unsigned long last_updated; int* temp8; int* temp11; int alarms; scalar_t__ kind; int config_orig; int alert_alarms; int config; scalar_t__ reg_local_ext; int update_interval; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (int *,char*) ;
 struct lm90_data* FUNC_1 (struct device*) ;
 unsigned long VAR_12 ;
 int FUNC_2 (struct i2c_client*,int ,scalar_t__) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct lm90_data*,int) ;
 int FUNC_5 (struct lm90_data*,int) ;
 int FUNC_6 (struct device*) ;
 scalar_t__ VAR_13 ;
 unsigned long FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_14)
{
 struct lm90_data *VAR_15 = FUNC_1(VAR_14);
 struct i2c_client *VAR_16 = VAR_15->client;
 unsigned long VAR_17;
 int VAR_18;

 if (!VAR_15->valid) {
  VAR_18 = FUNC_6(VAR_14);
  if (VAR_18 < 0)
   return VAR_18;
 }

 VAR_17 = VAR_15->last_updated +
        FUNC_7(VAR_15->update_interval);
 if (FUNC_8(VAR_12, VAR_17) || !VAR_15->valid) {
  FUNC_0(&VAR_16->dev, "Updating lm90 data.\n");

  VAR_15->valid = 0;

  VAR_18 = FUNC_3(VAR_16, VAR_1);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_15->temp8[VAR_7] = VAR_18;

  VAR_18 = FUNC_3(VAR_16, VAR_0);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_15->temp8[VAR_6] = VAR_18;

  if (VAR_15->reg_local_ext) {
   VAR_18 = FUNC_2(VAR_16, VAR_2,
       VAR_15->reg_local_ext);
   if (VAR_18 < 0)
    return VAR_18;
   VAR_15->temp11[VAR_8] = VAR_18;
  } else {
   VAR_18 = FUNC_3(VAR_16, VAR_2);
   if (VAR_18 < 0)
    return VAR_18;
   VAR_15->temp11[VAR_8] = VAR_18 << 8;
  }
  VAR_18 = FUNC_2(VAR_16, VAR_3,
      VAR_4);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_15->temp11[VAR_11] = VAR_18;

  VAR_18 = FUNC_3(VAR_16, VAR_5);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_15->alarms = VAR_18;

  if (VAR_15->kind == VAR_13) {
   VAR_18 = FUNC_4(VAR_15, 1);
   if (VAR_18 < 0)
    return VAR_18;

   VAR_18 = FUNC_2(VAR_16, VAR_3,
       VAR_4);
   if (VAR_18 < 0) {
    FUNC_4(VAR_15, 0);
    return VAR_18;
   }
   VAR_15->temp11[VAR_10] = VAR_18;

   FUNC_4(VAR_15, 0);

   VAR_18 = FUNC_3(VAR_16, VAR_9);
   if (VAR_18 < 0)
    return VAR_18;
   VAR_15->alarms |= VAR_18 << 8;
  }





  if (!(VAR_15->config_orig & 0x80) &&
      !(VAR_15->alarms & VAR_15->alert_alarms)) {
   if (VAR_15->config & 0x80) {
    FUNC_0(&VAR_16->dev, "Re-enabling ALERT#\n");
    FUNC_5(VAR_15, VAR_15->config & ~0x80);
   }
  }

  VAR_15->last_updated = VAR_12;
  VAR_15->valid = 1;
 }

 return 0;
}
