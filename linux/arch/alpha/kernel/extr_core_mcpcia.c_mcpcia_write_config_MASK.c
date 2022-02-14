
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_controller {int dummy; } ;
struct pci_bus {struct pci_controller* sysdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned long,int ,unsigned char,struct pci_controller*) ;
 scalar_t__ FUNC_2 (struct pci_bus*,unsigned int,int,struct pci_controller*,unsigned long*,unsigned char*) ;

__attribute__((used)) static int
FUNC_3(struct pci_bus *VAR_2, unsigned int VAR_3, int VAR_4,
      int VAR_5, u32 VAR_6)
{
 struct pci_controller *VAR_7 = VAR_2->sysdata;
 unsigned long VAR_8;
 unsigned char VAR_9;

 if (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7, &VAR_8, &VAR_9))
  return VAR_0;

 VAR_8 |= (VAR_5 - 1) * 8;
 VAR_6 = FUNC_0(VAR_6, VAR_4 & 3);
 FUNC_1(VAR_8, VAR_6, VAR_9, VAR_7);
 return VAR_1;
}
