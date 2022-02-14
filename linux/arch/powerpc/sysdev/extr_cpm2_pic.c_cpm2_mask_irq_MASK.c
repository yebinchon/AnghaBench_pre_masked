
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_2__ {int ic_simrh; } ;


 TYPE_1__* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 unsigned int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *,int) ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned int VAR_7 = FUNC_0(VAR_4);

 VAR_5 = VAR_1[VAR_7];
 VAR_6 = VAR_2[VAR_7];

 VAR_3[VAR_6] &= ~(1 << VAR_5);
 FUNC_1(&VAR_0->ic_simrh + VAR_6, VAR_3[VAR_6]);
}
