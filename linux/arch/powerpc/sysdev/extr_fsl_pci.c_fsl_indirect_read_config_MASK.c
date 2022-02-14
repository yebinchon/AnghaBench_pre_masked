
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_controller {int indirect_type; } ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_controller*) ;
 int FUNC_1 (struct pci_bus*,unsigned int,int,int,int *) ;
 struct pci_controller* FUNC_2 (struct pci_bus*) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_1, unsigned int VAR_2,
        int VAR_3, int VAR_4, u32 *VAR_5)
{
 struct pci_controller *VAR_6 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_6))
  VAR_6->indirect_type |= VAR_0;
 else
  VAR_6->indirect_type &= ~VAR_0;

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
