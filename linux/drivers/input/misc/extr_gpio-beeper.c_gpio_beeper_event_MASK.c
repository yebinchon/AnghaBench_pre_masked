
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct gpio_beeper {int beeping; int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct gpio_beeper* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_4, unsigned int VAR_5,
        unsigned int VAR_6, int VAR_7)
{
 struct gpio_beeper *VAR_8 = FUNC_0(VAR_4);

 if (VAR_5 != VAR_2 || VAR_6 != VAR_3)
  return -VAR_1;

 if (VAR_7 < 0)
  return -VAR_0;

 VAR_8->beeping = VAR_7;

 FUNC_1(&VAR_8->work);

 return 0;
}
