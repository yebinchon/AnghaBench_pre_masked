
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct egpio_chip {int is_out; } ;


 struct egpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct egpio_chip *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 return !FUNC_1(VAR_1, &VAR_2->is_out);
}
