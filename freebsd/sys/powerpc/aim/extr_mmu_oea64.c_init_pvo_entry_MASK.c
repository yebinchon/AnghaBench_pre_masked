
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint64_t ;
struct TYPE_2__ {int slot; } ;
struct pvo_entry {int pvo_vaddr; int pvo_vpn; TYPE_1__ pvo_pte; int pvo_pmap; } ;
typedef int pmap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct pvo_entry *VAR_8, pmap_t VAR_9, vm_offset_t VAR_10)
{
 uint64_t VAR_11;
 uint64_t VAR_12;
 int VAR_13;

 FUNC_0(VAR_9, VAR_3);

 VAR_8->pvo_pmap = VAR_9;
 VAR_10 &= ~VAR_2;
 VAR_8->pvo_vaddr |= VAR_10;
 VAR_11 = FUNC_1(VAR_9, VAR_10);
 VAR_8->pvo_vpn = (uint64_t)((VAR_10 & VAR_0) >> VAR_1)
     | (VAR_11 << 16);

 VAR_13 = (VAR_8->pvo_vaddr & VAR_4) ? VAR_6 :
     VAR_1;
 VAR_12 = (VAR_11 & VAR_5) ^ (((uint64_t)VAR_10 & VAR_0) >> VAR_13);
 VAR_8->pvo_pte.slot = (VAR_12 & VAR_7) << 3;
}
