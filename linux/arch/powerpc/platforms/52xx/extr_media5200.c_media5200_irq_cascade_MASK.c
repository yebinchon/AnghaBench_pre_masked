
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_desc {int lock; int irq_data; } ;
struct irq_chip {int (* irq_unmask ) (int *) ;int (* irq_ack ) (int *) ;int (* irq_mask ) (int *) ;} ;
struct TYPE_2__ {int irqhost; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 struct irq_chip* FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct irq_desc *VAR_4)
{
 struct irq_chip *VAR_5 = FUNC_3(VAR_4);
 int VAR_6, VAR_7;
 u32 VAR_8, VAR_9;


 FUNC_6(&VAR_4->lock);
 VAR_5->irq_mask(&VAR_4->irq_data);
 FUNC_7(&VAR_4->lock);



 VAR_8 = FUNC_2(VAR_3.regs + VAR_0);
 VAR_9 = FUNC_2(VAR_3.regs + VAR_2);
 VAR_7 = FUNC_0((VAR_8 & VAR_9) >> VAR_1);
 if (VAR_7) {
  VAR_6 = FUNC_4(VAR_3.irqhost, VAR_7 - 1);



  FUNC_1(VAR_6);
 }


 FUNC_6(&VAR_4->lock);
 VAR_5->irq_ack(&VAR_4->irq_data);
 if (!FUNC_5(&VAR_4->irq_data))
  VAR_5->irq_unmask(&VAR_4->irq_data);
 FUNC_7(&VAR_4->lock);
}
