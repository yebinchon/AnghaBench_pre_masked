
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u8 ;
struct raydium_data {int boot_mode; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,scalar_t__ const*,int) ;

__attribute__((used)) static int FUNC_1(struct raydium_data *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3->client;
 static const u8 VAR_5 = 0x62;
 static const u8 VAR_6 = 0x66;
 u8 VAR_7[4];
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_2, VAR_7, sizeof(VAR_7));
 if (!VAR_8) {
  if (VAR_7[0] == VAR_5)
   VAR_3->boot_mode = VAR_0;
  else if (VAR_7[0] == VAR_6)
   VAR_3->boot_mode = VAR_1;
  return 0;
 }

 return VAR_8;
}
