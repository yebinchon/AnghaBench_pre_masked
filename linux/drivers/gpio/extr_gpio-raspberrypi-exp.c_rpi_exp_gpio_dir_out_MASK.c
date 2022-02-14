
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_exp_gpio {int fw; } ;
struct gpio_set_config {unsigned int gpio; int state; int polarity; scalar_t__ term_pull_up; scalar_t__ term_en; int direction; } ;
struct gpio_chip {int parent; } ;
typedef int set_out ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int,int,unsigned int) ;
 struct rpi_exp_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct gpio_chip*,unsigned int) ;
 int FUNC_3 (int ,int ,struct gpio_set_config*,int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_4, unsigned int VAR_5, int VAR_6)
{
 struct rpi_exp_gpio *VAR_7;
 struct gpio_set_config VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_4);

 VAR_8.gpio = VAR_5 + VAR_1;
 VAR_8.direction = VAR_2;
 VAR_8.term_en = 0;
 VAR_8.term_pull_up = 0;
 VAR_8.state = VAR_6;

 VAR_9 = FUNC_2(VAR_4, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_8.polarity = VAR_9;

 VAR_9 = FUNC_3(VAR_7->fw, VAR_3,
        &VAR_8, sizeof(VAR_8));
 if (VAR_9 || VAR_8.gpio != 0) {
  FUNC_0(VAR_4->parent, "Failed to set GPIO %u to output (%d %x)\n",
   VAR_5, VAR_9, VAR_8.gpio);
  return VAR_9 ? VAR_9 : -VAR_0;
 }
 return 0;
}
