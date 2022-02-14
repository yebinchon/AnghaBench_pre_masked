
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {int number; struct pci_dev* self; } ;


 int FUNC_0 (int,int ) ;





 int** VAR_0 ;
 int** VAR_1 ;
 int** VAR_2 ;
 int** VAR_3 ;
 int** VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;

int FUNC_2(const struct pci_dev *VAR_6, u8 VAR_7, u8 VAR_8)
{
 switch (VAR_5) {
 case 128:
  if (VAR_7 == 4) {




   while (VAR_6 && VAR_6->bus->number != 1)
    VAR_6 = VAR_6->bus->self;
   if (VAR_6 && VAR_6->devfn >= FUNC_0(4, 0))
    VAR_7 = 5;
  }
  return VAR_1[VAR_7][VAR_8];
 case 129:
  return VAR_0[VAR_7][VAR_8];

 case 131:
  if (FUNC_1())
   return VAR_3[VAR_7][VAR_8];


 case 132:
  return VAR_2[VAR_7][VAR_8];

 case 130:
  return VAR_4[VAR_7][VAR_8];
 }

 return 0;
}
