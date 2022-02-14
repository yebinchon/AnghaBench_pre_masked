
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int parent; } ;
struct TYPE_2__ {unsigned int hwirq; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_4 = 0;; VAR_4++) {
  VAR_3 = FUNC_1(FUNC_2(VAR_1->parent), VAR_4);
  if (VAR_3 <= 0)
   break;
  if (FUNC_0(VAR_3)->hwirq == VAR_2)
   return VAR_3;
 }
 return -VAR_0;
}
