
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;

__attribute__((used)) static inline u8 FUNC_2(struct i2c_client *VAR_0, u8 VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_0->dev,
   "Unable to read from register 0x%02x.\n", VAR_1);
  return 0;
 }
 return VAR_2 & 0xff;
}
