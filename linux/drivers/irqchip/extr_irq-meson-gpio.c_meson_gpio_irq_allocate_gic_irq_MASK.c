
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct irq_fwspec {int param_count; scalar_t__* param; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; } ;
struct TYPE_2__ {int fwnode; } ;


 int FUNC_0 (struct irq_domain*,unsigned int,int,struct irq_fwspec*) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_0,
        unsigned int VAR_1,
        u32 VAR_2,
        unsigned int VAR_3)
{
 struct irq_fwspec VAR_4;

 VAR_4.fwnode = VAR_0->parent->fwnode;
 VAR_4.param_count = 3;
 VAR_4.param[0] = 0;
 VAR_4.param[1] = VAR_2;
 VAR_4.param[2] = FUNC_1(VAR_3);

 return FUNC_0(VAR_0, VAR_1, 1, &VAR_4);
}
