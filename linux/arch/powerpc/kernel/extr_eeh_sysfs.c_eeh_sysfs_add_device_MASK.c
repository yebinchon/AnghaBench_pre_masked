
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct eeh_dev {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 struct eeh_dev* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (char*) ;

void FUNC_5(struct pci_dev *VAR_4)
{
 struct eeh_dev *VAR_5 = FUNC_3(VAR_4);
 int VAR_6=0;

 if (!FUNC_1())
  return;

 if (VAR_5 && (VAR_5->mode & VAR_0))
  return;

 VAR_6 += FUNC_0(&VAR_4->dev, &VAR_1);
 VAR_6 += FUNC_0(&VAR_4->dev, &VAR_2);
 VAR_6 += FUNC_0(&VAR_4->dev, &VAR_3);
 VAR_6 += FUNC_2(VAR_4);

 if (VAR_6)
  FUNC_4("EEH: Unable to create sysfs entries\n");
 else if (VAR_5)
  VAR_5->mode |= VAR_0;
}
