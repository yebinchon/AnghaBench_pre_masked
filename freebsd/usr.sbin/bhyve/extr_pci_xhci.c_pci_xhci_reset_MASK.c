
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int event_pcs; scalar_t__ er_events_cnt; scalar_t__ er_enq_idx; } ;
struct pci_xhci_softc {TYPE_1__ rtsregs; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_xhci_softc*,int) ;

__attribute__((used)) static void
FUNC_1(struct pci_xhci_softc *VAR_1)
{
 int VAR_2;

 VAR_1->rtsregs.er_enq_idx = 0;
 VAR_1->rtsregs.er_events_cnt = 0;
 VAR_1->rtsregs.event_pcs = 1;

 for (VAR_2 = 1; VAR_2 <= VAR_0; VAR_2++) {
  FUNC_0(VAR_1, VAR_2);
 }
}
