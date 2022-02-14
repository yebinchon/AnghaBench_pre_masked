
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
struct xhci_trb {size_t dwTrb3; size_t dwTrb2; scalar_t__ qwTrb0; } ;
struct xhci_endp_ctx {int dummy; } ;
struct xhci_dev_ctx {struct xhci_endp_ctx* ctx_ep; } ;
struct usb_data_xfer {int head; scalar_t__ ndata; TYPE_1__* data; } ;
struct pci_xhci_softc {int dummy; } ;
struct pci_xhci_dev_ep {int dummy; } ;
struct pci_xhci_dev_emu {struct pci_xhci_dev_ep* eps; } ;
struct TYPE_2__ {int ccs; int blen; int trbnext; int streamid; scalar_t__ bdone; int processed; scalar_t__ hci_data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct xhci_trb* FUNC_1 (struct pci_xhci_softc*,scalar_t__) ;
 struct pci_xhci_dev_emu* FUNC_2 (struct pci_xhci_softc*,size_t) ;
 size_t FUNC_3 (int) ;
 size_t FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (size_t) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (int ) ;
 struct xhci_dev_ctx* FUNC_10 (struct pci_xhci_softc*,size_t) ;
 int FUNC_11 (struct pci_xhci_softc*,struct xhci_trb*,int ) ;
 int FUNC_12 (struct pci_xhci_softc*,struct pci_xhci_dev_emu*,struct pci_xhci_dev_ep*,struct xhci_endp_ctx*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_13(struct pci_xhci_softc *VAR_8, struct usb_data_xfer *VAR_9,
     uint32_t VAR_10, uint32_t VAR_11, int *VAR_12)
{
 struct pci_xhci_dev_emu *VAR_13;
 struct pci_xhci_dev_ep *VAR_14;
 struct xhci_dev_ctx *VAR_15;
 struct xhci_endp_ctx *VAR_16;
 struct xhci_trb *VAR_17;
 struct xhci_trb VAR_18;
 uint32_t VAR_19;
 uint32_t VAR_20;
 int VAR_21, VAR_22;

 VAR_13 = FUNC_2(VAR_8, VAR_10);
 VAR_14 = &VAR_13->eps[VAR_11];
 VAR_15 = FUNC_10(VAR_8, VAR_10);

 FUNC_9(VAR_15 != ((void*)0));

 VAR_16 = &VAR_15->ctx_ep[VAR_11];

 VAR_22 = VAR_5;
 *VAR_12 = 0;
 VAR_20 = 0;


 for (VAR_21 = VAR_9->head; VAR_9->ndata > 0; ) {
  VAR_18.qwTrb0 = (uint64_t)VAR_9->data[VAR_21].hci_data;
  VAR_17 = FUNC_1(VAR_8, VAR_18.qwTrb0);
  VAR_19 = VAR_17->dwTrb3;

  FUNC_0(("pci_xhci: xfer[%d] done?%u:%d trb %x %016lx %x "
           "(err %d) IOC?%d\r\n",
       VAR_21, VAR_9->data[VAR_21].processed, VAR_9->data[VAR_21].blen,
       FUNC_7(VAR_19), VAR_18.qwTrb0,
       VAR_19, VAR_22,
       VAR_17->dwTrb3 & VAR_2 ? 1 : 0));

  if (!VAR_9->data[VAR_21].processed) {
   VAR_9->head = VAR_21;
   break;
  }

  VAR_9->ndata--;
  VAR_20 += VAR_9->data[VAR_21].bdone;

  VAR_17->dwTrb3 = (VAR_17->dwTrb3 & ~0x1) | (VAR_9->data[VAR_21].ccs);

  FUNC_12(VAR_8, VAR_13, VAR_14, VAR_16,
      VAR_9->data[VAR_21].streamid, VAR_9->data[VAR_21].trbnext,
      VAR_9->data[VAR_21].ccs);


  if (!(VAR_17->dwTrb3 & VAR_2) &&
      !((VAR_22 == VAR_4) &&
        (VAR_17->dwTrb3 & VAR_3))) {

   VAR_21 = (VAR_21 + 1) % VAR_0;
   continue;
  }

  VAR_18.dwTrb2 = FUNC_3(VAR_22) |
                 FUNC_4(VAR_9->data[VAR_21].blen);

  VAR_18.dwTrb3 = FUNC_8(VAR_6) |
      FUNC_6(VAR_10) | FUNC_5(VAR_11);

  if (FUNC_7(VAR_19) == VAR_7) {
   FUNC_0(("pci_xhci EVENT_DATA edtla %u\r\n", VAR_20));
   VAR_18.qwTrb0 = VAR_17->qwTrb0;
   VAR_18.dwTrb2 = (VAR_20 & 0xFFFFF) |
            FUNC_3(VAR_22);
   VAR_18.dwTrb3 |= VAR_1;
   VAR_20 = 0;
  }

  *VAR_12 = 1;

  VAR_22 = FUNC_11(VAR_8, &VAR_18, 0);
  if (VAR_22 != VAR_5) {
   break;
  }

  VAR_21 = (VAR_21 + 1) % VAR_0;
 }

 return (VAR_22);
}
