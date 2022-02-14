
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct intel_gvt {TYPE_2__* dev_priv; } ;
struct TYPE_7__ {int private; } ;
struct TYPE_5__ {struct pci_dev* pdev; } ;
struct TYPE_6__ {TYPE_1__ drm; } ;


 int FUNC_0 (int *,TYPE_3__*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct intel_gvt *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->dev_priv->drm.pdev;

 FUNC_0(&VAR_2->dev, &VAR_0);
 FUNC_1(VAR_0.private);
}
