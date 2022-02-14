
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct vmctx {int dummy; } ;
struct TYPE_10__ {int table_count; TYPE_3__* table; scalar_t__ enabled; } ;
struct TYPE_7__ {int maxmsgnum; int msg_data; int addr; } ;
struct pci_devinst {TYPE_4__ pi_msix; TYPE_1__ pi_msi; struct passthru_softc* pi_arg; } ;
struct TYPE_12__ {int pc_func; int pc_dev; int pc_bus; } ;
struct TYPE_11__ {scalar_t__ emulated; int capoff; } ;
struct TYPE_8__ {int capoff; } ;
struct passthru_softc {TYPE_6__ psc_sel; TYPE_5__ psc_msi; TYPE_2__ psc_msix; } ;
struct TYPE_9__ {int vector_control; int msg_data; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (struct passthru_softc*,int) ;
 int FUNC_3 (struct pci_devinst*,int ,int,int,int ) ;
 scalar_t__ FUNC_4 (struct passthru_softc*,int) ;
 int FUNC_5 (struct pci_devinst*,int ,int,int,int ) ;
 int FUNC_6 (struct pci_devinst*,int ) ;
 int FUNC_7 (struct pci_devinst*,int) ;
 scalar_t__ FUNC_8 (struct pci_devinst*) ;
 int FUNC_9 (struct pci_devinst*,int,int ) ;
 int FUNC_10 (struct pci_devinst*,int,int ) ;
 int FUNC_11 (struct vmctx*,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_12 (struct vmctx*,int,int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_13 (TYPE_6__*,int,int,int ) ;

__attribute__((used)) static int
FUNC_14(struct vmctx *VAR_2, int VAR_3, struct pci_devinst *VAR_4,
    int VAR_5, int VAR_6, uint32_t VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct passthru_softc *VAR_11;
 uint16_t VAR_12;

 VAR_11 = VAR_4->pi_arg;




 if (FUNC_0(VAR_5))
  return (-1);




 if (FUNC_2(VAR_11, VAR_5)) {
  FUNC_3(VAR_4, VAR_11->psc_msi.capoff, VAR_5, VAR_6, VAR_7);

  VAR_8 = FUNC_11(VAR_2, VAR_3, VAR_11->psc_sel.pc_bus,
   VAR_11->psc_sel.pc_dev, VAR_11->psc_sel.pc_func,
   VAR_4->pi_msi.addr, VAR_4->pi_msi.msg_data,
   VAR_4->pi_msi.maxmsgnum);
  if (VAR_8 != 0)
   FUNC_1(1, "vm_setup_pptdev_msi");
  return (0);
 }

 if (FUNC_4(VAR_11, VAR_5)) {
  FUNC_5(VAR_4, VAR_11->psc_msix.capoff, VAR_5, VAR_6, VAR_7);
  if (VAR_4->pi_msix.enabled) {
   VAR_9 = VAR_4->pi_msix.table_count;
   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
    VAR_8 = FUNC_12(VAR_2, VAR_3,
        VAR_11->psc_sel.pc_bus, VAR_11->psc_sel.pc_dev,
        VAR_11->psc_sel.pc_func, VAR_10,
        VAR_4->pi_msix.table[VAR_10].addr,
        VAR_4->pi_msix.table[VAR_10].msg_data,
        VAR_4->pi_msix.table[VAR_10].vector_control);

    if (VAR_8)
     FUNC_1(1, "vm_setup_pptdev_msix");
   }
  }
  return (0);
 }
 FUNC_13(&VAR_11->psc_sel, VAR_5, VAR_6, VAR_7);
 if (VAR_5 == VAR_1) {
  VAR_12 = FUNC_7(VAR_4, VAR_1);
  if (VAR_6 == 1)
   FUNC_10(VAR_4, VAR_1, VAR_7);
  else if (VAR_6 == 2)
   FUNC_9(VAR_4, VAR_1, VAR_7);
  FUNC_6(VAR_4, VAR_12);
 }

 return (0);
}
