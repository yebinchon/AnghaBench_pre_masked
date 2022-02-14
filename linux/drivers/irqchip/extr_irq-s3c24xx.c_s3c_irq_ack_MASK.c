
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_irq_intc {scalar_t__ reg_intpnd; scalar_t__ reg_pending; } ;
struct s3c_irq_data {unsigned long offset; struct s3c_irq_intc* intc; } ;
struct irq_data {int dummy; } ;


 struct s3c_irq_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct irq_data *VAR_0)
{
 struct s3c_irq_data *VAR_1 = FUNC_0(VAR_0);
 struct s3c_irq_intc *VAR_2 = VAR_1->intc;
 unsigned long VAR_3 = 1UL << VAR_1->offset;

 FUNC_1(VAR_3, VAR_2->reg_pending);
 if (VAR_2->reg_intpnd)
  FUNC_1(VAR_3, VAR_2->reg_intpnd);
}
