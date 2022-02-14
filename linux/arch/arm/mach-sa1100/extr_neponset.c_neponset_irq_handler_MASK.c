
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct neponset_drvdata {scalar_t__ irq_base; scalar_t__ base; } ;
struct TYPE_7__ {TYPE_1__* chip; } ;
struct irq_desc {TYPE_2__ irq_data; } ;
struct TYPE_6__ {int (* irq_unmask ) (TYPE_2__*) ;int (* irq_ack ) (TYPE_2__*) ;int (* irq_mask ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 struct neponset_drvdata* FUNC_1 (struct irq_desc*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(struct irq_desc *VAR_7)
{
 struct neponset_drvdata *VAR_8 = FUNC_1(VAR_7);
 unsigned int VAR_9;

 while (1) {



  VAR_7->irq_data.chip->irq_ack(&VAR_7->irq_data);






  VAR_9 = FUNC_2(VAR_8->base + VAR_0);
  VAR_9 ^= VAR_1 | VAR_3;

  if ((VAR_9 & (VAR_1 | VAR_3 | VAR_2)) == 0)
   break;






  if (VAR_9 & (VAR_1 | VAR_3)) {
   VAR_7->irq_data.chip->irq_mask(&VAR_7->irq_data);







   VAR_7->irq_data.chip->irq_ack(&VAR_7->irq_data);

   if (VAR_9 & VAR_1)
    FUNC_0(VAR_8->irq_base + VAR_5);

   if (VAR_9 & VAR_3)
    FUNC_0(VAR_8->irq_base + VAR_6);

   VAR_7->irq_data.chip->irq_unmask(&VAR_7->irq_data);
  }

  if (VAR_9 & VAR_2)
   FUNC_0(VAR_8->irq_base + VAR_4);
 }
}
