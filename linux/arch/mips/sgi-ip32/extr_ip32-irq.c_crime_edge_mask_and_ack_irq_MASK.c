
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct irq_data {unsigned int irq; } ;
struct TYPE_2__ {int hard_int; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct irq_data*) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_2)
{
 unsigned int VAR_3 = VAR_2->irq - VAR_0;
 uint64_t VAR_4;


 VAR_4 = VAR_1->hard_int;
 VAR_4 &= ~(1 << VAR_3);
 VAR_1->hard_int = VAR_4;

 FUNC_0(VAR_2);
}
