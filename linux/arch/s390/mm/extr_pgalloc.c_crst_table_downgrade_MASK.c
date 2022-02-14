
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ asce_limit; int asce; } ;
struct mm_struct {int * pgd; TYPE_1__ context; } ;
typedef int pgd_t ;
struct TYPE_4__ {struct mm_struct* active_mm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct mm_struct*,unsigned long*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mm_struct*) ;

void FUNC_8(struct mm_struct *VAR_7)
{
 pgd_t *VAR_8;


 FUNC_0(VAR_7->context.asce_limit != VAR_3);

 if (VAR_6->active_mm == VAR_7) {
  FUNC_3();
  FUNC_2(VAR_7);
 }

 VAR_8 = VAR_7->pgd;
 FUNC_5(VAR_7);
 VAR_7->pgd = (pgd_t *) (FUNC_6(*VAR_8) & VAR_5);
 VAR_7->context.asce_limit = VAR_4;
 VAR_7->context.asce = FUNC_1(VAR_7->pgd) | VAR_0 |
      VAR_2 | VAR_1;
 FUNC_4(VAR_7, (unsigned long *) VAR_8);

 if (VAR_6->active_mm == VAR_7)
  FUNC_7(VAR_7);
}
