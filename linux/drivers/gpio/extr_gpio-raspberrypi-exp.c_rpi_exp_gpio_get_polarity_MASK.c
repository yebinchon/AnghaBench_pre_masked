
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_exp_gpio {int fw; } ;
struct gpio_get_config {unsigned int gpio; int polarity; } ;
struct gpio_chip {int parent; } ;
typedef int get ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,int,unsigned int) ;
 struct rpi_exp_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,struct gpio_get_config*,int) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_3, unsigned int VAR_4)
{
 struct rpi_exp_gpio *VAR_5;
 struct gpio_get_config VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_3);

 VAR_6.gpio = VAR_4 + VAR_1;

 VAR_7 = FUNC_2(VAR_5->fw, VAR_2,
        &VAR_6, sizeof(VAR_6));
 if (VAR_7 || VAR_6.gpio != 0) {
  FUNC_0(VAR_3->parent, "Failed to get GPIO %u config (%d %x)\n",
   VAR_4, VAR_7, VAR_6.gpio);
  return VAR_7 ? VAR_7 : -VAR_0;
 }
 return VAR_6.polarity;
}
