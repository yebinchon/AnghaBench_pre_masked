
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nct6775_data {int pwm_num; int has_pwm; int** fan_time; int* target_temp; scalar_t__* pwm_enable; int target_temp_mask; int* target_speed; int auto_pwm_num; int** auto_pwm; int** auto_temp; int kind; int CRITICAL_PWM_ENABLE_MASK; int * REG_CRITICAL_PWM; int * REG_CRITICAL_PWM_ENABLE; int * REG_CRITICAL_TEMP; int * REG_TOLERANCE_H; int * REG_TARGET; int ** REG_FAN_TIME; } ;
struct device {int dummy; } ;


 int FUNC_0 (int**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nct6775_data*,int,int) ;
 int FUNC_3 (struct nct6775_data*,int,int) ;
 int * VAR_0 ;
 struct nct6775_data* FUNC_4 (struct device*) ;



 int FUNC_5 (struct nct6775_data*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_6(struct device *VAR_3)
{
 struct nct6775_data *VAR_4 = FUNC_4(VAR_3);
 int VAR_5, VAR_6;
 u8 VAR_7;
 u16 VAR_8;

 for (VAR_5 = 0; VAR_5 < VAR_4->pwm_num; VAR_5++) {
  if (!(VAR_4->has_pwm & FUNC_1(VAR_5)))
   continue;

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->fan_time); VAR_6++) {
   VAR_4->fan_time[VAR_6][VAR_5] =
     FUNC_5(VAR_4, VAR_4->REG_FAN_TIME[VAR_6][VAR_5]);
  }

  VAR_8 = FUNC_5(VAR_4, VAR_4->REG_TARGET[VAR_5]);

  if (!VAR_4->target_temp[VAR_5] ||
      VAR_4->pwm_enable[VAR_5] == VAR_2)
   VAR_4->target_temp[VAR_5] = VAR_8 & VAR_4->target_temp_mask;
  if (!VAR_4->target_speed[VAR_5] ||
      VAR_4->pwm_enable[VAR_5] == VAR_1) {
   if (VAR_4->REG_TOLERANCE_H) {
    VAR_8 |= (FUNC_5(VAR_4,
     VAR_4->REG_TOLERANCE_H[VAR_5]) & 0x0f) << 8;
   }
   VAR_4->target_speed[VAR_5] = VAR_8;
  }

  for (VAR_6 = 0; VAR_6 < VAR_4->auto_pwm_num; VAR_6++) {
   VAR_4->auto_pwm[VAR_5][VAR_6] =
     FUNC_5(VAR_4,
          FUNC_2(VAR_4, VAR_5, VAR_6));
   VAR_4->auto_temp[VAR_5][VAR_6] =
     FUNC_5(VAR_4,
          FUNC_3(VAR_4, VAR_5, VAR_6));
  }


  VAR_4->auto_temp[VAR_5][VAR_4->auto_pwm_num] =
   FUNC_5(VAR_4, VAR_4->REG_CRITICAL_TEMP[VAR_5]);

  switch (VAR_4->kind) {
  case 137:
   VAR_7 = FUNC_5(VAR_4,
       VAR_0[VAR_5]);
   VAR_4->auto_pwm[VAR_5][VAR_4->auto_pwm_num] =
      (VAR_7 & 0x02) ? 0xff : 0x00;
   break;
  case 136:
   VAR_4->auto_pwm[VAR_5][VAR_4->auto_pwm_num] = 0xff;
   break;
  case 139:
  case 138:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
  case 128:
   VAR_7 = FUNC_5(VAR_4,
     VAR_4->REG_CRITICAL_PWM_ENABLE[VAR_5]);
   if (VAR_7 & VAR_4->CRITICAL_PWM_ENABLE_MASK)
    VAR_7 = FUNC_5(VAR_4,
     VAR_4->REG_CRITICAL_PWM[VAR_5]);
   else
    VAR_7 = 0xff;
   VAR_4->auto_pwm[VAR_5][VAR_4->auto_pwm_num] = VAR_7;
   break;
  }
 }
}
