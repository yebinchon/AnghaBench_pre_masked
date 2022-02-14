
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct vmctx {int dummy; } ;
struct TYPE_3__ {int pba_offset; int pba_size; int table_offset; int table_count; scalar_t__ enabled; struct msix_table_entry* table; int * pba_page_offset; int * pba_page; } ;
struct pci_devinst {TYPE_1__ pi_msix; } ;
struct TYPE_4__ {int pc_func; int pc_dev; int pc_bus; } ;
struct passthru_softc {TYPE_2__ psc_sel; struct pci_devinst* psc_pi; } ;
struct msix_table_entry {int vector_control; int msg_data; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vmctx*,int,int ,int ,int ,int,int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct vmctx *VAR_2, int VAR_3, struct passthru_softc *VAR_4,
   uint64_t VAR_5, int VAR_6, uint64_t VAR_7)
{
 struct pci_devinst *VAR_8;
 struct msix_table_entry *VAR_9;
 uint8_t *VAR_10;
 uint16_t *VAR_11;
 uint32_t *VAR_12;
 uint64_t *VAR_13;
 size_t VAR_14;
 uint32_t VAR_15;
 int VAR_16;

 VAR_8 = VAR_4->psc_pi;
 if (VAR_8->pi_msix.pba_page != ((void*)0) && VAR_5 >= VAR_8->pi_msix.pba_offset &&
     VAR_5 < VAR_8->pi_msix.pba_offset + VAR_8->pi_msix.pba_size) {
  switch(VAR_6) {
  case 1:
   VAR_10 = (uint8_t *)(VAR_8->pi_msix.pba_page + VAR_5 -
       VAR_8->pi_msix.pba_page_offset);
   *VAR_10 = VAR_7;
   break;
  case 2:
   VAR_11 = (uint16_t *)(VAR_8->pi_msix.pba_page + VAR_5 -
       VAR_8->pi_msix.pba_page_offset);
   *VAR_11 = VAR_7;
   break;
  case 4:
   VAR_12 = (uint32_t *)(VAR_8->pi_msix.pba_page + VAR_5 -
       VAR_8->pi_msix.pba_page_offset);
   *VAR_12 = VAR_7;
   break;
  case 8:
   VAR_13 = (uint64_t *)(VAR_8->pi_msix.pba_page + VAR_5 -
       VAR_8->pi_msix.pba_page_offset);
   *VAR_13 = VAR_7;
   break;
  default:
   break;
  }
  return;
 }

 if (VAR_5 < VAR_8->pi_msix.table_offset)
  return;

 VAR_5 -= VAR_8->pi_msix.table_offset;
 VAR_16 = VAR_5 / VAR_0;
 if (VAR_16 >= VAR_8->pi_msix.table_count)
  return;

 VAR_9 = &VAR_8->pi_msix.table[VAR_16];
 VAR_14 = VAR_5 % VAR_0;


 FUNC_0(VAR_6 == 4);
 FUNC_0(VAR_14 % 4 == 0);

 VAR_15 = VAR_9->vector_control;
 VAR_12 = (uint32_t *)((void *)VAR_9 + VAR_14);
 *VAR_12 = VAR_7;

 if (VAR_8->pi_msix.enabled) {

  if ((VAR_9->vector_control & VAR_1) == 0 ||
      (VAR_15 & VAR_1) == 0) {
   (void)FUNC_1(VAR_2, VAR_3,
       VAR_4->psc_sel.pc_bus, VAR_4->psc_sel.pc_dev,
       VAR_4->psc_sel.pc_func, VAR_16, VAR_9->addr,
       VAR_9->msg_data, VAR_9->vector_control);
  }
 }
}
