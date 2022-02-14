
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int slot; } ;
struct pvo_entry {TYPE_1__ pvo_pte; } ;
struct lpte {int pte_lo; int pte_hi; } ;
typedef int mmu_t ;
typedef int int64_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct pvo_entry*,struct lpte*) ;
 int FUNC_2 (struct pvo_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int64_t
FUNC_5(mmu_t VAR_2, struct pvo_entry *VAR_3, uint64_t VAR_4)
{
 int64_t VAR_5;
 struct lpte VAR_6;

 FUNC_3(&VAR_0);

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 < 0) {
  FUNC_4(&VAR_0);
  return (VAR_5);
 }

 FUNC_1(VAR_3, &VAR_6);

 VAR_6.pte_lo |= VAR_5;
 VAR_6.pte_lo &= ~VAR_4;

 FUNC_0(VAR_1, VAR_3->pvo_pte.slot, VAR_6.pte_hi,
     VAR_6.pte_lo);
 FUNC_4(&VAR_0);

 return (VAR_5);
}
