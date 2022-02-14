
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;





 unsigned long VAR_0 ;
 unsigned int FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,int) ;

int FUNC_3(struct gpio_desc *VAR_1, int VAR_2,
 unsigned long *VAR_3, unsigned long *VAR_4)
{
 unsigned VAR_5 = FUNC_0(VAR_1);

 if (VAR_3 && VAR_4 && !*VAR_3 && !*VAR_4)
  *VAR_3 = *VAR_4 = VAR_0;

 switch (VAR_2) {
 case 128:
 case 129:
  FUNC_2(VAR_5, 0);
  FUNC_1(VAR_5, VAR_2);
  break;
 case 130:
  FUNC_2(VAR_5, 1);
 }
 return 0;
}
