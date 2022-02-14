
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_chip {int (* irq_eoi ) (int ) ;} ;
struct dwapb_gpio {int dummy; } ;


 int FUNC_0 (struct dwapb_gpio*) ;
 struct irq_chip* FUNC_1 (struct irq_desc*) ;
 struct dwapb_gpio* FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct irq_desc *VAR_0)
{
 struct dwapb_gpio *VAR_1 = FUNC_2(VAR_0);
 struct irq_chip *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1);

 if (VAR_2->irq_eoi)
  VAR_2->irq_eoi(FUNC_3(VAR_0));
}
