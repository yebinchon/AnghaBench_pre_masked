
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int (* set_config ) (struct gpio_chip*,unsigned int,unsigned long) ;} ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;


 unsigned long FUNC_0 (int,unsigned int) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2,
      enum pin_config_param VAR_3)
{
 unsigned long VAR_4;
 unsigned VAR_5;

 switch (VAR_3) {
 case 129:
 case 128:
  VAR_5 = 1;
  break;

 default:
  VAR_5 = 0;
 }

 VAR_4 = FUNC_0(VAR_3, VAR_5);
 return VAR_1->set_config ? VAR_1->set_config(VAR_1, VAR_2, VAR_4) : -VAR_0;
}
