
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int ngpio; } ;
struct lp_gpio {TYPE_1__ chip; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp_gpio* FUNC_0 (struct gpio_chip*) ;
 unsigned long FUNC_1 (TYPE_1__*,unsigned int,int ) ;
 int FUNC_2 (int,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_2)
{
 struct lp_gpio *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4;
 unsigned VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->chip.ngpio; VAR_5 += 32) {

  VAR_4 = FUNC_1(&VAR_3->chip, VAR_5, VAR_0);
  FUNC_2(0, VAR_4);

  VAR_4 = FUNC_1(&VAR_3->chip, VAR_5, VAR_1);
  FUNC_2(0xffffffff, VAR_4);
 }

 return 0;
}
