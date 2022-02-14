
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int slot; } ;
struct pvo_entry {TYPE_1__ pvo_pte; int pvo_pmap; } ;
struct lpte {int pte_hi; int pte_lo; } ;
typedef int mmu_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pvo_entry*,struct lpte*) ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int ,int,int ,int*,int*,int *) ;

__attribute__((used)) static int64_t
FUNC_5(mmu_t VAR_9, struct pvo_entry *VAR_10)
{
 struct lpte VAR_11;
 uint64_t VAR_12;
 int VAR_13;

 FUNC_1(VAR_10->pvo_pmap, VAR_7);

 FUNC_3(VAR_10, &VAR_11);

 VAR_13 = FUNC_4(VAR_2, VAR_0, VAR_10->pvo_pte.slot,
     VAR_11.pte_hi & VAR_4, 0, &VAR_11.pte_hi, &VAR_11.pte_lo,
     &VAR_12);
 FUNC_0(VAR_13 == VAR_3 || VAR_13 == VAR_1,
     ("Error removing page: %d", VAR_13));

 if (VAR_13 == VAR_1) {
  FUNC_2(VAR_8--);
  return (-1);
 }

 return (VAR_11.pte_lo & (VAR_6 | VAR_5));
}
