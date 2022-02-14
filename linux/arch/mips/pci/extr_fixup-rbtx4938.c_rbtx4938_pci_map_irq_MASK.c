
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
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct pci_dev const*,int) ;
 int VAR_5 ;

int FUNC_2(const struct pci_dev *VAR_6, u8 VAR_7, u8 VAR_8)
{
 int VAR_9 = FUNC_1(VAR_6, VAR_7);

 if (VAR_9 >= 0)
  return VAR_9;
 VAR_9 = VAR_8;

 VAR_9--;
 if (VAR_7 == FUNC_0(23)) {


  VAR_9 = (VAR_9 + 0 + VAR_7) % 4;
 } else {

  if (VAR_5 & VAR_4)
   VAR_9 = (VAR_9 + 33 - VAR_7) % 4;
  else
   VAR_9 = (VAR_9 + 3 + VAR_7) % 4;
 }
 VAR_9++;

 switch (VAR_9) {
 case 1:
  VAR_9 = VAR_0;
  break;
 case 2:
  VAR_9 = VAR_1;
  break;
 case 3:
  VAR_9 = VAR_2;
  break;
 case 4:
  VAR_9 = VAR_3;
  break;
 }
 return VAR_9;
}
