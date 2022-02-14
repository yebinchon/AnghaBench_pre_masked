
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adt7475_data {unsigned int* pwmctl; unsigned int* pwmchan; int** pwm; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct adt7475_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,long) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2, int VAR_3,
        unsigned int VAR_4, unsigned int VAR_5)
{
 struct adt7475_data *VAR_6 = FUNC_1(VAR_2);
 long VAR_7 = 0;

 switch (VAR_4) {
 case 0:
  VAR_7 = 0x03;
  break;
 case 1:
  VAR_7 = 0x07;
  break;
 case 2:
  switch (VAR_5) {
  case 1:

   VAR_7 = 0x00;
   break;
  case 2:

   VAR_7 = 0x01;
   break;
  case 4:

   VAR_7 = 0x02;
   break;
  case 6:

   VAR_7 = 0x05;
   break;
  case 7:

   VAR_7 = 0x06;
   break;
  default:
   return -VAR_1;
  }
  break;
 default:
  return -VAR_1;
 }

 VAR_6->pwmctl[VAR_3] = VAR_4;
 VAR_6->pwmchan[VAR_3] = VAR_5;

 VAR_6->pwm[VAR_0][VAR_3] &= ~0xE0;
 VAR_6->pwm[VAR_0][VAR_3] |= (VAR_7 & 7) << 5;

 FUNC_2(VAR_2, FUNC_0(VAR_3),
      VAR_6->pwm[VAR_0][VAR_3]);

 return 0;
}
