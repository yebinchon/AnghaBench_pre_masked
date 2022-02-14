
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct it87_data {int* pwm_ctrl; int* pwm_temp_map; int* pwm_duty; void*** auto_pwm; void*** auto_temp; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (struct it87_data*) ;
 scalar_t__ FUNC_3 (struct it87_data*) ;
 void* FUNC_4 (struct it87_data*,int ) ;

__attribute__((used)) static void FUNC_5(struct it87_data *VAR_2, int VAR_3)
{
 VAR_2->pwm_ctrl[VAR_3] = FUNC_4(VAR_2, VAR_0[VAR_3]);
 if (FUNC_2(VAR_2)) {
  VAR_2->pwm_temp_map[VAR_3] = VAR_2->pwm_ctrl[VAR_3] & 0x03;
  VAR_2->pwm_duty[VAR_3] = FUNC_4(VAR_2,
           VAR_1[VAR_3]);
 } else {
  if (VAR_2->pwm_ctrl[VAR_3] & 0x80)
   VAR_2->pwm_temp_map[VAR_3] = VAR_2->pwm_ctrl[VAR_3] & 0x03;
  else
   VAR_2->pwm_duty[VAR_3] = VAR_2->pwm_ctrl[VAR_3] & 0x7f;
 }

 if (FUNC_3(VAR_2)) {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < 5 ; VAR_4++)
   VAR_2->auto_temp[VAR_3][VAR_4] = FUNC_4(VAR_2,
      FUNC_1(VAR_3, VAR_4));
  for (VAR_4 = 0; VAR_4 < 3 ; VAR_4++)
   VAR_2->auto_pwm[VAR_3][VAR_4] = FUNC_4(VAR_2,
      FUNC_0(VAR_3, VAR_4));
 } else if (FUNC_2(VAR_2)) {
  int VAR_5;







  VAR_2->auto_temp[VAR_3][0] =
   FUNC_4(VAR_2, FUNC_1(VAR_3, 5));

  for (VAR_5 = 0; VAR_5 < 3 ; VAR_5++)
   VAR_2->auto_temp[VAR_3][VAR_5 + 1] =
    FUNC_4(VAR_2,
      FUNC_1(VAR_3, VAR_5));




  VAR_2->auto_pwm[VAR_3][0] =
   FUNC_4(VAR_2, FUNC_1(VAR_3, 3));
  VAR_2->auto_pwm[VAR_3][1] =
   FUNC_4(VAR_2, FUNC_1(VAR_3, 4));
 }
}
