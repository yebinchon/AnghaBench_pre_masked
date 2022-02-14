
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum irq_remap_cap { ____Placeholder_irq_remap_cap } irq_remap_cap ;
struct TYPE_2__ {int capability; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

bool FUNC_0(enum irq_remap_cap VAR_2)
{
 if (!VAR_1 || VAR_0)
  return 0;

 return (VAR_1->capability & (1 << VAR_2));
}
