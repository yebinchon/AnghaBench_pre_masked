
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {unsigned int irq; } ;
struct TYPE_2__ {unsigned int* base_addr; unsigned int mask; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (unsigned int volatile*) ;
 int FUNC_1 (unsigned int volatile*,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9 = VAR_5->irq;
 int VAR_10 = VAR_9 - VAR_2;
 volatile unsigned int *VAR_11;

 if (VAR_10 < 0) {
  FUNC_2(VAR_9);
 } else {
  VAR_6 = VAR_10 >> 5;

  VAR_10 &= (1 << 5) - 1;
  VAR_7 = 1 << VAR_10;
  VAR_11 = VAR_4[VAR_6].base_addr;
  VAR_8 = FUNC_0(VAR_11);
  VAR_8 |= VAR_7;
  FUNC_1(VAR_11, VAR_8);


  if (VAR_6 == VAR_1 && VAR_9 <= (VAR_3 + 13))
   FUNC_4(0, VAR_9 - VAR_0);





  if (VAR_8 == VAR_4[VAR_6].mask)
   FUNC_2(FUNC_3(VAR_6));
 }
}
