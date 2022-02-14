
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int dummy; } ;
struct uart_softc {int dummy; } ;
struct pci_devinst {int pi_slot; int pi_func; struct uart_softc* pi_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,char*,int,int) ;
 int FUNC_1 (struct pci_devinst*,int ,int ,int ) ;
 int FUNC_2 (struct pci_devinst*) ;
 int FUNC_3 (struct pci_devinst*,int ,int ) ;
 int FUNC_4 (struct pci_devinst*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct uart_softc* FUNC_5 (int ,int ,struct pci_devinst*) ;
 scalar_t__ FUNC_6 (struct uart_softc*,char*) ;

__attribute__((used)) static int
FUNC_7(struct vmctx *VAR_11, struct pci_devinst *VAR_12, char *VAR_13)
{
 struct uart_softc *VAR_14;

 FUNC_1(VAR_12, 0, VAR_2, VAR_7);
 FUNC_2(VAR_12);


 FUNC_3(VAR_12, VAR_5, VAR_0);
 FUNC_3(VAR_12, VAR_6, VAR_1);
 FUNC_4(VAR_12, VAR_4, VAR_3);

 VAR_14 = FUNC_5(VAR_8, VAR_9, VAR_12);
 VAR_12->pi_arg = VAR_14;

 if (FUNC_6(VAR_14, VAR_13) != 0) {
  FUNC_0(VAR_10, "Unable to initialize backend '%s' for "
      "pci uart at %d:%d\n", VAR_13, VAR_12->pi_slot, VAR_12->pi_func);
  return (-1);
 }

 return (0);
}
