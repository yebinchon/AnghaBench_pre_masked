
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct tpci200_board {int number; TYPE_4__* info; TYPE_2__* slots; } ;
struct slot_irq {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_8__ {TYPE_3__* pdev; TYPE_1__* interface_regs; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int irq; } ;
struct TYPE_5__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int *) ;
 struct slot_irq* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct tpci200_board*,int) ;
 int FUNC_6 (struct slot_irq*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 struct tpci200_board *VAR_9 = (struct tpci200_board *) VAR_8;
 struct slot_irq *VAR_10;
 irqreturn_t VAR_11;
 u16 VAR_12;
 int VAR_13;


 VAR_12 = FUNC_1(&VAR_9->info->interface_regs->status);


 if (!(VAR_12 & VAR_6))
  return VAR_2;


 FUNC_3();
 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  if (!(VAR_12 & ((VAR_3 | VAR_4) << (2 * VAR_13))))
   continue;
  VAR_10 = FUNC_2(VAR_9->slots[VAR_13].irq);
  VAR_11 = FUNC_6(VAR_10);
  if (VAR_11 == -VAR_0) {
   FUNC_0(&VAR_9->info->pdev->dev,
     "No registered ISR for slot [%d:%d]!. IRQ will be disabled.\n",
     VAR_9->number, VAR_13);
   FUNC_5(VAR_9, VAR_13);
  }
 }
 FUNC_4();

 return VAR_1;
}
