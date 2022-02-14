
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int slot; } ;
struct pvo_entry {int pvo_vpn; TYPE_1__ pvo_pte; } ;
struct lpte {int pte_hi; int pte_lo; } ;
typedef int mmu_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int*,int*,int *) ;

__attribute__((used)) static int64_t
FUNC_1(mmu_t VAR_7, struct pvo_entry *VAR_8)
{
 struct lpte VAR_9;
 uint64_t VAR_10;

 __asm __volatile("ptesync");
 FUNC_0(VAR_2, 0, VAR_8->pvo_pte.slot, 0, 0, &VAR_9.pte_hi,
     &VAR_9.pte_lo, &VAR_10);
 if ((VAR_9.pte_hi & VAR_3) !=
     ((VAR_8->pvo_vpn >> (VAR_0 - VAR_1)) &
     VAR_3))
  return (-1);
 if (!(VAR_9.pte_hi & VAR_6))
  return (-1);

 return (VAR_9.pte_lo & (VAR_4 | VAR_5));
}
