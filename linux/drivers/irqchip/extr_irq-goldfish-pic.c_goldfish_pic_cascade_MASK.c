
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct goldfish_pic_data {int irq_domain; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (int) ;
 struct irq_chip* FUNC_4 (struct irq_desc*) ;
 struct goldfish_pic_data* FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct irq_desc *VAR_1)
{
 struct goldfish_pic_data *VAR_2 = FUNC_5(VAR_1);
 struct irq_chip *VAR_3 = FUNC_4(VAR_1);
 u32 VAR_4, VAR_5, VAR_6;

 FUNC_1(VAR_3, VAR_1);

 VAR_4 = FUNC_7(VAR_2->base + VAR_0);
 while (VAR_4) {
  VAR_5 = FUNC_0(VAR_4);
  VAR_6 = FUNC_6(VAR_2->irq_domain, VAR_5);
  FUNC_3(VAR_6);
  VAR_4 &= ~(1 << VAR_5);
 }

 FUNC_2(VAR_3, VAR_1);
}
