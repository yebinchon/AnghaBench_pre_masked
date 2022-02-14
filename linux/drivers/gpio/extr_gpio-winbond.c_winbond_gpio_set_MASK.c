
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winbond_gpio_info {int datareg; int invreg; int dev; } ;
struct gpio_chip {int dummy; } ;


 unsigned long* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned int*,struct winbond_gpio_info const**) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long,int ,unsigned int) ;
 int FUNC_5 (unsigned long,int ,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned long,int ,unsigned int) ;
 int FUNC_7 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_8(struct gpio_chip *VAR_0, unsigned int VAR_1,
        int VAR_2)
{
 unsigned long *VAR_3 = FUNC_0(VAR_0);
 const struct winbond_gpio_info *VAR_4;

 if (!FUNC_1(&VAR_1, &VAR_4))
  return;

 if (FUNC_2(*VAR_3) != 0)
  return;

 FUNC_7(*VAR_3, VAR_4->dev);

 if (FUNC_6(*VAR_3, VAR_4->invreg, VAR_1))
  VAR_2 = !VAR_2;

 if (VAR_2)
  FUNC_5(*VAR_3, VAR_4->datareg, VAR_1);
 else
  FUNC_4(*VAR_3, VAR_4->datareg, VAR_1);

 FUNC_3(*VAR_3);
}
