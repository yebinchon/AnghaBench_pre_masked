
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
struct xhci_trb {int dummy; } ;
struct TYPE_3__ {int iman; int imod; int erstsz; int erstba; int erdp; } ;
struct pci_xhci_rtsregs {void* er_enq_idx; void* er_events_cnt; TYPE_2__* erstba_p; TYPE_1__ intrreg; int er_deq_seg; void* erst_p; } ;
struct pci_xhci_softc {struct pci_xhci_rtsregs rtsregs; scalar_t__ rtsoff; } ;
struct TYPE_4__ {int qwEvrsTablePtr; void* dwEvrsTableSize; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 void* FUNC_4 (struct pci_xhci_softc*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct pci_xhci_softc*) ;

__attribute__((used)) static void
FUNC_6(struct pci_xhci_softc *VAR_3, uint64_t VAR_4,
    uint64_t VAR_5)
{
 struct pci_xhci_rtsregs *VAR_6;

 VAR_4 -= VAR_3->rtsoff;

 if (VAR_4 == 0) {
  FUNC_0(("pci_xhci attempted write to MFINDEX\r\n"));
  return;
 }

 FUNC_0(("pci_xhci: runtime regs write offset 0x%lx: 0x%lx\r\n",
         VAR_4, VAR_5));

 VAR_4 -= 0x20;

 VAR_6 = &VAR_3->rtsregs;

 switch (VAR_4) {
 case 0x00:
  if (VAR_5 & VAR_2)
   VAR_6->intrreg.iman &= ~VAR_2;
  VAR_6->intrreg.iman = (VAR_5 & VAR_1) |
                      (VAR_6->intrreg.iman & VAR_2);

  if (!(VAR_5 & VAR_1))
   FUNC_5(VAR_3);

  break;

 case 0x04:
  VAR_6->intrreg.imod = VAR_5;
  break;

 case 0x08:
  VAR_6->intrreg.erstsz = VAR_5 & 0xFFFF;
  break;

 case 0x10:

  VAR_6->intrreg.erstba = FUNC_1(VAR_3->rtsregs.intrreg.erstba) |
                        (VAR_5 & ~0x3F);
  break;

 case 0x14:

  VAR_6->intrreg.erstba = (VAR_5 << 32) |
      FUNC_2(VAR_3->rtsregs.intrreg.erstba);

  VAR_6->erstba_p = FUNC_4(VAR_3,
                          VAR_3->rtsregs.intrreg.erstba & ~0x3FUL);

  VAR_6->erst_p = FUNC_4(VAR_3,
                VAR_3->rtsregs.erstba_p->qwEvrsTablePtr & ~0x3FUL);

  VAR_6->er_enq_idx = 0;
  VAR_6->er_events_cnt = 0;

  FUNC_0(("pci_xhci: wr erstba erst (%p) ptr 0x%lx, sz %u\r\n",
          VAR_6->erstba_p,
          VAR_6->erstba_p->qwEvrsTablePtr,
          VAR_6->erstba_p->dwEvrsTableSize));
  break;

 case 0x18:

  VAR_6->intrreg.erdp =
      FUNC_1(VAR_3->rtsregs.intrreg.erdp) |
      (VAR_6->intrreg.erdp & VAR_0) |
      (VAR_5 & ~0xF);
  if (VAR_5 & VAR_0) {
   VAR_6->intrreg.erdp &= ~VAR_0;
   VAR_6->intrreg.iman &= ~VAR_2;
  }

  VAR_6->er_deq_seg = FUNC_3(VAR_5);

  break;

 case 0x1C:

  VAR_6->intrreg.erdp = (VAR_5 << 32) |
      FUNC_2(VAR_3->rtsregs.intrreg.erdp);

  if (VAR_6->er_events_cnt > 0) {
   uint64_t VAR_7;
   uint32_t VAR_8;

   VAR_7 = VAR_6->intrreg.erdp & ~0xF;
   VAR_8 = (VAR_7 - VAR_6->erstba_p->qwEvrsTablePtr) /
              sizeof(struct xhci_trb);

   if (VAR_8 <= VAR_6->er_enq_idx)
    VAR_6->er_events_cnt = VAR_6->er_enq_idx - VAR_8;
   else
    VAR_6->er_events_cnt =
              VAR_6->erstba_p->dwEvrsTableSize -
              (VAR_8 - VAR_6->er_enq_idx);

   FUNC_0(("pci_xhci: erdp 0x%lx, events cnt %u\r\n",
           VAR_7, VAR_6->er_events_cnt));
  }

  break;

 default:
  FUNC_0(("pci_xhci attempted write to RTS offset 0x%lx\r\n",
          VAR_4));
  break;
 }
}
