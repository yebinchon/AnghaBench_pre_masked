
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct moxtet_irqpos {size_t idx; int bit; } ;
struct TYPE_2__ {struct moxtet_irqpos* position; } ;
struct moxtet {int* modules; TYPE_1__ irq; } ;
struct irq_data {size_t hwirq; } ;


 struct moxtet* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct seq_file*,char*,int ,size_t,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0, struct seq_file *VAR_1)
{
 struct moxtet *VAR_2 = FUNC_0(VAR_0);
 struct moxtet_irqpos *VAR_3 = &VAR_2->irq.position[VAR_0->hwirq];
 int VAR_4;

 VAR_4 = VAR_2->modules[VAR_3->idx];

 FUNC_2(VAR_1, " moxtet-%s.%i#%i", FUNC_1(VAR_4), VAR_3->idx,
     VAR_3->bit);
}
