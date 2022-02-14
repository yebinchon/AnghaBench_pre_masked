
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pca9532_data {TYPE_1__* chip_info; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int num_leds; } ;


 struct pca9532_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct pca9532_data*,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct pca9532_data *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_1->chip_info->num_leds);
 if (VAR_2)
  return VAR_2;

 return 0;
}
