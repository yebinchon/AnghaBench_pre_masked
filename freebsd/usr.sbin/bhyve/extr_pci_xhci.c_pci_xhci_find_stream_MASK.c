
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct xhci_stream_ctx {int qwSctx0; } ;
struct xhci_endp_ctx {int qwEpCtx2; int dwEpCtx0; } ;
struct pci_xhci_softc {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct xhci_stream_ctx* FUNC_3 (struct pci_xhci_softc*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static uint32_t
FUNC_5(struct pci_xhci_softc *VAR_5, struct xhci_endp_ctx *VAR_6,
    uint32_t VAR_7, struct xhci_stream_ctx **VAR_8)
{
 struct xhci_stream_ctx *VAR_9;
 uint32_t VAR_10;

 VAR_10 = FUNC_2(VAR_6->dwEpCtx0);
 if (VAR_10 == 0)
  return (VAR_4);

 if (VAR_10 > VAR_0)
  return (VAR_1);

 if (FUNC_1(VAR_6->dwEpCtx0) == 0) {
  FUNC_0(("pci_xhci: find_stream; LSA bit not set\r\n"));
  return (VAR_1);
 }


 if (VAR_7 > VAR_10)
  return (VAR_2);

 VAR_9 = FUNC_3(VAR_5, VAR_6->qwEpCtx2 & ~0xFUL) + VAR_7;
 if (!FUNC_4(VAR_9->qwSctx0))
  return (VAR_2);

 *VAR_8 = VAR_9;

 return (VAR_3);
}
