
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {unsigned int irq; } ;
struct TYPE_2__ {unsigned int fpgaIrq; int mapped; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_3)
{
 unsigned int VAR_4 = VAR_3->irq;
 unsigned int VAR_5;

 if (VAR_4 >= VAR_1)
  return;
 if (!VAR_2[VAR_4].mapped)
  return;

 VAR_5 = VAR_2[VAR_4].fpgaIrq;


 FUNC_1(FUNC_0(VAR_5), VAR_0);
}
