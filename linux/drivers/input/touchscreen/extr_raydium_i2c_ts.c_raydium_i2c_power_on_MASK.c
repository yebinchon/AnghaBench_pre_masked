
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raydium_data {int reset_gpio; TYPE_1__* client; int avdd; int vccio; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct raydium_data *VAR_2)
{
 int VAR_3;

 if (!VAR_2->reset_gpio)
  return 0;

 FUNC_1(VAR_2->reset_gpio, 1);

 VAR_3 = FUNC_4(VAR_2->avdd);
 if (VAR_3) {
  FUNC_0(&VAR_2->client->dev,
   "failed to enable avdd regulator: %d\n", VAR_3);
  goto release_reset_gpio;
 }

 VAR_3 = FUNC_4(VAR_2->vccio);
 if (VAR_3) {
  FUNC_3(VAR_2->avdd);
  FUNC_0(&VAR_2->client->dev,
   "failed to enable vccio regulator: %d\n", VAR_3);
  goto release_reset_gpio;
 }

 FUNC_5(VAR_0);

release_reset_gpio:
 FUNC_1(VAR_2->reset_gpio, 0);

 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_1);

 return 0;
}
