
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * edev; } ;
struct TYPE_6__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_3__ dev; } ;
struct eeh_dev {int in_error; int mode; TYPE_2__* pe; int * pdev; } ;
struct TYPE_5__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct eeh_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct eeh_dev* FUNC_5 (struct pci_dev*) ;

void FUNC_6(struct pci_dev *VAR_4)
{
 struct eeh_dev *VAR_5;

 if (!VAR_4 || !FUNC_2())
  return;
 VAR_5 = FUNC_5(VAR_4);


 FUNC_0(&VAR_4->dev, "EEH: Removing device\n");

 if (!VAR_5 || !VAR_5->pdev || !VAR_5->pe) {
  FUNC_0(&VAR_4->dev, "EEH: Device not referenced!\n");
  return;
 }







 VAR_5->pdev = ((void*)0);







 VAR_5->in_error = 0;
 VAR_4->dev.archdata.edev = ((void*)0);
 if (!(VAR_5->pe->state & VAR_3))
  FUNC_3(VAR_5);
 else
  VAR_5->mode |= VAR_0;







 VAR_5->mode |= VAR_1;

 FUNC_1(VAR_4);
 FUNC_4(VAR_4);
 VAR_5->mode &= ~VAR_2;
}
