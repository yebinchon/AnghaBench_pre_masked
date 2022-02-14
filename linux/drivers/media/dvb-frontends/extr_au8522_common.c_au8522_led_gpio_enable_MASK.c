
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct au8522_led_config* led_cfg; } ;
struct au8522_state {TYPE_1__ config; } ;
struct au8522_led_config {int gpio_output; int gpio_output_enable; int gpio_output_disable; } ;


 int FUNC_0 (struct au8522_state*,int) ;
 int FUNC_1 (struct au8522_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct au8522_state *VAR_0, int VAR_1)
{
 struct au8522_led_config *VAR_2 = VAR_0->config.led_cfg;
 u8 VAR_3;


 if (!VAR_2 || !VAR_2->gpio_output ||
     !VAR_2->gpio_output_enable || !VAR_2->gpio_output_disable)
  return 0;

 VAR_3 = FUNC_0(VAR_0, 0x4000 |
        (VAR_2->gpio_output & ~0xc000));
 if (VAR_1) {

  VAR_3 &= ~((VAR_2->gpio_output_enable >> 8) & 0xff);
  VAR_3 |= (VAR_2->gpio_output_enable & 0xff);
 } else {

  VAR_3 &= ~((VAR_2->gpio_output_disable >> 8) & 0xff);
  VAR_3 |= (VAR_2->gpio_output_disable & 0xff);
 }
 return FUNC_1(VAR_0, 0x8000 |
          (VAR_2->gpio_output & ~0xc000), VAR_3);
}
