
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tpci200_board {TYPE_1__* info; } ;
struct TYPE_7__ {int irq; } ;
struct TYPE_6__ {TYPE_2__* pdev; int cfg_regs; int interface_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_5(struct tpci200_board *VAR_5)
{
 FUNC_0(VAR_5->info->pdev->irq, (void *) VAR_5);

 FUNC_3(VAR_5->info->pdev, VAR_5->info->interface_regs);
 FUNC_3(VAR_5->info->pdev, VAR_5->info->cfg_regs);

 FUNC_4(VAR_5->info->pdev, VAR_2);
 FUNC_4(VAR_5->info->pdev, VAR_1);
 FUNC_4(VAR_5->info->pdev, VAR_3);
 FUNC_4(VAR_5->info->pdev, VAR_4);
 FUNC_4(VAR_5->info->pdev, VAR_0);

 FUNC_2(VAR_5->info->pdev);
 FUNC_1(VAR_5->info->pdev);
}
