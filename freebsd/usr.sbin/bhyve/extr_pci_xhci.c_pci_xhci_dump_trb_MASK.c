
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct xhci_trb {int dwTrb3; int dwTrb2; int qwTrb0; } ;


 int FUNC_0 (char*) ;
 size_t FUNC_1 (int ) ;
 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct xhci_trb *VAR_1)
{
 static const char *VAR_2[] = {
  "RESERVED",
  "NORMAL",
  "SETUP_STAGE",
  "DATA_STAGE",
  "STATUS_STAGE",
  "ISOCH",
  "LINK",
  "EVENT_DATA",
  "NOOP",
  "ENABLE_SLOT",
  "DISABLE_SLOT",
  "ADDRESS_DEVICE",
  "CONFIGURE_EP",
  "EVALUATE_CTX",
  "RESET_EP",
  "STOP_EP",
  "SET_TR_DEQUEUE",
  "RESET_DEVICE",
  "FORCE_EVENT",
  "NEGOTIATE_BW",
  "SET_LATENCY_TOL",
  "GET_PORT_BW",
  "FORCE_HEADER",
  "NOOP_CMD"
 };
 uint32_t VAR_3;

 VAR_3 = FUNC_1(VAR_1->dwTrb3);
 FUNC_0(("pci_xhci: trb[@%p] type x%02x %s 0:x%016lx 2:x%08x 3:x%08x\r\n",
          VAR_1, VAR_3,
          VAR_3 <= VAR_0 ? VAR_2[VAR_3] : "INVALID",
          VAR_1->qwTrb0, VAR_1->dwTrb2, VAR_1->dwTrb3));
}
