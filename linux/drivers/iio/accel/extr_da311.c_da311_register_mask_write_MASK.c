
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, u16 VAR_2,
         u8 VAR_3, u8 VAR_4)
{
 int VAR_5;
 u8 VAR_6 = 0;

 if (VAR_2 & 0xff00) {

  VAR_5 = FUNC_1(VAR_1, VAR_0, 0x01);
  if (VAR_5 < 0)
   return VAR_5;
 }

 if (VAR_3 != 0xff) {
  VAR_5 = FUNC_0(VAR_1, VAR_2);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_6 = VAR_5;
 }

 VAR_6 &= ~VAR_3;
 VAR_6 |= VAR_4 & VAR_3;
 VAR_5 = FUNC_1(VAR_1, VAR_2 & 0xff, VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_2 & 0xff00) {

  VAR_5 = FUNC_1(VAR_1, VAR_0, 0x00);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return 0;
}
