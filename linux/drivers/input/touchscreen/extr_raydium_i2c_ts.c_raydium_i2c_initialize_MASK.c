
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int main_ver; int sub_ver; int hw_ver; } ;
struct raydium_data {scalar_t__ boot_mode; TYPE_1__ info; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct raydium_data*) ;
 int FUNC_4 (struct raydium_data*) ;

__attribute__((used)) static int FUNC_5(struct raydium_data *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {

  FUNC_2(VAR_2);

  VAR_6 = FUNC_3(VAR_4);
  if (VAR_6) {
   FUNC_1(&VAR_5->dev,
    "failed to read 'hello' packet: %d\n", VAR_6);
   continue;
  }

  if (VAR_4->boot_mode == VAR_0 ||
      VAR_4->boot_mode == VAR_1) {
   break;
  }
 }

 if (VAR_6)
  VAR_4->boot_mode = VAR_0;

 if (VAR_4->boot_mode == VAR_0) {
  VAR_4->info.hw_ver = FUNC_0(0xffffffffUL);
  VAR_4->info.main_ver = 0xff;
  VAR_4->info.sub_ver = 0xff;
 } else {
  FUNC_4(VAR_4);
 }

 return VAR_6;
}
