
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spider_pic {int host; scalar_t__ regs; } ;
struct irq_desc {int irq_data; } ;
struct irq_chip {int (* irq_eoi ) (int *) ;} ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 struct irq_chip* FUNC_2 (struct irq_desc*) ;
 struct spider_pic* FUNC_3 (struct irq_desc*) ;
 unsigned int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_2)
{
 struct irq_chip *VAR_3 = FUNC_2(VAR_2);
 struct spider_pic *VAR_4 = FUNC_3(VAR_2);
 unsigned int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_4->regs + VAR_1) >> 24;
 if (VAR_5 == VAR_0)
  VAR_6 = 0;
 else
  VAR_6 = FUNC_4(VAR_4->host, VAR_5);

 if (VAR_6)
  FUNC_0(VAR_6);

 VAR_3->irq_eoi(&VAR_2->irq_data);
}
