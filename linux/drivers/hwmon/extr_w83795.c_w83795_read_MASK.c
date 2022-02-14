
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int) ;

__attribute__((used)) static u8 FUNC_3(struct i2c_client *VAR_0, u16 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1 >> 8);
 if (VAR_2 < 0)
  return 0x00;

 VAR_2 = FUNC_1(VAR_0, VAR_1 & 0xff);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_0->dev,
   "Failed to read from register 0x%03x, err %d\n",
   (int)VAR_1, VAR_2);
  return 0x00;
 }
 return VAR_2;
}
