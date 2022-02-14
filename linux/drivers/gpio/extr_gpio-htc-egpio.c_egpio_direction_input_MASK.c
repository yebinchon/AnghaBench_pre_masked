
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct egpio_chip {int is_out; } ;


 int VAR_0 ;
 struct egpio_chip* FUNC_0 (struct gpio_chip*) ;
 scalar_t__ FUNC_1 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct egpio_chip *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 return FUNC_1(VAR_2, &VAR_3->is_out) ? -VAR_0 : 0;
}
