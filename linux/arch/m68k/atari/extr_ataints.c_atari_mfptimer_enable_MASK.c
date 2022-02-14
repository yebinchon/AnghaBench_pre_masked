
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int irq; } ;
struct TYPE_2__ {int int_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_3)
{
 int VAR_4 = VAR_3->irq - VAR_1;
 VAR_2.int_mask |= 1 << VAR_4;
 FUNC_0(VAR_0);
}
