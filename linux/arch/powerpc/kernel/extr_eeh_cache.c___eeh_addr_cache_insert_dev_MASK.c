
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {int dummy; } ;
struct pci_dev {int dev; int devfn; int bus; } ;
struct eeh_dev {int pe; } ;
typedef int resource_size_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*,int ,int ,unsigned long) ;
 struct pci_dn* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 unsigned long FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (struct pci_dev*,int) ;
 struct eeh_dev* FUNC_7 (struct pci_dn*) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_3)
{
 struct pci_dn *VAR_4;
 struct eeh_dev *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_3->bus, VAR_3->devfn);
 if (!VAR_4) {
  FUNC_8("PCI: no pci dn found for dev=%s\n",
   FUNC_3(VAR_3));
  return;
 }

 VAR_5 = FUNC_7(VAR_4);
 if (!VAR_5) {
  FUNC_8("PCI: no EEH dev found for %s\n",
   FUNC_3(VAR_3));
  return;
 }


 if (!VAR_5->pe) {
  FUNC_0(&VAR_3->dev, "EEH: Skip building address cache\n");
  return;
 }





 for (VAR_6 = 0; VAR_6 <= VAR_2; VAR_6++) {
  resource_size_t VAR_7 = FUNC_6(VAR_3,VAR_6);
  resource_size_t VAR_8 = FUNC_4(VAR_3,VAR_6);
  unsigned long VAR_9 = FUNC_5(VAR_3,VAR_6);


  if (0 == (VAR_9 & (VAR_0 | VAR_1)))
   continue;
  if (VAR_7 == 0 || ~VAR_7 == 0 || VAR_8 == 0 || ~VAR_8 == 0)
    continue;
  FUNC_1(VAR_3, VAR_7, VAR_8, VAR_9);
 }
}
