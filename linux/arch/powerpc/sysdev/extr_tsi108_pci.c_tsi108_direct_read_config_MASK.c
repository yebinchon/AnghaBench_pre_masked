
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct pci_controller {int dummy; } ;
struct pci_bus {int number; } ;
struct TYPE_2__ {scalar_t__ (* pci_exclude_device ) (struct pci_controller*,int ,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned char volatile*,char*) ;
 struct pci_controller* FUNC_1 (struct pci_bus*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (struct pci_controller*,int ,unsigned int) ;
 int FUNC_4 (int ,unsigned int,int) ;

int
FUNC_5(struct pci_bus *VAR_3, unsigned int VAR_4, int VAR_5,
     int VAR_6, u32 * VAR_7)
{
 volatile unsigned char *VAR_8;
 struct pci_controller *VAR_9 = FUNC_1(VAR_3);
 u32 VAR_10;

 if (VAR_2.pci_exclude_device)
  if (VAR_2.pci_exclude_device(VAR_9, VAR_3->number, VAR_4))
   return VAR_0;

 VAR_8 = (unsigned char *)(FUNC_4(VAR_3->number,
       VAR_4,
       VAR_5) | (VAR_5 &
           0x03));

 switch (VAR_6) {
 case 1:
  FUNC_0(VAR_10, VAR_8, "lbzx");
  break;
 case 2:
  FUNC_0(VAR_10, VAR_8, "lhbrx");
  break;
 default:
  FUNC_0(VAR_10, VAR_8, "lwbrx");
  break;
 }

 *VAR_7 = VAR_10;
 return VAR_1;
}
