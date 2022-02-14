
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;



 int FUNC_0 (struct gpio_chip*,unsigned int,int ) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned VAR_2,
          unsigned long VAR_3)
{
 enum pin_config_param VAR_4 = FUNC_3(VAR_3);

 switch (VAR_4) {
 case 130:
 case 129:
  return FUNC_1(VAR_1, VAR_2, VAR_4);

 case 128:
  return FUNC_0(VAR_1, VAR_2,
   FUNC_2(VAR_3));

 default:
  break;
 }

 return -VAR_0;
}
