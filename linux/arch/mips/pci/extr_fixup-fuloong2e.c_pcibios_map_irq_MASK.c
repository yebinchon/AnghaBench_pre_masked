
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int devfn; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;

int FUNC_1(const struct pci_dev *VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3 == VAR_1) {
  switch (FUNC_0(VAR_2->devfn)) {
  case 2:
   VAR_5 = 10;
   break;
  case 3:
   VAR_5 = 11;
   break;
  case 5:
   VAR_5 = 9;
   break;
  }
 } else {
  VAR_5 = VAR_0 + 25 + VAR_4;
 }
 return VAR_5;

}
