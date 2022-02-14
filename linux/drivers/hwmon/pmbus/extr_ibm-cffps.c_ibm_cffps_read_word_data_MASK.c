
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (struct i2c_client*,int,int ) ;
 int FUNC_1 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_4, int VAR_5,
        int VAR_6)
{
 int VAR_7, VAR_8;

 switch (VAR_6) {
 case 128:
  VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_8 = FUNC_0(VAR_4, VAR_5,
        VAR_3);
  if (VAR_8 < 0)




   return VAR_7;

  if (VAR_8 & VAR_0)
   VAR_7 |= VAR_2;
  break;
 default:
  VAR_7 = -VAR_1;
  break;
 }

 return VAR_7;
}
