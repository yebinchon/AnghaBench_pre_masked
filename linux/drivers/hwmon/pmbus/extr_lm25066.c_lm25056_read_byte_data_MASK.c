
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

 int FUNC_0 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;

 switch (VAR_8) {
 case 128:
  VAR_9 = FUNC_0(VAR_6, 0,
        VAR_5);
  if (VAR_9 < 0)
   break;
  VAR_10 = 0;
  if (VAR_9 & VAR_2)
   VAR_10 |= VAR_4;
  if (VAR_9 & VAR_1)
   VAR_10 |= VAR_3;
  VAR_9 = VAR_10;
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }
 return VAR_9;
}
