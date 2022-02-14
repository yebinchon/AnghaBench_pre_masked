
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83627hf_data {scalar_t__ type; int valid; int* in; int* in_min; int* in_max; int* fan; int* fan_min; int* pwm; int* pwm_freq; int* pwm_enable; int* temp; int* temp_max; int* temp_max_hyst; int alarms; int beep_mask; int update_lock; scalar_t__ last_updated; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int* VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 struct w83627hf_data* FUNC_6 (struct device*) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_12 ;
 int FUNC_10 (struct w83627hf_data*,int ) ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int FUNC_11 (struct w83627hf_data*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static struct w83627hf_data *FUNC_12(struct device *VAR_18)
{
 struct w83627hf_data *VAR_19 = FUNC_6(VAR_18);
 int VAR_20, VAR_21 = (VAR_19->type == VAR_17) ? 2 : 3;
 int VAR_22 = (VAR_19->type == VAR_17) ? 2 : 3;

 FUNC_7(&VAR_19->update_lock);

 if (FUNC_9(VAR_11, VAR_19->last_updated + VAR_0 + VAR_0 / 2)
     || !VAR_19->valid) {
  for (VAR_20 = 0; VAR_20 <= 8; VAR_20++) {

   if (((VAR_19->type == VAR_17) && (VAR_20 == 1)) ||
       ((VAR_19->type != VAR_12 && VAR_19->type != VAR_17)
       && (VAR_20 == 5 || VAR_20 == 6)))
    continue;
   VAR_19->in[VAR_20] =
       FUNC_10(VAR_19, FUNC_3(VAR_20));
   VAR_19->in_min[VAR_20] =
       FUNC_10(VAR_19,
            FUNC_5(VAR_20));
   VAR_19->in_max[VAR_20] =
       FUNC_10(VAR_19,
            FUNC_4(VAR_20));
  }
  for (VAR_20 = 0; VAR_20 <= 2; VAR_20++) {
   VAR_19->fan[VAR_20] =
       FUNC_10(VAR_19, FUNC_0(VAR_20));
   VAR_19->fan_min[VAR_20] =
       FUNC_10(VAR_19,
            FUNC_1(VAR_20));
  }
  for (VAR_20 = 0; VAR_20 <= 2; VAR_20++) {
   u8 VAR_23 = FUNC_10(VAR_19,
    FUNC_2(VAR_19->type, VAR_20));

    if (VAR_19->type == VAR_16)
    VAR_23 &= 0xf0;
   VAR_19->pwm[VAR_20] = VAR_23;
   if (VAR_20 == 1 &&
       (VAR_19->type == VAR_12 || VAR_19->type == VAR_17))
    break;
  }
  if (VAR_19->type == VAR_12) {
    u8 VAR_24 = FUNC_10(VAR_19,
      VAR_1);
    VAR_19->pwm_freq[0] = VAR_24 & 0x07;
    VAR_19->pwm_freq[1] = (VAR_24 >> 4) & 0x07;
  } else if (VAR_19->type != VAR_16) {
   for (VAR_20 = 1; VAR_20 <= 3; VAR_20++) {
    VAR_19->pwm_freq[VAR_20 - 1] =
     FUNC_10(VAR_19,
      VAR_4[VAR_20 - 1]);
    if (VAR_20 == 2 && (VAR_19->type == VAR_17))
     break;
   }
  }
  if (VAR_19->type != VAR_12) {
   for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++) {
    u8 VAR_25 = FUNC_10(VAR_19,
     VAR_3[VAR_20]);
    VAR_19->pwm_enable[VAR_20] =
     ((VAR_25 >> VAR_2[VAR_20])
     & 0x03) + 1;
   }
  }
  for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
   VAR_19->temp[VAR_20] = FUNC_10(
      VAR_19, VAR_13[VAR_20]);
   VAR_19->temp_max[VAR_20] = FUNC_10(
      VAR_19, VAR_15[VAR_20]);
   VAR_19->temp_max_hyst[VAR_20] = FUNC_10(
      VAR_19, VAR_14[VAR_20]);
  }

  FUNC_11(VAR_19);

  VAR_19->alarms =
      FUNC_10(VAR_19, VAR_5) |
      (FUNC_10(VAR_19, VAR_6) << 8) |
      (FUNC_10(VAR_19, VAR_7) << 16);
  VAR_20 = FUNC_10(VAR_19, VAR_9);
  VAR_19->beep_mask = (VAR_20 << 8) |
      FUNC_10(VAR_19, VAR_8) |
      FUNC_10(VAR_19, VAR_10) << 16;
  VAR_19->last_updated = VAR_11;
  VAR_19->valid = 1;
 }

 FUNC_8(&VAR_19->update_lock);

 return VAR_19;
}
