
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (struct pci_bus*,unsigned int,int,int,int *) ;
 int FUNC_1 (struct pci_bus*,unsigned int,int,int,int *) ;
 int FUNC_2 (struct pci_bus*) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_0, unsigned int VAR_1,
      int VAR_2, int VAR_3, u32 *VAR_4)
{
 if (!FUNC_2(VAR_0))
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
