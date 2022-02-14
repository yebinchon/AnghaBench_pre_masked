
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_6, unsigned int VAR_7,
    unsigned long VAR_8)
{
 enum pin_config_param VAR_9 = FUNC_0(VAR_8);


 if (VAR_7 < VAR_2)
  return -VAR_0;


 if (VAR_7 < VAR_3) {
  if (VAR_9 != VAR_5)
   return -VAR_1;
  return 0;
 }


 if (VAR_9 != VAR_4)
  return -VAR_1;

 return 0;
}
