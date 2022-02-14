
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sd; } ;
struct TYPE_4__ {TYPE_1__ kobj; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct eeh_dev {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (struct pci_dev*) ;
 struct eeh_dev* FUNC_2 (struct pci_dev*) ;

void FUNC_3(struct pci_dev *VAR_4)
{
 struct eeh_dev *VAR_5 = FUNC_2(VAR_4);





 if (!VAR_4->dev.kobj.sd) {
  if (VAR_5)
   VAR_5->mode &= ~VAR_0;
  return;
 }

 FUNC_0(&VAR_4->dev, &VAR_1);
 FUNC_0(&VAR_4->dev, &VAR_2);
 FUNC_0(&VAR_4->dev, &VAR_3);

 FUNC_1(VAR_4);

 if (VAR_5)
  VAR_5->mode &= ~VAR_0;
}
