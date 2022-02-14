
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winbond_gpio_info {int datareg; int invreg; int ioreg; int dev; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 unsigned long* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned int*,struct winbond_gpio_info const**) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long,int ,unsigned int) ;
 int FUNC_5 (unsigned long,int ,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned long,int ,unsigned int) ;
 int FUNC_7 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_8(struct gpio_chip *VAR_1,
          unsigned int VAR_2,
          int VAR_3)
{
 unsigned long *VAR_4 = FUNC_0(VAR_1);
 const struct winbond_gpio_info *VAR_5;
 int VAR_6;

 if (!FUNC_1(&VAR_2, &VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_2(*VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_7(*VAR_4, VAR_5->dev);

 FUNC_4(*VAR_4, VAR_5->ioreg, VAR_2);

 if (FUNC_6(*VAR_4, VAR_5->invreg, VAR_2))
  VAR_3 = !VAR_3;

 if (VAR_3)
  FUNC_5(*VAR_4, VAR_5->datareg, VAR_2);
 else
  FUNC_4(*VAR_4, VAR_5->datareg, VAR_2);

 FUNC_3(*VAR_4);

 return 0;
}
