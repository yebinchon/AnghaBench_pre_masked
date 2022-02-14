
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(const struct pci_dev *VAR_3, u8 VAR_4, u8 VAR_5)
{
 int VAR_6 = -1;

 switch (VAR_4) {
 case 12:
  VAR_6 = VAR_0;
  break;
 case 13:
  VAR_6 = VAR_1;
  break;
 case 14:
  VAR_6 = VAR_2;
  break;
 default:
  break;
 }

 return VAR_6;
}
