
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nct6775_data {int pwm_num; int has_pwm; int* REG_PWM_MODE; int* PWM_MODE_MASK; int* pwm_mode; int* REG_FAN_MODE; int** REG_PWM; int** pwm; scalar_t__* pwm_enable; int** temp_tolerance; int* target_speed_tolerance; int* REG_TOLERANCE_H; int* REG_CRITICAL_TEMP_TOLERANCE; int* REG_TEMP_SEL; int* pwm_temp_sel; int* REG_WEIGHT_TEMP_SEL; int* pwm_weight_temp_sel; int** weight_temp; int** REG_WEIGHT_TEMP; } ;
struct device {int dummy; } ;


 int FUNC_0 (int**) ;
 int FUNC_1 (int) ;
 struct nct6775_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct nct6775_data*,int) ;
 scalar_t__ FUNC_4 (int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1)
{
 struct nct6775_data *VAR_2 = FUNC_2(VAR_1);
 int VAR_3, VAR_4;
 int VAR_5, VAR_6;
 bool VAR_7;

 for (VAR_3 = 0; VAR_3 < VAR_2->pwm_num; VAR_3++) {
  if (!(VAR_2->has_pwm & FUNC_1(VAR_3)))
   continue;

  VAR_7 = VAR_2->REG_PWM_MODE[VAR_3] &&
    (FUNC_3(VAR_2, VAR_2->REG_PWM_MODE[VAR_3])
     & VAR_2->PWM_MODE_MASK[VAR_3]);
  VAR_2->pwm_mode[VAR_3] = !VAR_7;

  VAR_5 = FUNC_3(VAR_2, VAR_2->REG_FAN_MODE[VAR_3]);
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->REG_PWM); VAR_4++) {
   if (VAR_2->REG_PWM[VAR_4] && VAR_2->REG_PWM[VAR_4][VAR_3]) {
    VAR_2->pwm[VAR_4][VAR_3]
      = FUNC_3(VAR_2,
             VAR_2->REG_PWM[VAR_4][VAR_3]);
   }
  }

  VAR_2->pwm_enable[VAR_3] = FUNC_4(VAR_2->pwm[0][VAR_3],
       (VAR_5 >> 4) & 7);

  if (!VAR_2->temp_tolerance[0][VAR_3] ||
      VAR_2->pwm_enable[VAR_3] != VAR_0)
   VAR_2->temp_tolerance[0][VAR_3] = VAR_5 & 0x0f;
  if (!VAR_2->target_speed_tolerance[VAR_3] ||
      VAR_2->pwm_enable[VAR_3] == VAR_0) {
   u8 VAR_8 = VAR_5 & 0x0f;

   if (VAR_2->REG_TOLERANCE_H) {
    VAR_8 |= (FUNC_3(VAR_2,
          VAR_2->REG_TOLERANCE_H[VAR_3]) & 0x70) >> 1;
   }
   VAR_2->target_speed_tolerance[VAR_3] = VAR_8;
  }

  VAR_2->temp_tolerance[1][VAR_3] =
   FUNC_3(VAR_2,
     VAR_2->REG_CRITICAL_TEMP_TOLERANCE[VAR_3]);

  VAR_6 = FUNC_3(VAR_2, VAR_2->REG_TEMP_SEL[VAR_3]);
  VAR_2->pwm_temp_sel[VAR_3] = VAR_6 & 0x1f;

  if (VAR_6 & 0x80)
   VAR_2->pwm[2][VAR_3] = 0;

  if (!VAR_2->REG_WEIGHT_TEMP_SEL[VAR_3])
   continue;

  VAR_6 = FUNC_3(VAR_2, VAR_2->REG_WEIGHT_TEMP_SEL[VAR_3]);
  VAR_2->pwm_weight_temp_sel[VAR_3] = VAR_6 & 0x1f;

  if (!(VAR_6 & 0x80))
   VAR_2->pwm_weight_temp_sel[VAR_3] = 0;


  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->weight_temp); VAR_4++) {
   VAR_2->weight_temp[VAR_4][VAR_3]
     = FUNC_3(VAR_2,
            VAR_2->REG_WEIGHT_TEMP[VAR_4][VAR_3]);
  }
 }
}
