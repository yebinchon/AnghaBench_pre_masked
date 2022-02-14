
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_mm; } ;
typedef int pud_t ;
struct TYPE_6__ {unsigned long pte_high; int pte_low; } ;
typedef TYPE_1__ pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_7__ {scalar_t__ active_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_4__* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 () ;
 int * FUNC_7 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int *,unsigned long) ;
 TYPE_1__* FUNC_10 (int *,unsigned long) ;
 unsigned long FUNC_11 (unsigned long) ;
 unsigned long FUNC_12 (TYPE_1__) ;
 int * FUNC_13 (int *,unsigned long) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (unsigned long) ;
 int FUNC_22 (unsigned long) ;
 int FUNC_23 (unsigned long) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int) ;

void FUNC_27(struct vm_area_struct * VAR_9, unsigned long VAR_10, pte_t VAR_11)
{
 unsigned long VAR_12;
 pgd_t *VAR_13;
 pud_t *VAR_14;
 pmd_t *VAR_15;
 pte_t *VAR_16;
 int VAR_17, VAR_18;




 if (VAR_7->active_mm != VAR_9->vm_mm)
  return;

 FUNC_5(VAR_12);

 FUNC_3();
 VAR_10 &= (VAR_1 << 1);
 if (VAR_5) {
  FUNC_21(VAR_10);
 } else {
  VAR_18 = FUNC_14() & FUNC_0(&VAR_8);
  FUNC_21(VAR_10 | VAR_18);
 }
 VAR_13 = FUNC_7(VAR_9->vm_mm, VAR_10);
 FUNC_6();
 FUNC_16();
 FUNC_17();
 VAR_14 = FUNC_13(VAR_13, VAR_10);
 VAR_15 = FUNC_9(VAR_14, VAR_10);
 VAR_17 = FUNC_15();
 {
  VAR_16 = FUNC_10(VAR_15, VAR_10);
  FUNC_22(FUNC_11(FUNC_12(*VAR_16++)));
  FUNC_23(FUNC_11(FUNC_12(*VAR_16)));

  FUNC_6();
  if (VAR_17 < 0)
   FUNC_19();
  else
   FUNC_18();
 }
 FUNC_20();
 FUNC_2();
 FUNC_1(VAR_9);
 FUNC_4(VAR_12);
}
