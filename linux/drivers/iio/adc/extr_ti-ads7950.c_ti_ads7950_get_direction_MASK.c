
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ads7950_state {int gpio_cmd_settings_bitmask; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 struct ti_ads7950_state* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0,
        unsigned int VAR_1)
{
 struct ti_ads7950_state *VAR_2 = FUNC_1(VAR_0);


 return !(VAR_2->gpio_cmd_settings_bitmask & FUNC_0(VAR_1));
}
