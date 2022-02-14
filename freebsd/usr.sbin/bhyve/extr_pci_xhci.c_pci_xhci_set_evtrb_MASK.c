
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct xhci_trb {int qwTrb0; int dwTrb3; int dwTrb2; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct xhci_trb *VAR_0, uint64_t VAR_1, uint32_t VAR_2,
    uint32_t VAR_3)
{
 VAR_0->qwTrb0 = VAR_1 << 24;
 VAR_0->dwTrb2 = FUNC_0(VAR_2);
 VAR_0->dwTrb3 = FUNC_1(VAR_3);
}
