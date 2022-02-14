
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int blink_set; int brightness_set; int max_brightness; int name; } ;
struct ibm_cffps {TYPE_1__ led; int led_name; struct i2c_client* client; } ;
struct device {int dummy; } ;
struct i2c_client {char* name; int addr; struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int,char*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct ibm_cffps *VAR_3)
{
 int VAR_4;
 struct i2c_client *VAR_5 = VAR_3->client;
 struct device *VAR_6 = &VAR_5->dev;

 FUNC_2(VAR_3->led_name, sizeof(VAR_3->led_name), "%s-%02x", VAR_5->name,
   VAR_5->addr);
 VAR_3->led.name = VAR_3->led_name;
 VAR_3->led.max_brightness = VAR_0;
 VAR_3->led.brightness_set = VAR_2;
 VAR_3->led.blink_set = VAR_1;

 VAR_4 = FUNC_1(VAR_6, &VAR_3->led);
 if (VAR_4)
  FUNC_0(VAR_6, "failed to register led class: %d\n", VAR_4);
}
