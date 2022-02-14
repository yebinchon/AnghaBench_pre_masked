
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kempld_gpio_data {struct kempld_device_data* pld; } ;
struct kempld_device_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 struct kempld_gpio_data* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (struct kempld_device_data*) ;
 int FUNC_4 (struct kempld_device_data*,int ,unsigned int,int) ;
 int FUNC_5 (struct kempld_device_data*) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_0, unsigned VAR_1,
     int VAR_2)
{
 struct kempld_gpio_data *VAR_3 = FUNC_2(VAR_0);
 struct kempld_device_data *VAR_4 = VAR_3->pld;

 FUNC_3(VAR_4);
 FUNC_4(VAR_4, FUNC_1(VAR_1), VAR_1, VAR_2);
 FUNC_4(VAR_4, FUNC_0(VAR_1), VAR_1, 1);
 FUNC_5(VAR_4);

 return 0;
}
