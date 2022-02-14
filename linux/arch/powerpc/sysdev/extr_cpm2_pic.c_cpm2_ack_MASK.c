
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_2__ {int ic_sipnrh; } ;


 TYPE_1__* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 unsigned int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6 = FUNC_0(VAR_3);

 VAR_4 = VAR_1[VAR_6];
 VAR_5 = VAR_2[VAR_6];

 FUNC_1(&VAR_0->ic_sipnrh + VAR_5, 1 << VAR_4);
}
