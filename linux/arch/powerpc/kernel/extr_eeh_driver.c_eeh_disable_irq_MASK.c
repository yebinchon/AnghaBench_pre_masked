
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeh_dev {TYPE_1__* pdev; int mode; } ;
struct TYPE_2__ {int irq; scalar_t__ msix_enabled; scalar_t__ msi_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct eeh_dev *VAR_1)
{




 if (VAR_1->pdev->msi_enabled || VAR_1->pdev->msix_enabled)
  return;

 if (!FUNC_1(VAR_1->pdev->irq))
  return;

 VAR_1->mode |= VAR_0;
 FUNC_0(VAR_1->pdev->irq);
}
