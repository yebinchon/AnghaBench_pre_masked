
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int dummy; } ;
struct pci_devinst {scalar_t__ pi_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 struct pci_devinst* VAR_8 ;
 scalar_t__ FUNC_1 (struct vmctx*) ;
 int FUNC_2 (struct pci_devinst*,int ,int ) ;
 int FUNC_3 (struct pci_devinst*,int ,int ) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_4(struct vmctx *VAR_10, struct pci_devinst *VAR_11, char *VAR_12)
{




 if (VAR_8 != ((void*)0)) {
  FUNC_0(VAR_9, "Only one LPC bridge is allowed.\n");
  return (-1);
 }






 if (VAR_11->pi_bus != 0) {
  FUNC_0(VAR_9, "LPC bridge can be present only on bus 0.\n");
  return (-1);
 }

 if (FUNC_1(VAR_10) != 0)
  return (-1);


 FUNC_2(VAR_11, VAR_4, VAR_0);
 FUNC_2(VAR_11, VAR_6, VAR_1);
 FUNC_3(VAR_11, VAR_3, VAR_2);
 FUNC_3(VAR_11, VAR_5, VAR_7);

 VAR_8 = VAR_11;

 return (0);
}
