
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(const struct pci_dev *VAR_4, u8 VAR_5, u8 VAR_6)
{
 switch (VAR_5) {
 case 1:
 case 2:
 case 3:
  return VAR_3 + (((VAR_5-1) + (VAR_6-1)) % 4);
 case 4:
  return VAR_1;
 case 5:
  return VAR_0;
 case 6:
  return VAR_2;
 default:
  return 0xff;
 }

 return -1;
}
