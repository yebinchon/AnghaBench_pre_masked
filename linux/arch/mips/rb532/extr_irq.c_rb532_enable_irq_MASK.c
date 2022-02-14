
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {unsigned int irq; } ;
struct TYPE_2__ {unsigned int* base_addr; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int volatile*) ;
 int FUNC_1 (unsigned int volatile*,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5 = VAR_2->irq;
 int VAR_6 = VAR_5 - VAR_0;
 volatile unsigned int *VAR_7;

 if (VAR_6 < 0)
  FUNC_2(VAR_5);
 else {
  VAR_3 = VAR_6 >> 5;

  VAR_6 &= (1 << 5) - 1;
  VAR_4 = 1 << VAR_6;

  FUNC_2(FUNC_3(VAR_3));

  VAR_7 = VAR_1[VAR_3].base_addr;
  FUNC_1(VAR_7, FUNC_0(VAR_7) & ~VAR_4);
 }
}
