
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_6__ {int pte_hi; } ;
struct TYPE_4__ {TYPE_3__ pte; } ;
struct pvo_entry {int pvo_vaddr; TYPE_1__ pvo_pte; } ;
struct pte {int pte_hi; } ;
struct TYPE_5__ {struct pte* pt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pvo_entry*) ;
 int VAR_3 ;
 int FUNC_1 (struct pte*,struct pte*) ;
 struct pvo_entry* FUNC_2 (size_t) ;
 int FUNC_3 (struct pte*,TYPE_3__*,int ) ;
 size_t VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (struct pvo_entry*,size_t) ;
 int VAR_6 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(u_int VAR_7, struct pte *VAR_8)
{
 struct pte *VAR_9;
 struct pvo_entry *VAR_10;
 int VAR_11;
 int VAR_12;
 u_int VAR_13 = VAR_7;

 FUNC_5(&VAR_6, VAR_0);




 for (VAR_9 = VAR_5[VAR_7].pt, VAR_11 = 0; VAR_11 < 8; VAR_11++, VAR_9++) {
  if ((VAR_9->pte_hi & VAR_2) == 0) {
   VAR_8->pte_hi &= ~VAR_1;
   FUNC_1(VAR_9, VAR_8);
   return (VAR_11);
  }
 }




 VAR_7 ^= VAR_4;

 for (VAR_9 = VAR_5[VAR_7].pt, VAR_11 = 0; VAR_11 < 8; VAR_11++, VAR_9++) {
  if ((VAR_9->pte_hi & VAR_2) == 0) {
   VAR_8->pte_hi |= VAR_1;
   FUNC_1(VAR_9, VAR_8);
   return (VAR_11);
  }
 }


 VAR_7 = VAR_13;

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10 == ((void*)0)) {
  VAR_7 ^= VAR_4;
  VAR_10 = FUNC_2(VAR_7);
 }

 if (VAR_10 == ((void*)0)) {
  FUNC_6("moea_pte_insert: overflow");
  return (-1);
 }

 VAR_12 = FUNC_4(VAR_10, VAR_7);

 if (VAR_13 == VAR_7)
  VAR_8->pte_hi &= ~VAR_1;
 else
  VAR_8->pte_hi |= VAR_1;






 VAR_9 = &VAR_5[VAR_12 >> 3].pt[VAR_12 & 7];

 if (VAR_9->pte_hi != VAR_10->pvo_pte.pte.pte_hi)
     FUNC_6("Victim PVO doesn't match PTE! PVO: %8x, PTE: %8x", VAR_10->pvo_pte.pte.pte_hi, VAR_9->pte_hi);




 FUNC_3(VAR_9, &VAR_10->pvo_pte.pte, VAR_10->pvo_vaddr);
 FUNC_0(VAR_10);
 VAR_3++;
 FUNC_1(VAR_9, VAR_8);

 return (VAR_12 & 7);
}
