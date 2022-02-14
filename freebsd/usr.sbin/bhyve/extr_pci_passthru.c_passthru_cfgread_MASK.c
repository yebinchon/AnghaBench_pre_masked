
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vmctx {int dummy; } ;
struct pci_devinst {struct passthru_softc* pi_arg; } ;
struct TYPE_2__ {scalar_t__ emulated; } ;
struct passthru_softc {int psc_sel; TYPE_1__ psc_msi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct passthru_softc*,int) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static int
FUNC_3(struct vmctx *VAR_1, int VAR_2, struct pci_devinst *VAR_3,
   int VAR_4, int VAR_5, uint32_t *VAR_6)
{
 struct passthru_softc *VAR_7;

 VAR_7 = VAR_3->pi_arg;




 if (FUNC_0(VAR_4) || FUNC_1(VAR_7, VAR_4))
  return (-1);
 *VAR_6 = FUNC_2(&VAR_7->psc_sel, VAR_4, VAR_5);

 return (0);
}
