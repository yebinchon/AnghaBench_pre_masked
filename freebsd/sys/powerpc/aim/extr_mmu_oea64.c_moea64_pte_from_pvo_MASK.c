
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prot; int pa; } ;
struct pvo_entry {int pvo_vpn; int pvo_vaddr; TYPE_1__ pvo_pte; } ;
struct lpte {int pte_hi; int pte_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void
FUNC_0(const struct pvo_entry *VAR_15, struct lpte *VAR_16)
{

 VAR_16->pte_hi = (VAR_15->pvo_vpn >> (VAR_0 - VAR_1)) &
     VAR_2;
 VAR_16->pte_hi |= VAR_8;

 if (VAR_15->pvo_vaddr & VAR_11)
  VAR_16->pte_hi |= VAR_3;
 if (VAR_15->pvo_vaddr & VAR_12)
  VAR_16->pte_hi |= VAR_9;
 if (VAR_15->pvo_vaddr & VAR_10)
  VAR_16->pte_hi |= VAR_6;

 VAR_16->pte_lo = VAR_15->pvo_pte.pa;
 if (VAR_15->pvo_pte.prot & VAR_14)
  VAR_16->pte_lo |= VAR_5;
 else
  VAR_16->pte_lo |= VAR_4;

 if (!(VAR_15->pvo_pte.prot & VAR_13))
  VAR_16->pte_lo |= VAR_7;
}
