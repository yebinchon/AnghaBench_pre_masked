
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f71805f_data {int valid; int has_in; int* in_high; int* in_low; int* pwm_freq; int* temp_high; int* temp_hyst; int temp_mode; int* in; int* fan_ctrl; int* pwm; int* temp; int update_lock; void* last_updated; scalar_t__ alarms; void** fan; void* last_limits; TYPE_1__* auto_points; void** fan_target; void** fan_low; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int* temp; void** fan; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct f71805f_data* FUNC_15 (struct device*) ;
 void* FUNC_16 (struct f71805f_data*,int ) ;
 int FUNC_17 (struct f71805f_data*,int ) ;
 void* VAR_2 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (void*,void*) ;

__attribute__((used)) static struct f71805f_data *FUNC_21(struct device *VAR_3)
{
 struct f71805f_data *VAR_4 = FUNC_15(VAR_3);
 int VAR_5, VAR_6;

 FUNC_18(&VAR_4->update_lock);


 if (FUNC_20(VAR_2, VAR_4->last_updated + 60 * VAR_1)
  || !VAR_4->valid) {
  for (VAR_5 = 0; VAR_5 < 11; VAR_5++) {
   if (!(VAR_4->has_in & (1 << VAR_5)))
    continue;
   VAR_4->in_high[VAR_5] = FUNC_17(VAR_4,
         FUNC_5(VAR_5));
   VAR_4->in_low[VAR_5] = FUNC_17(VAR_4,
        FUNC_6(VAR_5));
  }
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
   VAR_4->fan_low[VAR_5] = FUNC_16(VAR_4,
         FUNC_2(VAR_5));
   VAR_4->fan_target[VAR_5] = FUNC_16(VAR_4,
            FUNC_3(VAR_5));
   VAR_4->pwm_freq[VAR_5] = FUNC_17(VAR_4,
          FUNC_10(VAR_5));
  }
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
   VAR_4->temp_high[VAR_5] = FUNC_17(VAR_4,
           FUNC_13(VAR_5));
   VAR_4->temp_hyst[VAR_5] = FUNC_17(VAR_4,
           FUNC_14(VAR_5));
  }
  VAR_4->temp_mode = FUNC_17(VAR_4, VAR_0);
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
   for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
    VAR_4->auto_points[VAR_5].temp[VAR_6] =
     FUNC_17(VAR_4,
     FUNC_8(VAR_5,
         VAR_6));
    VAR_4->auto_points[VAR_5].fan[VAR_6] =
     FUNC_16(VAR_4,
     FUNC_7(VAR_5,
               VAR_6));
   }
  }

  VAR_4->last_limits = VAR_2;
 }


 if (FUNC_20(VAR_2, VAR_4->last_updated + VAR_1)
  || !VAR_4->valid) {
  for (VAR_5 = 0; VAR_5 < 11; VAR_5++) {
   if (!(VAR_4->has_in & (1 << VAR_5)))
    continue;
   VAR_4->in[VAR_5] = FUNC_17(VAR_4,
           FUNC_4(VAR_5));
  }
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
   VAR_4->fan[VAR_5] = FUNC_16(VAR_4,
     FUNC_0(VAR_5));
   VAR_4->fan_ctrl[VAR_5] = FUNC_17(VAR_4,
          FUNC_1(VAR_5));
   VAR_4->pwm[VAR_5] = FUNC_17(VAR_4,
     FUNC_9(VAR_5));
  }
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
   VAR_4->temp[VAR_5] = FUNC_17(VAR_4,
      FUNC_12(VAR_5));
  }
  VAR_4->alarms = FUNC_17(VAR_4, FUNC_11(0))
   + (FUNC_17(VAR_4, FUNC_11(1)) << 8)
   + (FUNC_17(VAR_4, FUNC_11(2)) << 16);

  VAR_4->last_updated = VAR_2;
  VAR_4->valid = 1;
 }

 FUNC_19(&VAR_4->update_lock);

 return VAR_4;
}
