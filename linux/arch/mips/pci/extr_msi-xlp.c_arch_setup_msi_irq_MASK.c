
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct pci_dev {int devfn; int dev; } ;
struct TYPE_2__ {scalar_t__ is_msix; } ;
struct msi_desc {TYPE_1__ msi_attrib; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int,int) ;
 struct pci_dev* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,int,int,struct msi_desc*) ;
 int FUNC_6 (int ,int,int,struct msi_desc*) ;

int FUNC_7(struct pci_dev *VAR_0, struct msi_desc *VAR_1)
{
 struct pci_dev *VAR_2;
 uint64_t VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2 == ((void*)0)) {
  FUNC_2(&VAR_0->dev, "Could not find bridge\n");
  return 1;
 }
 VAR_6 = FUNC_1(VAR_2->devfn);
 VAR_5 = FUNC_0(VAR_2->devfn);
 VAR_4 = VAR_6 / 8;
 VAR_3 = FUNC_3(VAR_4, VAR_5);

 if (VAR_1->msi_attrib.is_msix)
  return FUNC_6(VAR_3, VAR_4, VAR_5, VAR_1);
 else
  return FUNC_5(VAR_3, VAR_4, VAR_5, VAR_1);
}
