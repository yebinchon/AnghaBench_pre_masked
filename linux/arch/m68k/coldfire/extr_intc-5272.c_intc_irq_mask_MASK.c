
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {unsigned int irq; } ;
struct TYPE_2__ {int index; int icr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_3)
{
 unsigned int VAR_4 = VAR_3->irq;

 if ((VAR_4 >= VAR_0) && (VAR_4 <= VAR_1)) {
  u32 VAR_5;
  VAR_4 -= VAR_0;
  VAR_5 = 0x8 << VAR_2[VAR_4].index;
  FUNC_0(VAR_5, VAR_2[VAR_4].icr);
 }
}
