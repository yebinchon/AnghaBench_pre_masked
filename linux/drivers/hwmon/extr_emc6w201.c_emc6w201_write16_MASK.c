
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int,char*,scalar_t__) ;
 int FUNC_1 (struct i2c_client*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0, u8 VAR_1, u16 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2 & 0xff);
 if (FUNC_2(!VAR_3))
  VAR_3 = FUNC_1(VAR_0, VAR_1 + 1, VAR_2 >> 8);
 if (FUNC_3(VAR_3 < 0))
  FUNC_0(&VAR_0->dev, "%d-bit %s failed at 0x%02x\n",
   16, "write", VAR_1);

 return VAR_3;
}
