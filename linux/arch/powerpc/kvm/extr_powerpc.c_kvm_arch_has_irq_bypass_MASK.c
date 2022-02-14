
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ irq_bypass_add_producer; } ;
struct TYPE_3__ {scalar_t__ irq_bypass_add_producer; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

bool FUNC_0(void)
{
 return ((VAR_0 && VAR_0->irq_bypass_add_producer) ||
  (VAR_1 && VAR_1->irq_bypass_add_producer));
}
