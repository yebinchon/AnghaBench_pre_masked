
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 switch (VAR_4) {
 case 129:
  if (VAR_3 > 0)
   return -VAR_1;

  VAR_5 = FUNC_0(VAR_2, 0);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_6 = VAR_5 << 4;
  VAR_5 = FUNC_0(VAR_2, 1);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_6 |= VAR_5;
  VAR_5 = VAR_6;
  break;
 case 128:
  if (VAR_3 > 0)
   return -VAR_1;

  VAR_5 = FUNC_0(VAR_2, 2);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_6 = VAR_5 << 4;
  VAR_5 = FUNC_0(VAR_2, 3);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_6 |= VAR_5;
  VAR_5 = VAR_6;
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 return VAR_5;
}
