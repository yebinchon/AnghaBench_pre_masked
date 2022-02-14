
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {size_t irq; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_1)
{
 if (VAR_0[VAR_1->irq])
  FUNC_0(VAR_0[VAR_1->irq]);
}
