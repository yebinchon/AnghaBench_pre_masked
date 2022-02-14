
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


 int FUNC_0 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_15, int VAR_16,
        int VAR_17)
{
 int VAR_18, VAR_19;

 switch (VAR_17) {
 case 128:
 case 130:
 case 129:
 case 131:
  VAR_18 = FUNC_0(VAR_15, VAR_16, VAR_17);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_19 = FUNC_0(VAR_15, VAR_16,
        VAR_14);
  if (VAR_19 < 0)




   return VAR_18;


  if (VAR_17 == 131) {
   if (VAR_19 & VAR_1)
    VAR_18 |= VAR_9;
  } else if (VAR_17 == 129) {
   if (VAR_19 & VAR_4)
    VAR_18 |= VAR_11;
  } else if (VAR_17 == 128) {
   if (VAR_19 & (VAR_3 | VAR_6))
    VAR_18 |= VAR_12;
   if (VAR_19 & VAR_5)
    VAR_18 |= VAR_13;
  } else if (VAR_17 == 130) {
   if (VAR_19 & VAR_2)
    VAR_18 |= VAR_10;
   if (VAR_19 & VAR_0)
    VAR_18 |= VAR_8;
  }
  break;
 default:
  VAR_18 = -VAR_7;
  break;
 }

 return VAR_18;
}
