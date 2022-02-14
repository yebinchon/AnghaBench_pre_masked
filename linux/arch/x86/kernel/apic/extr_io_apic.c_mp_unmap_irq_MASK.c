
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chip_data {scalar_t__ count; scalar_t__ isa_irq; } ;
struct irq_data {struct mp_chip_data* chip_data; int domain; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 struct irq_data* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(int VAR_1)
{
 struct irq_data *VAR_2 = FUNC_1(VAR_1);
 struct mp_chip_data *VAR_3;

 if (!VAR_2 || !VAR_2->domain)
  return;

 VAR_3 = VAR_2->chip_data;
 if (!VAR_3 || VAR_3->isa_irq)
  return;

 FUNC_2(&VAR_0);
 if (--VAR_3->count == 0)
  FUNC_0(VAR_1, 1);
 FUNC_3(&VAR_0);
}
