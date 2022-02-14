
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long slot; } ;
struct pvo_entry {TYPE_1__ pvo_pte; int pvo_vaddr; } ;
struct lpte {int pte_hi; } ;
typedef int mmu_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 uintptr_t FUNC_0 (struct lpte*,unsigned long long,int) ;
 int FUNC_1 (struct pvo_entry*,struct lpte*) ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(mmu_t VAR_7, struct pvo_entry *VAR_8)
{
 struct lpte VAR_9;
 uintptr_t VAR_10;


 FUNC_1(VAR_8, &VAR_9);


 FUNC_3(&VAR_5);




 VAR_8->pvo_pte.slot &= ~7ULL;
 VAR_10 = FUNC_0(&VAR_9, VAR_8->pvo_pte.slot,
     VAR_2 | VAR_3 | VAR_1);
 if (VAR_10 != -1) {
  FUNC_4(&VAR_5);
  VAR_8->pvo_pte.slot = VAR_10;
  return (0);
 }




 VAR_8->pvo_vaddr ^= VAR_4;
 VAR_9.pte_hi ^= VAR_0;
 VAR_8->pvo_pte.slot ^= (VAR_6 << 3);
 VAR_10 = FUNC_0(&VAR_9, VAR_8->pvo_pte.slot,
     VAR_2 | VAR_3 | VAR_1);
 if (VAR_10 != -1) {
  FUNC_4(&VAR_5);
  VAR_8->pvo_pte.slot = VAR_10;
  return (0);
 }






 if (!FUNC_5(&VAR_5)) {
  FUNC_4(&VAR_5);
  FUNC_6(&VAR_5);
 }

 VAR_10 = FUNC_0(&VAR_9, VAR_8->pvo_pte.slot,
     VAR_3 | VAR_1);
 if (VAR_10 != -1) {
  FUNC_7(&VAR_5);
  VAR_8->pvo_pte.slot = VAR_10;
  return (0);
 }


 VAR_8->pvo_vaddr ^= VAR_4;
 VAR_9.pte_hi ^= VAR_0;
 VAR_8->pvo_pte.slot ^= (VAR_6 << 3);
 VAR_10 = FUNC_0(&VAR_9, VAR_8->pvo_pte.slot,
     VAR_3 | VAR_1);
 if (VAR_10 != -1) {
  FUNC_7(&VAR_5);
  VAR_8->pvo_pte.slot = VAR_10;
  return (0);
 }


 FUNC_7(&VAR_5);
 FUNC_2("moea64_pte_insert: overflow");
 return (-1);
}
