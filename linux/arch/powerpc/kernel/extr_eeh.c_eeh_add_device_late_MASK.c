
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dn {int dummy; } ;
struct TYPE_4__ {struct eeh_dev* edev; } ;
struct TYPE_5__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; int devfn; int bus; } ;
struct eeh_dev {struct pci_dev* pdev; int mode; } ;
struct TYPE_6__ {int (* probe ) (struct pci_dn*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct eeh_dev*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_4 (struct eeh_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_dn* FUNC_6 (int ,int ) ;
 struct eeh_dev* FUNC_7 (struct pci_dn*) ;
 int FUNC_8 (struct pci_dn*,int *) ;

void FUNC_9(struct pci_dev *VAR_4)
{
 struct pci_dn *VAR_5;
 struct eeh_dev *VAR_6;

 if (!VAR_4)
  return;

 VAR_5 = FUNC_6(VAR_4->bus, VAR_4->devfn);
 VAR_6 = FUNC_7(VAR_5);
 FUNC_2(VAR_6, "Adding device\n");
 if (VAR_6->pdev == VAR_4) {
  FUNC_2(VAR_6, "Device already referenced!\n");
  return;
 }







 if (VAR_6->pdev) {
  FUNC_4(VAR_6);
  FUNC_1(VAR_6->pdev);
  FUNC_5(VAR_6->pdev);
  VAR_6->mode &= ~VAR_1;






  VAR_6->mode |= VAR_0;

  VAR_6->pdev = ((void*)0);
  VAR_4->dev.archdata.edev = ((void*)0);
 }

 if (FUNC_3(VAR_2))
  VAR_3->probe(VAR_5, ((void*)0));

 VAR_6->pdev = VAR_4;
 VAR_4->dev.archdata.edev = VAR_6;

 FUNC_0(VAR_4);
}
