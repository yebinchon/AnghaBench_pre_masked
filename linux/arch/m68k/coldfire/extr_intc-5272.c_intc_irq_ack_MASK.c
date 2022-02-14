
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {unsigned int irq; } ;
struct TYPE_2__ {int index; int icr; scalar_t__ ack; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_3)
{
 unsigned int VAR_4 = VAR_3->irq;


 if ((VAR_4 >= VAR_0) && (VAR_4 <= VAR_1)) {
  VAR_4 -= VAR_0;
  if (VAR_2[VAR_4].ack) {
   u32 VAR_5;
   VAR_5 = FUNC_0(VAR_2[VAR_4].icr);
   VAR_5 &= (0x7 << VAR_2[VAR_4].index);
   VAR_5 |= (0x8 << VAR_2[VAR_4].index);
   FUNC_1(VAR_5, VAR_2[VAR_4].icr);
  }
 }
}
