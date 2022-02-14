
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct f75375s_platform_data {int * pwm; int * pwm_enable; } ;
struct f75375_data {scalar_t__ kind; int* pwm_mode; int* pwm_enable; int * pwm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct i2c_client*,int ) ;
 int FUNC_9 (struct i2c_client*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (struct i2c_client*,int,int ) ;

__attribute__((used)) static void FUNC_11(struct i2c_client *VAR_3, struct f75375_data *VAR_4,
  struct f75375s_platform_data *VAR_5)
{
 int VAR_6;

 if (!VAR_5) {
  u8 VAR_7, VAR_8;
  int VAR_9;

  VAR_7 = FUNC_8(VAR_3, VAR_0);
  VAR_8 = FUNC_8(VAR_3, VAR_1);
  for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
   if (VAR_4->kind == VAR_2) {
    bool VAR_10, VAR_11;

    if (!(VAR_8 & (1 << FUNC_1(VAR_9))))
     VAR_4->pwm_mode[VAR_9] = 1;

    VAR_10 = ((VAR_8 >> FUNC_3(VAR_9)) & 1);
    VAR_11 = ((VAR_8 >> FUNC_2(VAR_9)) & 1);
    if (!VAR_10 && VAR_11)

     VAR_4->pwm_enable[VAR_9] = 4;
    else if (VAR_10 && !VAR_11)

     VAR_4->pwm_enable[VAR_9] = 3;
    else if (!VAR_10 && !VAR_11)

     VAR_4->pwm_enable[VAR_9] = 2;
    else

     VAR_4->pwm_enable[VAR_9] = 1;
   } else {
    if (!(VAR_7 & (1 << FUNC_0(VAR_9))))
     VAR_4->pwm_mode[VAR_9] = 1;

    switch ((VAR_8 >> FUNC_4(VAR_9)) & 3) {
    case 0:
     VAR_4->pwm_enable[VAR_9] = 3;
     break;
    case 1:
     VAR_4->pwm_enable[VAR_9] = 2;
     break;
    default:
     VAR_4->pwm_enable[VAR_9] = 1;
     break;
    }
   }
  }
  return;
 }

 FUNC_10(VAR_3, 0, VAR_5->pwm_enable[0]);
 FUNC_10(VAR_3, 1, VAR_5->pwm_enable[1]);
 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  if (FUNC_5(VAR_5->pwm_enable[VAR_6]) ||
      !FUNC_7(VAR_5->pwm_enable[VAR_6]))
   continue;
  VAR_4->pwm[VAR_6] = FUNC_6(VAR_5->pwm[VAR_6], 0, 255);
  FUNC_9(VAR_3, VAR_6);
 }

}
