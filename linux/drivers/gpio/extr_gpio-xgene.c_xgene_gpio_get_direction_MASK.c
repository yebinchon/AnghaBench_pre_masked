
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_gpio {scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned int) ;
 unsigned long FUNC_2 (unsigned int) ;
 unsigned long VAR_0 ;
 struct xgene_gpio* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct xgene_gpio *VAR_3 = FUNC_3(VAR_1);
 unsigned long VAR_4, VAR_5;

 VAR_4 = VAR_0 + FUNC_1(VAR_2);
 VAR_5 = FUNC_2(VAR_2);

 return !!(FUNC_4(VAR_3->base + VAR_4) & FUNC_0(VAR_5));
}
