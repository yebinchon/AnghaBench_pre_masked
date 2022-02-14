
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xway_stp {int reserved; } ;
struct gpio_chip {int parent; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 struct xway_stp* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct xway_stp *VAR_3 = FUNC_2(VAR_1);

 if ((VAR_2 < 8) && (VAR_3->reserved & FUNC_0(VAR_2))) {
  FUNC_1(VAR_1->parent, "GPIO %d is driven by hardware\n", VAR_2);
  return -VAR_0;
 }

 return 0;
}
