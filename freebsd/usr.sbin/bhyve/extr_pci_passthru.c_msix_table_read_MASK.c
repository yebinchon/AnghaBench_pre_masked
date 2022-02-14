
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int pba_offset; int pba_size; int table_offset; int table_count; struct msix_table_entry* table; int * pba_page_offset; int * pba_page; } ;
struct pci_devinst {TYPE_1__ pi_msix; } ;
struct passthru_softc {struct pci_devinst* psc_pi; } ;
struct msix_table_entry {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static uint64_t
FUNC_0(struct passthru_softc *VAR_1, uint64_t VAR_2, int VAR_3)
{
 struct pci_devinst *VAR_4;
 struct msix_table_entry *VAR_5;
 uint8_t *VAR_6;
 uint16_t *VAR_7;
 uint32_t *VAR_8;
 uint64_t *VAR_9;
 uint64_t VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_4 = VAR_1->psc_pi;
 if (VAR_4->pi_msix.pba_page != ((void*)0) && VAR_2 >= VAR_4->pi_msix.pba_offset &&
     VAR_2 < VAR_4->pi_msix.pba_offset + VAR_4->pi_msix.pba_size) {
  switch(VAR_3) {
  case 1:
   VAR_6 = (uint8_t *)(VAR_4->pi_msix.pba_page + VAR_2 -
       VAR_4->pi_msix.pba_page_offset);
   VAR_10 = *VAR_6;
   break;
  case 2:
   VAR_7 = (uint16_t *)(VAR_4->pi_msix.pba_page + VAR_2 -
       VAR_4->pi_msix.pba_page_offset);
   VAR_10 = *VAR_7;
   break;
  case 4:
   VAR_8 = (uint32_t *)(VAR_4->pi_msix.pba_page + VAR_2 -
       VAR_4->pi_msix.pba_page_offset);
   VAR_10 = *VAR_8;
   break;
  case 8:
   VAR_9 = (uint64_t *)(VAR_4->pi_msix.pba_page + VAR_2 -
       VAR_4->pi_msix.pba_page_offset);
   VAR_10 = *VAR_9;
   break;
  default:
   return (-1);
  }
  return (VAR_10);
 }

 if (VAR_2 < VAR_4->pi_msix.table_offset)
  return (-1);

 VAR_2 -= VAR_4->pi_msix.table_offset;
 VAR_12 = VAR_2 / VAR_0;
 if (VAR_12 >= VAR_4->pi_msix.table_count)
  return (-1);

 VAR_5 = &VAR_4->pi_msix.table[VAR_12];
 VAR_11 = VAR_2 % VAR_0;

 switch(VAR_3) {
 case 1:
  VAR_6 = (uint8_t *)((void *)VAR_5 + VAR_11);
  VAR_10 = *VAR_6;
  break;
 case 2:
  VAR_7 = (uint16_t *)((void *)VAR_5 + VAR_11);
  VAR_10 = *VAR_7;
  break;
 case 4:
  VAR_8 = (uint32_t *)((void *)VAR_5 + VAR_11);
  VAR_10 = *VAR_8;
  break;
 case 8:
  VAR_9 = (uint64_t *)((void *)VAR_5 + VAR_11);
  VAR_10 = *VAR_9;
  break;
 default:
  return (-1);
 }

 return (VAR_10);
}
