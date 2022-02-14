
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct dme1737_data {scalar_t__ addr; struct i2c_client* client; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_3(const struct dme1737_data *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct i2c_client *VAR_4 = VAR_1->client;
 s32 VAR_5 = 0;

 if (VAR_4) {
  VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);

  if (VAR_5 < 0) {
   FUNC_0(&VAR_4->dev,
     "Write to register 0x%02x failed! %s\n",
     VAR_2, VAR_0);
  }
 } else {
  FUNC_2(VAR_2, VAR_1->addr);
  FUNC_2(VAR_3, VAR_1->addr + 1);
 }

 return VAR_5;
}
