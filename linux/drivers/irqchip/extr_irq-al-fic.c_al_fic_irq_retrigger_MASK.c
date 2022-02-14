
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct irq_chip_generic {struct al_fic* private; } ;
struct al_fic {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct irq_chip_generic* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_1)
{
 struct irq_chip_generic *VAR_2 = FUNC_1(VAR_1);
 struct al_fic *VAR_3 = VAR_2->private;

 FUNC_2(FUNC_0(VAR_1->hwirq), VAR_3->base + VAR_0);

 return 1;
}
