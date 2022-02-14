
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;



 int FUNC_0 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_21, int VAR_22, int VAR_23)
{
 int VAR_24 = 0;
 int VAR_25;

 if (VAR_22 > 0)
  return -VAR_1;

 switch (VAR_23) {
 case 128:
  VAR_25 = FUNC_0(VAR_21, 0,
        VAR_2);
  if (VAR_25 < 0)
   return VAR_25;
  if (VAR_25 & VAR_11)
   VAR_24 |= VAR_20;
  if (VAR_25 & VAR_10)
   VAR_24 |= VAR_19;
  if (VAR_25 & VAR_8)
   VAR_24 |= VAR_18;
  if (VAR_25 & VAR_7)
   VAR_24 |= VAR_17;
  break;
 case 130:
  VAR_25 = FUNC_0(VAR_21, 0,
        VAR_2);
  if (VAR_25 < 0)
   return VAR_25;
  if (VAR_25 & VAR_9)
   VAR_24 |= VAR_14;
  if (VAR_25 & VAR_4)
   VAR_24 |= VAR_13;
  if (VAR_25 & VAR_3)
   VAR_24 |= VAR_12;
  break;
 case 129:
  VAR_25 = FUNC_0(VAR_21, 0,
        VAR_2);
  if (VAR_25 < 0)
   return VAR_25;
  if (VAR_25 & VAR_6)
   VAR_24 |= VAR_16;
  if (VAR_25 & VAR_5)
   VAR_24 |= VAR_15;
  break;
 default:
  VAR_24 = -VAR_0;
  break;
 }
 return VAR_24;
}
