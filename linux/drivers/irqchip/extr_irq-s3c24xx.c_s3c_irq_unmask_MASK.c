
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_irq_intc {int domain; int reg_mask; struct s3c_irq_intc* parent; } ;
struct s3c_irq_data {unsigned long offset; int parent_irq; struct s3c_irq_intc* intc; } ;
struct irq_data {int dummy; } ;


 struct s3c_irq_data* FUNC_0 (struct irq_data*) ;
 unsigned int FUNC_1 (int ,int ) ;
 struct irq_data* FUNC_2 (unsigned int) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 struct s3c_irq_data *VAR_1 = FUNC_0(VAR_0);
 struct s3c_irq_intc *VAR_2 = VAR_1->intc;
 struct s3c_irq_intc *VAR_3 = VAR_2->parent;
 unsigned long VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_3(VAR_2->reg_mask);
 VAR_4 &= ~(1UL << VAR_1->offset);
 FUNC_4(VAR_4, VAR_2->reg_mask);

 if (VAR_3) {
  VAR_5 = FUNC_1(VAR_3->domain,
      VAR_1->parent_irq);
  FUNC_5(FUNC_2(VAR_5));
 }
}
