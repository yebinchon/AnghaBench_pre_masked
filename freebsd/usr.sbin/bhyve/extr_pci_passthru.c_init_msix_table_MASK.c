
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef size_t uint64_t ;
typedef scalar_t__ uint32_t ;
struct vmctx {int dummy; } ;
struct TYPE_6__ {scalar_t__ table_offset; int table_count; int table_bar; int pba_bar; scalar_t__ pba_offset; scalar_t__ pba_size; scalar_t__ pba_page_offset; int * pba_page; } ;
struct pci_devinst {TYPE_3__ pi_msix; TYPE_2__* pi_bar; } ;
struct TYPE_4__ {int pc_bus; int pc_dev; int pc_func; } ;
struct passthru_softc {TYPE_1__ psc_sel; struct pci_devinst* psc_pi; } ;
struct TYPE_5__ {scalar_t__ addr; size_t size; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int * FUNC_1 (int *,int,int,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct pci_devinst*) ;
 scalar_t__ FUNC_3 (struct pci_devinst*) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (struct vmctx*,int,int,int,scalar_t__,size_t,size_t) ;
 int FUNC_7 (char*,int,int,int) ;

__attribute__((used)) static int
FUNC_8(struct vmctx *VAR_6, struct passthru_softc *VAR_7, uint64_t VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;
 size_t VAR_14, VAR_15;
 uint32_t VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19;
 vm_paddr_t VAR_20;
 struct pci_devinst *VAR_21 = VAR_7->psc_pi;

 FUNC_0(FUNC_3(VAR_21) >= 0 && FUNC_2(VAR_21) >= 0);

 VAR_9 = VAR_7->psc_sel.pc_bus;
 VAR_10 = VAR_7->psc_sel.pc_dev;
 VAR_11 = VAR_7->psc_sel.pc_func;







 VAR_17 = FUNC_4(VAR_21->pi_msix.table_offset, 4096);

 VAR_16 = VAR_21->pi_msix.table_offset - VAR_17;
 VAR_16 += VAR_21->pi_msix.table_count * VAR_2;
 VAR_16 = FUNC_5(VAR_16, 4096);

 VAR_13 = VAR_21->pi_msix.table_bar;
 VAR_20 = VAR_21->pi_bar[VAR_13].addr;
 VAR_15 = VAR_21->pi_bar[VAR_13].size;

 if (VAR_21->pi_msix.pba_bar == VAR_21->pi_msix.table_bar) {
  VAR_19 = VAR_21->pi_msix.pba_offset;
  VAR_18 = VAR_21->pi_msix.pba_size;
  if (VAR_19 >= VAR_17 + VAR_16 ||
      VAR_17 >= VAR_19 + VAR_18) {




   VAR_21->pi_msix.pba_page = ((void*)0);
   VAR_21->pi_msix.pba_page_offset = 0;
  } else {





   if (VAR_19 <= VAR_17)
    VAR_21->pi_msix.pba_page_offset = VAR_17;
   else
    VAR_21->pi_msix.pba_page_offset = VAR_17 +
        VAR_16 - 4096;
   VAR_21->pi_msix.pba_page = FUNC_1(((void*)0), 4096, VAR_3 |
       VAR_4, VAR_1, VAR_5, VAR_20 +
       VAR_21->pi_msix.pba_page_offset);
   if (VAR_21->pi_msix.pba_page == VAR_0) {
    FUNC_7(
       "Failed to map PBA page for MSI-X on %d/%d/%d",
        VAR_9, VAR_10, VAR_11);
    return (-1);
   }
  }
 }


 if (VAR_17 > 0) {
  VAR_14 = VAR_17;
  VAR_12 = FUNC_6(VAR_6, VAR_9, VAR_10, VAR_11, VAR_20, VAR_14, VAR_8);
  if (VAR_12)
   return (VAR_12);

  VAR_8 += VAR_14;
  VAR_20 += VAR_14;
  VAR_15 -= VAR_14;
 }


 VAR_8 += VAR_16;
 VAR_20 += VAR_16;
 VAR_15 -= VAR_16;


 if (VAR_15 > 0) {
  VAR_14 = VAR_15;
  VAR_12 = FUNC_6(VAR_6, VAR_9, VAR_10, VAR_11, VAR_20, VAR_14, VAR_8);
  if (VAR_12)
   return (VAR_12);
 }

 return (0);
}
