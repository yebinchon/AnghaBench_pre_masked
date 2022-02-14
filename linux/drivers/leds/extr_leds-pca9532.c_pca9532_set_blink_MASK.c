
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pca9532_led {scalar_t__ state; struct i2c_client* client; } ;
struct led_classdev {int brightness; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pca9532_led* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (struct i2c_client*,int ,int,int ) ;
 int FUNC_2 (struct pca9532_led*) ;
 int FUNC_3 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_4(struct led_classdev *VAR_2,
 unsigned long *VAR_3, unsigned long *VAR_4)
{
 struct pca9532_led *VAR_5 = FUNC_0(VAR_2);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7;
 int VAR_8 = 0;

 if (*VAR_3 == 0 && *VAR_4 == 0) {

  *VAR_3 = 1000;
  *VAR_4 = 1000;
 }
 if (*VAR_3 != *VAR_4 || *VAR_3 > 1690 || *VAR_3 < 6)
  return -VAR_0;


 VAR_7 = (*VAR_3 * 152-1)/1000;
 VAR_8 = FUNC_1(VAR_6, 0, VAR_7, VAR_2->brightness);
 if (VAR_8)
  return VAR_8;
 if (VAR_5->state == VAR_1)
  FUNC_3(VAR_5->client, 0);
 FUNC_2(VAR_5);

 return 0;
}
