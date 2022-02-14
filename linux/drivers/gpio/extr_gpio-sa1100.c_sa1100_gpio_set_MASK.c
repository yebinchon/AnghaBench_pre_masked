
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_2, unsigned VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4 ? VAR_1 : VAR_0;

 FUNC_2(FUNC_0(VAR_3), FUNC_1(VAR_2)->membase + VAR_5);
}
