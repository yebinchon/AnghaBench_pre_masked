
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int,char*,scalar_t__) ;
 int FUNC_1 (struct i2c_client*,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static u16 FUNC_3(struct i2c_client *VAR_0, u8 VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 VAR_3 = FUNC_1(VAR_0, VAR_1 + 1);
 if (FUNC_2(VAR_2 < 0 || VAR_3 < 0)) {
  FUNC_0(&VAR_0->dev, "%d-bit %s failed at 0x%02x\n",
   16, "read", VAR_1);
  return 0xFFFF;
 }

 return (VAR_3 << 8) | VAR_2;
}
