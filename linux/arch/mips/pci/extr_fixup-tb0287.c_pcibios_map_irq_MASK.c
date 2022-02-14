
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {unsigned char number; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(const struct pci_dev *VAR_4, u8 VAR_5, u8 VAR_6)
{
 unsigned char VAR_7;
 int VAR_8 = -1;

 VAR_7 = VAR_4->bus->number;
 if (VAR_7 == 0) {
  switch (VAR_5) {
  case 16:
   VAR_8 = VAR_3;
   break;
  case 17:
   VAR_8 = VAR_2;
   break;
  default:
   break;
  }
 } else if (VAR_7 == 1) {
  switch (FUNC_0(VAR_4->devfn)) {
  case 0:
   VAR_8 = VAR_0;
   break;
  case 2:
  case 3:
   VAR_8 = VAR_1;
   break;
  default:
   break;
  }
 } else if (VAR_7 > 1) {
  VAR_8 = VAR_0;
 }

 return VAR_8;
}
