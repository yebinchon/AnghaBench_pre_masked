
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_2__ {int per_mask; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2) & VAR_0;
 FUNC_0(&VAR_1->per_mask, 31 - VAR_3);
}
