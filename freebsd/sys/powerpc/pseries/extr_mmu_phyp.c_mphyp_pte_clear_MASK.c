
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct rm_priotracker {int dummy; } ;
struct TYPE_2__ {int slot; } ;
struct pvo_entry {TYPE_1__ pvo_pte; int pvo_pmap; } ;
typedef int mmu_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,struct pvo_entry*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int*,int*,int*) ;
 int FUNC_4 (int *,struct rm_priotracker*) ;
 int FUNC_5 (int *,struct rm_priotracker*) ;

__attribute__((used)) static int64_t
FUNC_6(mmu_t VAR_8, struct pvo_entry *VAR_9, uint64_t VAR_10)
{
 struct rm_priotracker VAR_11;
 int64_t VAR_12;
 uint64_t VAR_13, VAR_14;
 int VAR_15;
 FUNC_1(VAR_9->pvo_pmap, VAR_5);
 FUNC_4(&VAR_7, &VAR_11);

 VAR_12 = FUNC_2(VAR_8, VAR_9);
 if (VAR_12 < 0) {
  FUNC_5(&VAR_7, &VAR_11);
  return (VAR_12);
 }

 if (VAR_6) {





  FUNC_5(&VAR_7, &VAR_11);
  return (VAR_12 & ~VAR_4);
 }

 if (VAR_10 & VAR_3) {
  VAR_15 = FUNC_3(VAR_0, 0, VAR_9->pvo_pte.slot, 0, 0,
      &VAR_13, &VAR_14, &VAR_14);
  FUNC_0(VAR_15 == VAR_2,
      ("Error clearing page change bit: %d", VAR_15));
  VAR_12 |= (VAR_13 & VAR_3);
 }
 if (VAR_10 & VAR_4) {
  VAR_15 = FUNC_3(VAR_1, 0, VAR_9->pvo_pte.slot, 0, 0,
      &VAR_13, &VAR_14, &VAR_14);
  FUNC_0(VAR_15 == VAR_2,
      ("Error clearing page reference bit: %d", VAR_15));
  VAR_12 |= (VAR_13 & VAR_4);
 }

 FUNC_5(&VAR_7, &VAR_11);

 return (VAR_12);
}
