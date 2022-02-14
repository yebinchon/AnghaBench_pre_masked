
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grgpio_priv {int domain; TYPE_1__* lirqs; } ;
struct gpio_chip {unsigned int ngpio; } ;
struct TYPE_2__ {scalar_t__ index; } ;


 int VAR_0 ;
 struct grgpio_priv* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct grgpio_priv *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_1->ngpio)
  return -VAR_0;

 if (VAR_3->lirqs[VAR_2].index < 0)
  return -VAR_0;

 return FUNC_1(VAR_3->domain, VAR_2);
}
