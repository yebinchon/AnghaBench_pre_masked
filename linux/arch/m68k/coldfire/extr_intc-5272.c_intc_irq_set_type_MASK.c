
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {unsigned int irq; } ;
struct TYPE_2__ {scalar_t__ ack; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = VAR_5->irq;

 if ((VAR_7 >= VAR_1) && (VAR_7 <= VAR_2)) {
  VAR_7 -= VAR_1;
  if (VAR_4[VAR_7].ack) {
   u32 VAR_8;
   VAR_8 = FUNC_0(VAR_3);
   if (VAR_6 == VAR_0)
    VAR_8 &= ~(0x1 << (32 - VAR_7));
   else
    VAR_8 |= (0x1 << (32 - VAR_7));
   FUNC_1(VAR_8, VAR_3);
  }
 }
 return 0;
}
