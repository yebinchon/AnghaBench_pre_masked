
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* chip; } ;
struct irq_desc {TYPE_3__ irq_data; } ;
struct grpci1_priv {int * irq_map; int irq_err; TYPE_2__* regs; } ;
struct TYPE_5__ {int irq; } ;
struct TYPE_4__ {int (* irq_eoi ) (TYPE_3__*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct grpci1_priv* VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(struct irq_desc *VAR_4)
{
 struct grpci1_priv *VAR_5 = VAR_3;
 int VAR_6, VAR_7 = 0;
 unsigned int VAR_8;

 VAR_8 = FUNC_0(VAR_5->regs->irq);
 VAR_8 = (VAR_8 >> VAR_2) & VAR_8;


 if (VAR_8 & VAR_0) {
  FUNC_1(VAR_5->irq_err);
  VAR_7 = 1;
 }


 if (VAR_8 & VAR_1) {

  for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
   if (VAR_8 & (1 << VAR_6))
    FUNC_1(VAR_5->irq_map[VAR_6]);
  }
  VAR_7 = 1;
 }






 if (VAR_7)
  VAR_4->irq_data.chip->irq_eoi(&VAR_4->irq_data);
}
