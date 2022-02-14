
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u8 ;
struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {int * parent; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_1(const struct pci_dev *VAR_7, u8 VAR_8, u8 VAR_9)
{
 unsigned char VAR_10 = VAR_9;


 VAR_10--;
 if (VAR_8 == FUNC_0(23)) {



  VAR_10 = (VAR_10 + 2) % 4;
 } else if (VAR_8 == FUNC_0(22)) {



  VAR_10 = (VAR_10 + 0) % 4;
 } else {

  if (VAR_6 & VAR_5)
   VAR_10 = (VAR_10 + 33 - VAR_8) % 4;
  else
   VAR_10 = (VAR_10 + 3 + VAR_8) % 4;
 }
 VAR_10++;

 switch (VAR_10) {
 case 1:
  VAR_10 = VAR_1;
  break;
 case 2:
  VAR_10 = VAR_2;
  break;
 case 3:
  VAR_10 = VAR_3;
  break;
 case 4:
  VAR_10 = VAR_4;
  break;
 }


 if (VAR_7->bus->parent == ((void*)0) &&
     VAR_8 == FUNC_0(24))
  VAR_10 = VAR_0;
 return VAR_10;
}
