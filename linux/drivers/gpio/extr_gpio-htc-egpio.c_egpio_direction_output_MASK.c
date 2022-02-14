
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct egpio_chip {int is_out; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpio_chip*,unsigned int,int) ;
 struct egpio_chip* FUNC_1 (struct gpio_chip*) ;
 scalar_t__ FUNC_2 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1,
     unsigned VAR_2, int VAR_3)
{
 struct egpio_chip *VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (FUNC_2(VAR_2, &VAR_4->is_out)) {
  FUNC_0(VAR_1, VAR_2, VAR_3);
  return 0;
 } else {
  return -VAR_0;
 }
}
