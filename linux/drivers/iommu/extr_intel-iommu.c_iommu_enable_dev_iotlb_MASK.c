
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int untrusted; } ;
struct device_domain_info {int pasid_supported; int pasid_enabled; int pri_enabled; int ats_enabled; int ats_qdep; int domain; scalar_t__ ats_supported; scalar_t__ pri_supported; scalar_t__ pfsid; TYPE_1__* iommu; int dev; } ;
struct TYPE_2__ {int ecap; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct pci_dev*,int) ;
 struct pci_dev* FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 struct pci_dev* FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct device_domain_info *VAR_2)
{
 struct pci_dev *VAR_3;

 FUNC_0(&VAR_1);

 if (!VAR_2 || !FUNC_1(VAR_2->dev))
  return;

 VAR_3 = FUNC_13(VAR_2->dev);





 if (!FUNC_3(VAR_2->iommu->ecap))
  VAR_2->pfsid = 0;
 else {
  struct pci_dev *VAR_4;


  VAR_4 = FUNC_10(VAR_3);
  VAR_2->pfsid = FUNC_6(VAR_4);
 }
 if (!VAR_3->untrusted && VAR_2->ats_supported &&
     FUNC_4(VAR_3) &&
     !FUNC_7(VAR_3, VAR_0)) {
  VAR_2->ats_enabled = 1;
  FUNC_2(VAR_2->domain);
  VAR_2->ats_qdep = FUNC_5(VAR_3);
 }
}
