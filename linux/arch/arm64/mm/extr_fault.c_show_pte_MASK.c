
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct mm_struct VAR_3 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (struct mm_struct*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (struct mm_struct*,unsigned long) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,...) ;
 int * FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int * FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_21(unsigned long VAR_5)
{
 struct mm_struct *VAR_6;
 pgd_t *VAR_7;
 pgd_t VAR_8;

 if (FUNC_1(VAR_5)) {

  VAR_6 = VAR_2->active_mm;
  if (VAR_6 == &VAR_3) {
   FUNC_12("[%016lx] user address but active_mm is swapper\n",
     VAR_5);
   return;
  }
 } else if (FUNC_2(VAR_5)) {

  VAR_6 = &VAR_3;
 } else {
  FUNC_12("[%016lx] address between user and kernel address ranges\n",
    VAR_5);
  return;
 }

 FUNC_12("%s pgtable: %luk pages, %llu-bit VAs, pgdp=%016lx\n",
   VAR_6 == &VAR_3 ? "swapper" : "user", VAR_0 / VAR_1,
   VAR_4, FUNC_3(VAR_6));
 VAR_7 = FUNC_6(VAR_6, VAR_5);
 VAR_8 = FUNC_0(*VAR_7);
 FUNC_12("[%016lx] pgd=%016llx", VAR_5, FUNC_7(VAR_8));

 do {
  pud_t *VAR_9, VAR_10;
  pmd_t *VAR_11, VAR_12;
  pte_t *VAR_13, VAR_14;

  if (FUNC_5(VAR_8) || FUNC_4(VAR_8))
   break;

  VAR_9 = FUNC_19(VAR_7, VAR_5);
  VAR_10 = FUNC_0(*VAR_9);
  FUNC_13(", pud=%016llx", FUNC_20(VAR_10));
  if (FUNC_18(VAR_10) || FUNC_17(VAR_10))
   break;

  VAR_11 = FUNC_10(VAR_9, VAR_5);
  VAR_12 = FUNC_0(*VAR_11);
  FUNC_13(", pmd=%016llx", FUNC_11(VAR_12));
  if (FUNC_9(VAR_12) || FUNC_8(VAR_12))
   break;

  VAR_13 = FUNC_14(VAR_11, VAR_5);
  VAR_14 = FUNC_0(*VAR_13);
  FUNC_13(", pte=%016llx", FUNC_16(VAR_14));
  FUNC_15(VAR_13);
 } while(0);

 FUNC_13("\n");
}
