
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_exp_gpio {int fw; } ;
struct gpio_set_config {unsigned int gpio; int polarity; scalar_t__ state; scalar_t__ term_pull_up; scalar_t__ term_en; int direction; } ;
struct gpio_chip {int parent; } ;
typedef int set_in ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int,int,unsigned int) ;
 struct rpi_exp_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct gpio_chip*,unsigned int) ;
 int FUNC_3 (int ,int ,struct gpio_set_config*,int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_4, unsigned int VAR_5)
{
 struct rpi_exp_gpio *VAR_6;
 struct gpio_set_config VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_4);

 VAR_7.gpio = VAR_5 + VAR_1;
 VAR_7.direction = VAR_2;
 VAR_7.term_en = 0;
 VAR_7.term_pull_up = 0;
 VAR_7.state = 0;

 VAR_8 = FUNC_2(VAR_4, VAR_5);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_7.polarity = VAR_8;

 VAR_8 = FUNC_3(VAR_6->fw, VAR_3,
        &VAR_7, sizeof(VAR_7));
 if (VAR_8 || VAR_7.gpio != 0) {
  FUNC_0(VAR_4->parent, "Failed to set GPIO %u to input (%d %x)\n",
   VAR_5, VAR_8, VAR_7.gpio);
  return VAR_8 ? VAR_8 : -VAR_0;
 }
 return 0;
}
