
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct pci_controller {int dummy; } ;
struct pci_bus {struct pci_controller* sysdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long,int) ;
 unsigned long FUNC_1 (unsigned long,int) ;
 unsigned long FUNC_2 (unsigned long,unsigned char,struct pci_controller*) ;
 scalar_t__ FUNC_3 (struct pci_bus*,unsigned int,int,struct pci_controller*,unsigned long*,unsigned char*) ;

__attribute__((used)) static int
FUNC_4(struct pci_bus *VAR_2, unsigned int VAR_3, int VAR_4,
     int VAR_5, u32 *VAR_6)
{
 struct pci_controller *VAR_7 = VAR_2->sysdata;
 unsigned long VAR_8, VAR_9;
 unsigned char VAR_10;

 if (FUNC_3(VAR_2, VAR_3, VAR_4, VAR_7, &VAR_8, &VAR_10))
  return VAR_0;

 VAR_8 |= (VAR_5 - 1) * 8;
 VAR_9 = FUNC_2(VAR_8, VAR_10, VAR_7);
 switch (VAR_5) {
 case 1:
  *VAR_6 = FUNC_0(VAR_9, VAR_4 & 3);
  break;
 case 2:
  *VAR_6 = FUNC_1(VAR_9, VAR_4 & 3);
  break;
 case 4:
  *VAR_6 = VAR_9;
  break;
 }
 return VAR_1;
}
