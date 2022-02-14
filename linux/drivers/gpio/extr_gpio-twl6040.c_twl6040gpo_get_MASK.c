
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl6040 {int dummy; } ;
struct gpio_chip {TYPE_1__* parent; } ;
struct TYPE_2__ {int parent; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct twl6040* FUNC_1 (int ) ;
 int FUNC_2 (struct twl6040*,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct twl6040 *VAR_3 = FUNC_1(VAR_1->parent->parent);
 int VAR_4 = 0;

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 return !!(VAR_4 & FUNC_0(VAR_2));
}
