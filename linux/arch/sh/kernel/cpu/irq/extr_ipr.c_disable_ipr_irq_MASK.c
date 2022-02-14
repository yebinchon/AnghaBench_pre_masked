
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct ipr_data {size_t ipr_idx; int shift; } ;
struct TYPE_2__ {unsigned long* ipr_offsets; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 TYPE_1__* FUNC_2 (struct irq_data*) ;
 struct ipr_data* FUNC_3 (struct irq_data*) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 struct ipr_data *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2 = FUNC_2(VAR_0)->ipr_offsets[VAR_1->ipr_idx];

 FUNC_1(FUNC_0(VAR_2) & (0xffff ^ (0xf << VAR_1->shift)), VAR_2);
 (void)FUNC_0(VAR_2);
}
