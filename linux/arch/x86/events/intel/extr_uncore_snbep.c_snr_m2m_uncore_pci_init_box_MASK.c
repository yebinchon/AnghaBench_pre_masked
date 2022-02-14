
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct intel_uncore_box {int flags; struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct pci_dev*,int,int ) ;
 int FUNC_2 (struct intel_uncore_box*) ;

__attribute__((used)) static void FUNC_3(struct intel_uncore_box *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pci_dev;
 int VAR_4 = FUNC_2(VAR_2);

 FUNC_0(VAR_1, &VAR_2->flags);
 FUNC_1(VAR_3, VAR_4, VAR_0);
}
