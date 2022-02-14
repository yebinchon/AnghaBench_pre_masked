
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct i2c_client *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_0->dev,
   "Unable to write value 0x%02x to register 0x%02x.\n",
   VAR_2, VAR_1);
 }
 return VAR_3;
}
