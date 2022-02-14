
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winbond_gpio_info {int invreg; int datareg; int dev; } ;
struct gpio_chip {int dummy; } ;


 unsigned long* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned int*,struct winbond_gpio_info const**) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long,int ,unsigned int) ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 unsigned long *VAR_2 = FUNC_0(VAR_0);
 const struct winbond_gpio_info *VAR_3;
 bool VAR_4;

 FUNC_1(&VAR_1, &VAR_3);

 VAR_4 = FUNC_2(*VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_5(*VAR_2, VAR_3->dev);

 VAR_4 = FUNC_4(*VAR_2, VAR_3->datareg, VAR_1);
 if (FUNC_4(*VAR_2, VAR_3->invreg, VAR_1))
  VAR_4 = !VAR_4;

 FUNC_3(*VAR_2);

 return VAR_4;
}
