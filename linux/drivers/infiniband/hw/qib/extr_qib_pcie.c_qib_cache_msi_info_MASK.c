
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qib_devdata {int msi_data; int msi_hi; int msi_lo; struct pci_dev* pcidev; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;

__attribute__((used)) static void FUNC_2(struct qib_devdata *VAR_4, int VAR_5)
{
 struct pci_dev *VAR_6 = VAR_4->pcidev;
 u16 VAR_7;

 FUNC_0(VAR_6, VAR_5 + VAR_1, &VAR_4->msi_lo);
 FUNC_0(VAR_6, VAR_5 + VAR_0, &VAR_4->msi_hi);
 FUNC_1(VAR_6, VAR_5 + VAR_2, &VAR_7);


 FUNC_1(VAR_6,
        VAR_5 + ((VAR_7 & VAR_3) ? 12 : 8),
        &VAR_4->msi_data);
}
