
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_data {int pwm_num; int* pwm_mode; int* pwm_enable; int* tolerance; int * REG_PWM; void** pwm; } ;


 int * VAR_0 ;
 int* VAR_1 ;
 int * VAR_2 ;
 void* FUNC_0 (struct w83627ehf_data*,int ) ;

__attribute__((used)) static void FUNC_1(struct w83627ehf_data *VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3->pwm_num; VAR_4++) {
  VAR_5 = FUNC_0(VAR_3,
           VAR_2[VAR_4]);
  VAR_6 = FUNC_0(VAR_3,
        VAR_0[VAR_4]);
  VAR_3->pwm_mode[VAR_4] =
    ((VAR_5 >> VAR_1[VAR_4]) & 1) ? 0 : 1;
  VAR_3->pwm_enable[VAR_4] = ((VAR_6 >> 4) & 7) + 1;
  VAR_3->tolerance[VAR_4] = VAR_6 & 0x0f;
  VAR_3->pwm[VAR_4] = FUNC_0(VAR_3, VAR_3->REG_PWM[VAR_4]);
 }
}
