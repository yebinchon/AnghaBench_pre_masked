
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct combiner {size_t nregs; int domain; TYPE_1__* regs; } ;
struct TYPE_2__ {size_t enabled; int addr; } ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (int) ;
 struct irq_chip* FUNC_4 (struct irq_desc*) ;
 struct combiner* FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (size_t,size_t) ;
 int FUNC_8 (char*,int ,size_t,size_t,int ) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct irq_desc *VAR_0)
{
 struct combiner *VAR_1 = FUNC_5(VAR_0);
 struct irq_chip *VAR_2 = FUNC_4(VAR_0);
 u32 VAR_3;

 FUNC_1(VAR_2, VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_1->nregs; VAR_3++) {
  int VAR_4;
  int VAR_5;
  u32 VAR_6;
  u32 VAR_7;

  VAR_6 = FUNC_9(VAR_1->regs[VAR_3].addr);
  VAR_7 = VAR_6 & VAR_1->regs[VAR_3].enabled;
  if (VAR_6 && !VAR_7)
   FUNC_8("Unexpected IRQ on CPU%d: (%08x %08lx %p)\n",
         FUNC_10(), VAR_6,
         VAR_1->regs[VAR_3].enabled,
         VAR_1->regs[VAR_3].addr);

  while (VAR_7) {
   VAR_6 = FUNC_0(VAR_7);
   VAR_7 &= ~(1 << VAR_6);
   VAR_5 = FUNC_7(VAR_3, VAR_6);
   VAR_4 = FUNC_6(VAR_1->domain, VAR_5);
   if (VAR_4 > 0)
    FUNC_3(VAR_4);

  }
 }

 FUNC_2(VAR_2, VAR_0);
}
