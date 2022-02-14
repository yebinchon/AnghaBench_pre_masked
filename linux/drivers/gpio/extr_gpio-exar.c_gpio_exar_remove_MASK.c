
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct exar_gpio_chip {int lock; int index; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct exar_gpio_chip* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct exar_gpio_chip *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_0, VAR_2->index);
 FUNC_1(&VAR_2->lock);

 return 0;
}
