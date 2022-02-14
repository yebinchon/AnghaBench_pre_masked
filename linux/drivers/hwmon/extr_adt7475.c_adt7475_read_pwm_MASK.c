
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adt7475_data {int** pwm; int* pwmctl; int* pwmchan; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct adt7475_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_2, int VAR_3)
{
 struct adt7475_data *VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5;

 VAR_4->pwm[VAR_0][VAR_3] = FUNC_1(FUNC_0(VAR_3));





 VAR_5 = (VAR_4->pwm[VAR_0][VAR_3] >> 5) & 7;

 if (VAR_5 == 3)
  VAR_4->pwmctl[VAR_3] = 0;
 else if (VAR_5 == 7)
  VAR_4->pwmctl[VAR_3] = 1;
 else if (VAR_5 == 4) {





  VAR_4->pwm[VAR_1][VAR_3] = 0;
  VAR_4->pwm[VAR_0][VAR_3] &= ~0xE0;
  VAR_4->pwm[VAR_0][VAR_3] |= (7 << 5);

  FUNC_3(VAR_2, FUNC_0(VAR_3),
       VAR_4->pwm[VAR_1][VAR_3]);

  FUNC_3(VAR_2, FUNC_0(VAR_3),
       VAR_4->pwm[VAR_0][VAR_3]);

  VAR_4->pwmctl[VAR_3] = 1;
 } else {
  VAR_4->pwmctl[VAR_3] = 2;

  switch (VAR_5) {
  case 0:
   VAR_4->pwmchan[VAR_3] = 1;
   break;
  case 1:
   VAR_4->pwmchan[VAR_3] = 2;
   break;
  case 2:
   VAR_4->pwmchan[VAR_3] = 4;
   break;
  case 5:
   VAR_4->pwmchan[VAR_3] = 6;
   break;
  case 6:
   VAR_4->pwmchan[VAR_3] = 7;
   break;
  }
 }
}
