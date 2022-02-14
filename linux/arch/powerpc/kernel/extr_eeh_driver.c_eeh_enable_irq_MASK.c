
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeh_dev {int mode; TYPE_1__* pdev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct eeh_dev *VAR_1)
{
 if ((VAR_1->mode) & VAR_0) {
  VAR_1->mode &= ~VAR_0;
  if (FUNC_2(FUNC_1(VAR_1->pdev->irq)))
   FUNC_0(VAR_1->pdev->irq);
 }
}
