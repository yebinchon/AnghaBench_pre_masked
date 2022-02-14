
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct gpio_chip**) ;
 struct gpio_chip** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct gpio_chip**) ;
 int FUNC_3 (struct gpio_chip*,void*) ;

int FUNC_4(struct device *VAR_3, struct gpio_chip *VAR_4,
      void *VAR_5)
{
 struct gpio_chip **VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_2, sizeof(*VAR_6),
        VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_4, VAR_5);
 if (VAR_7 < 0) {
  FUNC_2(VAR_6);
  return VAR_7;
 }

 *VAR_6 = VAR_4;
 FUNC_0(VAR_3, VAR_6);

 return 0;
}
