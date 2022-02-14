
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

__attribute__((used)) static int FUNC_0(const struct pci_dev *VAR_4, u8 VAR_5, u8 VAR_6)
{
 if ((VAR_5 < 11) || (VAR_5 > 13) || VAR_6 == 0)
  return -1;
 if (VAR_5 == 11)
  return (VAR_6 == 1) ? VAR_2 : 0xff;
 if (VAR_5 == 12) {
  switch (VAR_6) {
  case 1: return VAR_1;
  case 2: return VAR_2;
  case 3: return VAR_3;
  case 4: return VAR_0;
  }
 }
 if (VAR_5 == 13) {
  switch (VAR_6) {
  case 1: return VAR_0;
  case 2: return VAR_1;
  case 3: return VAR_2;
  case 4: return VAR_3;
  }
 }
 return -1;
}
