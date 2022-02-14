
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_irq_intc {int domain; int reg_mask; int reg_pending; } ;
struct s3c_irq_data {unsigned long sub_bits; struct s3c_irq_intc* sub_intc; struct s3c_irq_intc* intc; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (unsigned int) ;
 struct irq_chip* FUNC_4 (struct irq_desc*) ;
 struct s3c_irq_data* FUNC_5 (struct irq_desc*) ;
 scalar_t__ FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ,unsigned int) ;
 unsigned long FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct irq_desc *VAR_0)
{
 struct irq_chip *VAR_1 = FUNC_4(VAR_0);
 struct s3c_irq_data *VAR_2 = FUNC_5(VAR_0);
 struct s3c_irq_intc *VAR_3 = VAR_2->intc;
 struct s3c_irq_intc *VAR_4 = VAR_2->sub_intc;
 unsigned int VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8, VAR_9;





 VAR_6 = FUNC_6(VAR_3->domain) ? 32 : 0;

 FUNC_1(VAR_1, VAR_0);

 VAR_8 = FUNC_8(VAR_4->reg_pending);
 VAR_9 = FUNC_8(VAR_4->reg_mask);

 VAR_8 &= ~VAR_9;
 VAR_8 &= VAR_2->sub_bits;

 while (VAR_8) {
  VAR_5 = FUNC_0(VAR_8);
  VAR_8 &= ~(1 << VAR_5);
  VAR_7 = FUNC_7(VAR_4->domain, VAR_6 + VAR_5);
  FUNC_3(VAR_7);
 }

 FUNC_2(VAR_1, VAR_0);
}
