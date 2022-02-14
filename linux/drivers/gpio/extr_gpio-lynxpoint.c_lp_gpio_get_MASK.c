
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (struct gpio_chip*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1);
 return !!(FUNC_0(VAR_4) & VAR_0);
}
