
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct f75375_data {scalar_t__ kind; int* pwm_enable; int* pwm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 int FUNC_6 (struct i2c_client*,int) ;
 scalar_t__ VAR_3 ;
 struct f75375_data* FUNC_7 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_4, int VAR_5, int VAR_6)
{
 struct f75375_data *VAR_7 = FUNC_7(VAR_4);
 u8 VAR_8;

 if (VAR_6 < 0 || VAR_6 > 4)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_4, VAR_2);
 if (VAR_7->kind == VAR_3) {

  if (FUNC_3(VAR_7->pwm_enable[VAR_5]) !=
    FUNC_3(VAR_6))
   return -VAR_1;

  VAR_8 &= ~(1 << FUNC_0(VAR_5));
  VAR_8 &= ~(1 << FUNC_1(VAR_5));
  switch (VAR_6) {
  case 0:
   VAR_8 |= (1 << FUNC_1(VAR_5));
   VAR_8 |= (1 << FUNC_0(VAR_5));
   VAR_7->pwm[VAR_5] = 255;
   break;
  case 1:
   VAR_8 |= (1 << FUNC_1(VAR_5));
   VAR_8 |= (1 << FUNC_0(VAR_5));
   break;
  case 2:
   break;
  case 3:
   VAR_8 |= (1 << FUNC_1(VAR_5));
   break;
  case 4:
   VAR_8 |= (1 << FUNC_0(VAR_5));
   break;
  }
 } else {

  VAR_8 &= ~(3 << FUNC_2(VAR_5));
  switch (VAR_6) {
  case 0:
   VAR_8 |= (3 << FUNC_2(VAR_5));
   VAR_7->pwm[VAR_5] = 255;
   break;
  case 1:
   VAR_8 |= (3 << FUNC_2(VAR_5));
   break;
  case 2:
   VAR_8 |= (1 << FUNC_2(VAR_5));
   break;
  case 3:
   break;
  case 4:
   return -VAR_0;
  }
 }

 FUNC_5(VAR_4, VAR_2, VAR_8);
 VAR_7->pwm_enable[VAR_5] = VAR_6;
 if (VAR_6 == 0)
  FUNC_6(VAR_4, VAR_5);
 return 0;
}
