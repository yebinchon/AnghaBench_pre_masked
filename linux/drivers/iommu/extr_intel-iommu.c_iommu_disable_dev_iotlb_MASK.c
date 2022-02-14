
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device_domain_info {scalar_t__ pasid_enabled; scalar_t__ pri_enabled; int domain; scalar_t__ ats_enabled; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct device_domain_info *VAR_1)
{
 struct pci_dev *VAR_2;

 FUNC_0(&VAR_0);

 if (!FUNC_1(VAR_1->dev))
  return;

 VAR_2 = FUNC_6(VAR_1->dev);

 if (VAR_1->ats_enabled) {
  FUNC_3(VAR_2);
  VAR_1->ats_enabled = 0;
  FUNC_2(VAR_1->domain);
 }
}
