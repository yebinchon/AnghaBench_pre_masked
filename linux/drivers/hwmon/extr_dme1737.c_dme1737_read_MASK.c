
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int dev; } ;
struct dme1737_data {scalar_t__ addr; struct i2c_client* client; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct i2c_client*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u8 FUNC_4(const struct dme1737_data *VAR_1, u8 VAR_2)
{
 struct i2c_client *VAR_3 = VAR_1->client;
 s32 VAR_4;

 if (VAR_3) {
  VAR_4 = FUNC_1(VAR_3, VAR_2);

  if (VAR_4 < 0) {
   FUNC_0(&VAR_3->dev,
     "Read from register 0x%02x failed! %s\n",
     VAR_2, VAR_0);
  }
 } else {
  FUNC_3(VAR_2, VAR_1->addr);
  VAR_4 = FUNC_2(VAR_1->addr + 1);
 }

 return VAR_4;
}
