
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_exp_gpio {int fw; } ;
struct gpio_get_set_state {unsigned int gpio; int state; } ;
struct gpio_chip {int parent; } ;
typedef int set ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,int,unsigned int) ;
 struct rpi_exp_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,struct gpio_get_set_state*,int) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct rpi_exp_gpio *VAR_5;
 struct gpio_get_set_state VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_2);

 VAR_6.gpio = VAR_3 + VAR_0;
 VAR_6.state = VAR_4;

 VAR_7 = FUNC_2(VAR_5->fw, VAR_1,
      &VAR_6, sizeof(VAR_6));
 if (VAR_7 || VAR_6.gpio != 0)
  FUNC_0(VAR_2->parent,
   "Failed to set GPIO %u state (%d %x)\n", VAR_3, VAR_7,
   VAR_6.gpio);
}
