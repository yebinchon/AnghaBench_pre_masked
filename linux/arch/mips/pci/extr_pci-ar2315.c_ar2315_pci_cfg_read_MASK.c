
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;
struct ar2315_pci_ctrl {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 struct ar2315_pci_ctrl* FUNC_1 (struct pci_bus*) ;
 int FUNC_2 (struct ar2315_pci_ctrl*,unsigned int,int,int,int *,int) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_2, unsigned VAR_3, int VAR_4,
          int VAR_5, u32 *VAR_6)
{
 struct ar2315_pci_ctrl *VAR_7 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_3) == VAR_0)
  return VAR_1;

 return FUNC_2(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6, 0);
}
