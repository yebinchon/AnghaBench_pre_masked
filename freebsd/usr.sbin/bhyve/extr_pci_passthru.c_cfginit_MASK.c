
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct pcisel {int dummy; } ;
struct pci_devinst {struct passthru_softc* pi_arg; } ;
struct TYPE_3__ {int pc_bus; int pc_dev; int pc_func; } ;
struct passthru_softc {TYPE_1__ psc_sel; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (struct vmctx*,struct passthru_softc*) ;
 scalar_t__ FUNC_2 (struct passthru_softc*) ;
 int FUNC_3 (struct pci_devinst*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (char*,int,int,int) ;

__attribute__((used)) static int
FUNC_6(struct vmctx *VAR_1, struct pci_devinst *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 struct passthru_softc *VAR_7;

 VAR_6 = 1;
 VAR_7 = VAR_2->pi_arg;

 FUNC_0(&VAR_7->psc_sel, sizeof(struct pcisel));
 VAR_7->psc_sel.pc_bus = VAR_3;
 VAR_7->psc_sel.pc_dev = VAR_4;
 VAR_7->psc_sel.pc_func = VAR_5;

 if (FUNC_2(VAR_7) != 0) {
  FUNC_5("failed to initialize MSI for PCI %d/%d/%d",
      VAR_3, VAR_4, VAR_5);
  goto done;
 }

 if (FUNC_1(VAR_1, VAR_7) != 0) {
  FUNC_5("failed to initialize BARs for PCI %d/%d/%d",
      VAR_3, VAR_4, VAR_5);
  goto done;
 }

 FUNC_3(VAR_2, VAR_0, FUNC_4(&VAR_7->psc_sel,
     VAR_0, 2));

 VAR_6 = 0;
done:
 return (VAR_6);
}
