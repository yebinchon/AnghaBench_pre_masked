
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct6775_data {int auto_pwm_num; scalar_t__** auto_temp; scalar_t__** auto_pwm; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct nct6775_data *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->auto_pwm_num - 1; VAR_3++) {
  if (VAR_1->auto_temp[VAR_2][VAR_3] > VAR_1->auto_temp[VAR_2][VAR_3 + 1])
   return -VAR_0;
 }
 for (VAR_3 = 0; VAR_3 < VAR_1->auto_pwm_num - 1; VAR_3++) {
  if (VAR_1->auto_pwm[VAR_2][VAR_3] > VAR_1->auto_pwm[VAR_2][VAR_3 + 1])
   return -VAR_0;
 }

 if (VAR_1->auto_pwm[VAR_2][VAR_1->auto_pwm_num]) {
  if (VAR_1->auto_temp[VAR_2][VAR_1->auto_pwm_num - 1] >
    VAR_1->auto_temp[VAR_2][VAR_1->auto_pwm_num] ||
      VAR_1->auto_pwm[VAR_2][VAR_1->auto_pwm_num - 1] >
    VAR_1->auto_pwm[VAR_2][VAR_1->auto_pwm_num])
   return -VAR_0;
 }
 return 0;
}
