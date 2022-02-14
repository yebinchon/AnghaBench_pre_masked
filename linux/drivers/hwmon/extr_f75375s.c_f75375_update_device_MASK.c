
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct f75375_data {int valid; int* temp_high; int* temp_max_hyst; int* in_max; int* in_min; int fan_timer; int* pwm; int* temp11; scalar_t__ kind; int* in; int update_lock; void* last_updated; void** fan; void* last_limits; void** fan_target; void** fan_min; void** fan_max; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int VAR_1 ;
 void* FUNC_12 (struct i2c_client*,int ) ;
 int FUNC_13 (struct i2c_client*,int ) ;
 scalar_t__ VAR_2 ;
 struct f75375_data* FUNC_14 (struct i2c_client*) ;
 void* VAR_3 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (void*,void*) ;
 struct i2c_client* FUNC_18 (struct device*) ;

__attribute__((used)) static struct f75375_data *FUNC_19(struct device *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_18(VAR_4);
 struct f75375_data *VAR_6 = FUNC_14(VAR_5);
 int VAR_7;

 FUNC_15(&VAR_6->update_lock);


 if (FUNC_17(VAR_3, VAR_6->last_limits + 60 * VAR_1)
  || !VAR_6->valid) {
  for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
   VAR_6->temp_high[VAR_7] =
    FUNC_13(VAR_5, FUNC_6(VAR_7));
   VAR_6->temp_max_hyst[VAR_7] =
    FUNC_13(VAR_5, FUNC_7(VAR_7));
   VAR_6->fan_max[VAR_7] =
    FUNC_12(VAR_5, FUNC_2(VAR_7));
   VAR_6->fan_min[VAR_7] =
    FUNC_12(VAR_5, FUNC_3(VAR_7));
   VAR_6->fan_target[VAR_7] =
    FUNC_12(VAR_5, FUNC_1(VAR_7));
  }
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
   VAR_6->in_max[VAR_7] =
    FUNC_13(VAR_5, FUNC_9(VAR_7));
   VAR_6->in_min[VAR_7] =
    FUNC_13(VAR_5, FUNC_10(VAR_7));
  }
  VAR_6->fan_timer = FUNC_13(VAR_5, VAR_0);
  VAR_6->last_limits = VAR_3;
 }


 if (FUNC_17(VAR_3, VAR_6->last_updated + 2 * VAR_1)
  || !VAR_6->valid) {
  for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
   VAR_6->pwm[VAR_7] = FUNC_13(VAR_5,
    FUNC_4(VAR_7));

   VAR_6->temp11[VAR_7] =
    FUNC_13(VAR_5, FUNC_5(VAR_7)) << 8;
   if (VAR_6->kind == VAR_2)

    VAR_6->temp11[VAR_7] |=
     FUNC_13(VAR_5,
           FUNC_11(VAR_7));
   VAR_6->fan[VAR_7] =
    FUNC_12(VAR_5, FUNC_0(VAR_7));
  }
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
   VAR_6->in[VAR_7] =
    FUNC_13(VAR_5, FUNC_8(VAR_7));

  VAR_6->last_updated = VAR_3;
  VAR_6->valid = 1;
 }

 FUNC_16(&VAR_6->update_lock);
 return VAR_6;
}
