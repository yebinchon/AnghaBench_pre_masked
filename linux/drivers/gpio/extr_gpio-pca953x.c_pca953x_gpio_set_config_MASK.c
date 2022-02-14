
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pca953x_chip {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;


 struct pca953x_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct pca953x_chip*,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned int VAR_2,
       unsigned long VAR_3)
{
 struct pca953x_chip *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_3) {
 case 128:
 case 129:
  return FUNC_1(VAR_4, VAR_2, VAR_3);
 default:
  return -VAR_0;
 }
}
