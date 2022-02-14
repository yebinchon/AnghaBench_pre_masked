
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct intel_uncore_box {int flags; struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct intel_uncore_box *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pci_dev;

 FUNC_0(VAR_2, &VAR_3->flags);
 FUNC_1(VAR_4, VAR_1, VAR_0);
}
