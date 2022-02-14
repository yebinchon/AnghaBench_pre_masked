
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max6697_platform_data {int resistance_cancellation; int ideality_value; int ideality_mask; int over_temperature_mask; int alert_mask; scalar_t__ beta_compensation; scalar_t__ extended_range_enable; scalar_t__ smbus_timeout_disable; } ;
struct max6697_data {scalar_t__ type; int temp_offset; int update_interval; struct max6697_chip_data* chip; } ;
struct max6697_chip_data {int channels; int valid_conf; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
typedef int p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct max6697_platform_data* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (scalar_t__,struct max6697_platform_data*) ;
 int FUNC_6 (struct max6697_platform_data*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct max6697_data *VAR_12,
        struct i2c_client *VAR_13)
{
 struct max6697_platform_data *VAR_14 = FUNC_1(&VAR_13->dev);
 struct max6697_platform_data VAR_15;
 const struct max6697_chip_data *VAR_16 = VAR_12->chip;
 int VAR_17 = VAR_16->channels;
 int VAR_18, VAR_19;






 if (!VAR_14 && !VAR_13->dev.of_node) {
  VAR_19 = FUNC_3(VAR_13, VAR_9);
  if (VAR_19 < 0)
   return VAR_19;
  if (VAR_12->type == VAR_11) {
   if (VAR_19 & VAR_0)
    VAR_12->temp_offset = 64;
   VAR_19 = FUNC_3(VAR_13,
             VAR_3);
   if (VAR_19 < 0)
    return VAR_19;
   VAR_17 += FUNC_2(VAR_19);
  } else {
   if (VAR_19 & VAR_5)
    VAR_17++;
  }
  goto done;
 }

 if (VAR_13->dev.of_node) {
  FUNC_6(&VAR_15, 0, sizeof(VAR_15));
  FUNC_5(VAR_13->dev.of_node, &VAR_15);
  VAR_14 = &VAR_15;
 }

 VAR_19 = 0;
 if (VAR_14->smbus_timeout_disable &&
     (VAR_16->valid_conf & VAR_6)) {
  VAR_19 |= VAR_6;
 }
 if (VAR_14->extended_range_enable &&
     (VAR_16->valid_conf & VAR_0)) {
  VAR_19 |= VAR_0;
  VAR_12->temp_offset = 64;
 }
 if (VAR_14->resistance_cancellation &&
     (VAR_16->valid_conf & VAR_5)) {
  VAR_19 |= VAR_5;
  VAR_17++;
 }
 if (VAR_14->beta_compensation &&
     (VAR_16->valid_conf & VAR_4)) {
  VAR_19 |= VAR_4;
 }

 VAR_18 = FUNC_4(VAR_13, VAR_9, VAR_19);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_4(VAR_13, VAR_8,
     FUNC_0(VAR_14->alert_mask));
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_4(VAR_13, VAR_10,
    FUNC_0(VAR_14->over_temperature_mask));
 if (VAR_18 < 0)
  return VAR_18;

 if (VAR_12->type == VAR_11) {
  VAR_17 += FUNC_2(VAR_14->resistance_cancellation >> 1);
  VAR_18 = FUNC_4(VAR_13, VAR_3,
     VAR_14->resistance_cancellation >> 1);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_18 = FUNC_4(VAR_13, VAR_1,
      VAR_14->ideality_value);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_18 = FUNC_4(VAR_13,
      VAR_2,
      VAR_14->ideality_mask >> 1);
  if (VAR_18 < 0)
   return VAR_18;
 }
done:
 VAR_12->update_interval = VAR_17 * VAR_7;
 return 0;
}
