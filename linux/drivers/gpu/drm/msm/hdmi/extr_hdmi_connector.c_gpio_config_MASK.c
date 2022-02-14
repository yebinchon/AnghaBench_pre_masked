
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_platform_config {struct hdmi_gpio_data* gpios; } ;
struct hdmi_gpio_data {int value; scalar_t__ gpiod; scalar_t__ output; } ;
struct hdmi {struct hdmi_platform_config* config; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct hdmi *VAR_1, bool VAR_2)
{
 const struct hdmi_platform_config *VAR_3 = VAR_1->config;
 int VAR_4;

 if (VAR_2) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   struct hdmi_gpio_data VAR_5 = VAR_3->gpios[VAR_4];

   if (VAR_5.gpiod) {
    if (VAR_5.output) {
     FUNC_2(VAR_5.gpiod,
              VAR_5.value);
    } else {
     FUNC_1(VAR_5.gpiod);
     FUNC_3(VAR_5.gpiod,
         VAR_5.value);
    }
   }
  }

  FUNC_0("gpio on");
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   struct hdmi_gpio_data VAR_6 = VAR_3->gpios[VAR_4];

   if (!VAR_6.gpiod)
    continue;

   if (VAR_6.output) {
    int VAR_7 = VAR_6.value ? 0 : 1;

    FUNC_3(VAR_6.gpiod, VAR_7);
   }
  };

  FUNC_0("gpio off");
 }

 return 0;
}
