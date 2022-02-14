
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max31790_data {int valid; int fault_status; int* tach; int* fan_config; int* pwm; int* target_count; int update_lock; scalar_t__ last_updated; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 struct max31790_data* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 struct max31790_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct max31790_data *FUNC_10(struct device *VAR_6)
{
 struct max31790_data *VAR_7 = FUNC_4(VAR_6);
 struct i2c_client *VAR_8 = VAR_7->client;
 struct max31790_data *VAR_9 = VAR_7;
 int VAR_10;
 int VAR_11;

 FUNC_7(&VAR_7->update_lock);

 if (FUNC_9(VAR_5, VAR_7->last_updated + VAR_0) || !VAR_7->valid) {
  VAR_11 = FUNC_5(VAR_8,
    VAR_2);
  if (VAR_11 < 0)
   goto abort;
  VAR_7->fault_status = VAR_11 & 0x3F;

  VAR_11 = FUNC_5(VAR_8,
    VAR_3);
  if (VAR_11 < 0)
   goto abort;
  VAR_7->fault_status |= (VAR_11 & 0x3F) << 6;

  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   VAR_11 = FUNC_6(VAR_8,
     FUNC_2(VAR_10));
   if (VAR_11 < 0)
    goto abort;
   VAR_7->tach[VAR_10] = VAR_11;

   if (VAR_7->fan_config[VAR_10]
       & VAR_1) {
    VAR_11 = FUNC_6(VAR_8,
     FUNC_2(VAR_4
        + VAR_10));
    if (VAR_11 < 0)
     goto abort;
    VAR_7->tach[VAR_4 + VAR_10] = VAR_11;
   } else {
    VAR_11 = FUNC_6(VAR_8,
      FUNC_1(VAR_10));
    if (VAR_11 < 0)
     goto abort;
    VAR_7->pwm[VAR_10] = VAR_11;

    VAR_11 = FUNC_6(VAR_8,
      FUNC_3(VAR_10));
    if (VAR_11 < 0)
     goto abort;
    VAR_7->target_count[VAR_10] = VAR_11;
   }
  }

  VAR_7->last_updated = VAR_5;
  VAR_7->valid = 1;
 }
 goto done;

abort:
 VAR_7->valid = 0;
 VAR_9 = FUNC_0(VAR_11);

done:
 FUNC_8(&VAR_7->update_lock);

 return VAR_9;
}
