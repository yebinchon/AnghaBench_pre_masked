
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ts4800_irq_data {int domain; scalar_t__ base; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct irq_desc*) ;
 struct irq_chip* FUNC_5 (struct irq_desc*) ;
 struct ts4800_irq_data* FUNC_6 (struct irq_desc*) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct irq_desc *VAR_1)
{
 struct ts4800_irq_data *VAR_2 = FUNC_6(VAR_1);
 struct irq_chip *VAR_3 = FUNC_5(VAR_1);
 u16 VAR_4 = FUNC_8(VAR_2->base + VAR_0);

 FUNC_1(VAR_3, VAR_1);

 if (FUNC_9(VAR_4 == 0)) {
  FUNC_4(VAR_1);
  goto out;
 }

 do {
  unsigned int VAR_5 = FUNC_0(VAR_4);
  int VAR_6 = FUNC_7(VAR_2->domain, VAR_5);

  VAR_4 &= ~(1 << VAR_5);
  FUNC_3(VAR_6);
 } while (VAR_4);

out:
 FUNC_2(VAR_3, VAR_1);
}
