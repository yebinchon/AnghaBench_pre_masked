
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int devfn; } ;


 size_t FUNC_0 (int ) ;
 int* VAR_0 ;
 int* VAR_1 ;

int FUNC_1(const struct pci_dev *VAR_2, u8 VAR_3, u8 VAR_4)
{
 if (VAR_3 == 30)
  return VAR_0[FUNC_0(VAR_2->devfn)];

 return VAR_1[VAR_3];
}
