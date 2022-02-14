
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct i2c_client*,int,int ,int ) ;
 int FUNC_2 (struct i2c_client*,int,int ,int,int,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4, int VAR_5,
        u16 VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;

 switch (VAR_6) {
 case 0:
  VAR_8 = 0x7fff;
  break;
 case 1:
  VAR_8 = FUNC_1(VAR_4, VAR_5, 0, VAR_2);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_8 = FUNC_0(VAR_8);
  break;
 case 2:
  VAR_7 = VAR_1;
  VAR_8 = FUNC_1(VAR_4, VAR_5, 0, VAR_3);
  if (VAR_8 < 0)
   return VAR_8;
  break;
 case 3:
  VAR_8 = 0xffff;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_2(VAR_4, VAR_5, 0, VAR_7, VAR_1, VAR_8);
}
