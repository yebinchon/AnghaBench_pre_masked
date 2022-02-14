
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ number; struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pci_dev const*,int) ;

int FUNC_3(const struct pci_dev *VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5 = -1;
 struct slot_pin {
  int slot;
  int pin;
 } VAR_6[4];
 int VAR_7=0;

 while (VAR_2->bus->number > 0) {

  VAR_3 = VAR_6[VAR_7].slot = FUNC_0(VAR_2->devfn);
  VAR_4 = VAR_6[VAR_7].pin = FUNC_2(VAR_2, VAR_4);
  VAR_2 = VAR_2->bus->self;
  VAR_7++;
  if (VAR_7 > 3) FUNC_1("PCI path to root bus too long!\n");
 }

 VAR_3 = FUNC_0(VAR_2->devfn);




 if ((VAR_3 < 3) || (VAR_7 == 0)) {


  VAR_5 = VAR_0 + FUNC_2(VAR_2, VAR_4) - 1;
 } else {
  VAR_7--;
  VAR_3 = VAR_6[VAR_7].slot;
  VAR_4 = VAR_6[VAR_7].pin;
  if (VAR_3 > 0) {
   FUNC_1("PCI expansion bus device found - not handled!\n");
  } else {
   if (VAR_7 > 0) {

    VAR_7--;
    VAR_3 = VAR_6[VAR_7].slot;
    VAR_4 = VAR_6[VAR_7].pin;

    VAR_5 = VAR_1 + (VAR_4 - 1);
   } else {

    VAR_5 = -1;
   }
  }
 }

 return VAR_5;
}
