
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct intel_uncore_box {struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int *) ;
 int FUNC_1 (struct pci_dev*,int,int ) ;
 int FUNC_2 (struct intel_uncore_box*) ;

__attribute__((used)) static void FUNC_3(struct intel_uncore_box *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pci_dev;
 int VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4 = 0;

 if (!FUNC_0(VAR_2, VAR_3, &VAR_4)) {
  VAR_4 |= VAR_0;
  FUNC_1(VAR_2, VAR_3, VAR_4);
 }
}
