
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct megamod_pic {TYPE_1__* regs; int irqhost; } ;
struct megamod_cascade_data {int index; struct megamod_pic* pic; } ;
struct irq_desc {int dummy; } ;
struct TYPE_2__ {int * evtclr; int * mevtflag; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 struct megamod_cascade_data* FUNC_2 (struct irq_desc*) ;
 unsigned int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_0)
{
 struct megamod_cascade_data *VAR_1;
 struct megamod_pic *VAR_2;
 unsigned int VAR_3;
 u32 VAR_4;
 int VAR_5, VAR_6;

 VAR_1 = FUNC_2(VAR_0);

 VAR_2 = VAR_1->pic;
 VAR_6 = VAR_1->index;

 while ((VAR_4 = FUNC_4(&VAR_2->regs->mevtflag[VAR_6])) != 0) {
  VAR_5 = FUNC_0(VAR_4);

  VAR_3 = FUNC_3(VAR_2->irqhost, VAR_6 * 32 + VAR_5);

  FUNC_5(1 << VAR_5, &VAR_2->regs->evtclr[VAR_6]);

  FUNC_1(VAR_3);
 }
}
