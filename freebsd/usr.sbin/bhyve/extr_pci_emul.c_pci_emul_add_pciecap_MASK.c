
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pciecap {int pcie_capabilities; int link_capabilities; int link_status; int capid; } ;
struct pci_devinst {scalar_t__ pi_bus; } ;
typedef int pciecap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pciecap*,int) ;
 int FUNC_1 (struct pci_devinst*,int *,int) ;

int
FUNC_2(struct pci_devinst *VAR_4, int VAR_5)
{
 int VAR_6;
 struct pciecap VAR_7;

 FUNC_0(&VAR_7, sizeof(VAR_7));







 if ((VAR_5 == VAR_1) && (VAR_4->pi_bus == 0))
  VAR_5 = VAR_2;

 VAR_7.capid = VAR_3;
 VAR_7.pcie_capabilities = VAR_0 | VAR_5;
 if (VAR_5 != VAR_2) {
  VAR_7.link_capabilities = 0x411;
  VAR_7.link_status = 0x11;
 }

 VAR_6 = FUNC_1(VAR_4, (u_char *)&VAR_7, sizeof(VAR_7));
 return (VAR_6);
}
