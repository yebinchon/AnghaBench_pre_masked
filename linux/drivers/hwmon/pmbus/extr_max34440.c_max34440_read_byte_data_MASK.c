
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;

 int FUNC_0 (struct i2c_client*,int ,int ) ;
 int FUNC_1 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13 = 0;
 int VAR_14;

 if (VAR_11 >= 0) {
  VAR_13 = FUNC_1(VAR_10, VAR_11);
  if (VAR_13 < 0)
   return VAR_13;
 }

 switch (VAR_12) {
 case 129:
  VAR_14 = FUNC_0(VAR_10, 0,
        VAR_9);
  if (VAR_14 < 0)
   return VAR_14;
  if (VAR_14 & VAR_2)
   VAR_13 |= VAR_6;
  if (VAR_14 & VAR_1)
   VAR_13 |= VAR_5;
  break;
 case 128:
  VAR_14 = FUNC_0(VAR_10, 0,
        VAR_9);
  if (VAR_14 < 0)
   return VAR_14;
  if (VAR_14 & VAR_4)
   VAR_13 |= VAR_8;
  if (VAR_14 & VAR_3)
   VAR_13 |= VAR_7;
  break;
 default:
  VAR_13 = -VAR_0;
  break;
 }
 return VAR_13;
}
