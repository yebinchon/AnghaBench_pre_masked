
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adm1026_data {int* gpio_config; int config2; int config3; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,scalar_t__,int) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 struct adm1026_data* FUNC_2 (struct i2c_client*) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_8)
{
 struct adm1026_data *VAR_9 = FUNC_2(VAR_8);
 int VAR_10;
 int VAR_11;
 for (VAR_10 = 0; VAR_10 <= 16; ++VAR_10) {
  if (VAR_7[VAR_10] >= 0 && VAR_7[VAR_10] <= 16)
   VAR_9->gpio_config[VAR_7[VAR_10]] |= 0x01;

  if (VAR_7[VAR_10] >= 0 && VAR_7[VAR_10] <= 7)
   VAR_9->config2 |= 1 << VAR_7[VAR_10];
 }


 for (VAR_10 = 0; VAR_10 <= 16; ++VAR_10) {
  if (VAR_4[VAR_10] >= 0 && VAR_4[VAR_10] <= 16)
   VAR_9->gpio_config[VAR_4[VAR_10]] &= ~0x01;

  if (VAR_4[VAR_10] >= 0 && VAR_4[VAR_10] <= 7)
   VAR_9->config2 |= 1 << VAR_4[VAR_10];
 }


 for (VAR_10 = 0; VAR_10 <= 16; ++VAR_10) {
  if (VAR_5[VAR_10] >= 0 && VAR_5[VAR_10] <= 16)
   VAR_9->gpio_config[VAR_5[VAR_10]] &= ~0x02;
 }


 for (VAR_10 = 0; VAR_10 <= 16; ++VAR_10) {
  if (VAR_6[VAR_10] >= 0 && VAR_6[VAR_10] <= 16)
   VAR_9->gpio_config[VAR_6[VAR_10]] |= 0x02;
 }


 for (VAR_10 = 0; VAR_10 <= 7; ++VAR_10) {
  if (VAR_3[VAR_10] >= 0 && VAR_3[VAR_10] <= 7)
   VAR_9->config2 &= ~(1 << VAR_3[VAR_10]);
 }


 FUNC_1(VAR_8, VAR_0, VAR_9->config2);
 VAR_9->config3 = (VAR_9->config3 & 0x3f)
   | ((VAR_9->gpio_config[16] & 0x03) << 6);
 FUNC_1(VAR_8, VAR_1, VAR_9->config3);
 for (VAR_10 = 15, VAR_11 = 0; VAR_10 >= 0; --VAR_10) {
  VAR_11 <<= 2;
  VAR_11 |= VAR_9->gpio_config[VAR_10] & 0x03;
  if ((VAR_10 & 0x03) == 0) {
   FUNC_1(VAR_8,
     VAR_2 + VAR_10/4,
     VAR_11);
   VAR_11 = 0;
  }
 }


 FUNC_0(VAR_8);
}
