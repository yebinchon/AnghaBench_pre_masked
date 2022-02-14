
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* chip; } ;
struct irq_desc {TYPE_3__ irq_data; } ;
struct grpci2_priv {scalar_t__ irq_mode; int virq_dma; int * irq_map; int virq_err; TYPE_1__* regs; } ;
struct TYPE_5__ {int (* irq_eoi ) (TYPE_3__*) ;} ;
struct TYPE_4__ {int sts_cap; int ctrl; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ) ;
 struct grpci2_priv* VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(struct irq_desc *VAR_6)
{
 struct grpci2_priv *VAR_7 = VAR_5;
 int VAR_8, VAR_9 = 0;
 unsigned int VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_0(VAR_7->regs->ctrl);
 VAR_11 = FUNC_0(VAR_7->regs->sts_cap);


 if (VAR_11 & VAR_1) {
  FUNC_1(VAR_7->virq_err);
  VAR_9 = 1;
 }


 VAR_12 = ((~VAR_11) >> VAR_4) & VAR_10 & VAR_0;
 if (VAR_12) {

  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   if (VAR_12 & (1 << VAR_8))
    FUNC_1(VAR_7->irq_map[VAR_8]);
  }
  VAR_9 = 1;
 }






 if ((VAR_7->irq_mode == 0) && (VAR_11 & (VAR_2 | VAR_3))) {
  FUNC_1(VAR_7->virq_dma);
  VAR_9 = 1;
 }






 if (VAR_9)
  VAR_6->irq_data.chip->irq_eoi(&VAR_6->irq_data);
}
