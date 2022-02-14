
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_data {int pwm_num; int has_fan; int* pwm_mode; int* pwm_enable; int* tolerance; int * REG_PWM; void** pwm; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 void* FUNC_0 (struct w83627ehf_data*,int ) ;

__attribute__((used)) static void FUNC_1(struct w83627ehf_data *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0, VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4->pwm_num; VAR_5++) {
  if (!(VAR_4->has_fan & (1 << VAR_5)))
   continue;


  if (VAR_5 != 1) {
   VAR_6 = FUNC_0(VAR_4,
     VAR_2[VAR_5]);
   VAR_7 = FUNC_0(VAR_4,
     VAR_3[VAR_5]);
  }
  VAR_4->pwm_mode[VAR_5] =
   ((VAR_6 >> VAR_1[VAR_5]) & 1) ? 0 : 1;
  VAR_4->pwm_enable[VAR_5] = ((VAR_6 >> VAR_0[VAR_5])
           & 3) + 1;
  VAR_4->pwm[VAR_5] = FUNC_0(VAR_4, VAR_4->REG_PWM[VAR_5]);

  VAR_4->tolerance[VAR_5] = (VAR_7 >> (VAR_5 == 1 ? 4 : 0)) & 0x0f;
 }
}
