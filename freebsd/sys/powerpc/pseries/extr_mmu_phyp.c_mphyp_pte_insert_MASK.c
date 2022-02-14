
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long uint64_t ;
struct rm_priotracker {int dummy; } ;
struct TYPE_2__ {unsigned long slot; } ;
struct pvo_entry {TYPE_1__ pvo_pte; int pvo_vaddr; int pvo_pmap; } ;
struct lpte {int pte_hi; long pte_lo; } ;
typedef int mmu_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pvo_entry*,struct lpte*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 long FUNC_4 (long,struct lpte*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int ,int ,long,int,long,long*,long*,long*) ;
 int FUNC_7 (int *,struct rm_priotracker*) ;
 int FUNC_8 (int *,struct rm_priotracker*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(mmu_t VAR_16, struct pvo_entry *VAR_17)
{
 struct rm_priotracker VAR_18;
 int64_t VAR_19;
 struct lpte VAR_20, VAR_21;
 uint64_t VAR_22, VAR_23, VAR_24;

 FUNC_1(VAR_17->pvo_pmap, VAR_10);


 FUNC_3(VAR_17, &VAR_21);
 VAR_20.pte_hi = 0;


 FUNC_7(&VAR_15, &VAR_18);




 VAR_17->pvo_pte.slot &= ~7UL;
 VAR_19 = FUNC_6(VAR_1, 0, VAR_17->pvo_pte.slot, VAR_21.pte_hi,
     VAR_21.pte_lo, &VAR_22, &VAR_20.pte_lo, &VAR_23);
 if (VAR_19 == VAR_6) {
  FUNC_8(&VAR_15, &VAR_18);
  VAR_17->pvo_pte.slot = VAR_22;
  return (0);
 }
 FUNC_0(VAR_19 == VAR_4, ("Page insertion error: %ld "
     "(ptegidx: %#zx/%#lx, PTE %#lx/%#lx", VAR_19, VAR_17->pvo_pte.slot,
     VAR_13, VAR_21.pte_hi, VAR_21.pte_lo));




 VAR_17->pvo_vaddr ^= VAR_11;
 VAR_21.pte_hi ^= VAR_8;
 VAR_17->pvo_pte.slot ^= (VAR_14 << 3);

 VAR_19 = FUNC_6(VAR_1, 0, VAR_17->pvo_pte.slot,
     VAR_21.pte_hi, VAR_21.pte_lo, &VAR_22, &VAR_20.pte_lo, &VAR_23);
 if (VAR_19 == VAR_6) {
  FUNC_8(&VAR_15, &VAR_18);
  VAR_17->pvo_pte.slot = VAR_22;
  return (0);
 }
 FUNC_0(VAR_19 == VAR_4, ("Secondary page insertion error: %ld",
     VAR_19));






 FUNC_8(&VAR_15, &VAR_18);
 FUNC_9(&VAR_15);

 VAR_22 = FUNC_4(VAR_17->pvo_pte.slot, &VAR_20);
 if (VAR_22 == -1L) {

  VAR_17->pvo_vaddr ^= VAR_11;
  VAR_21.pte_hi ^= VAR_8;
  VAR_17->pvo_pte.slot ^= (VAR_14 << 3);
  VAR_22 = FUNC_4(VAR_17->pvo_pte.slot, &VAR_20);
 }

 if (VAR_22 == -1L) {

  FUNC_10(&VAR_15);
  FUNC_5("mphyp_pte_insert: overflow");
  return (-1);
 }


 if (VAR_20.pte_hi & VAR_9) {
  VAR_19 = FUNC_6(VAR_5, VAR_0, VAR_22,
      VAR_20.pte_hi & VAR_7, 0, &VAR_23, &VAR_24,
      &VAR_23);
  FUNC_2(VAR_12++);
  FUNC_0(VAR_19 == VAR_6 || VAR_19 == VAR_3,
      ("Error evicting page: %d", (int)VAR_19));
 }




 VAR_19 = FUNC_6(VAR_1, VAR_2, VAR_22, VAR_21.pte_hi,
     VAR_21.pte_lo, &VAR_22, &VAR_20.pte_lo, &VAR_23);
 FUNC_10(&VAR_15);

 VAR_17->pvo_pte.slot = VAR_22;
 if (VAR_19 == VAR_6)
  return (0);

 FUNC_5("Page replacement error: %ld", VAR_19);
 return (VAR_19);
}
