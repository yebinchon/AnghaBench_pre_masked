
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_6__ {TYPE_1__* mm; } ;
struct TYPE_5__ {int * pgd; } ;
struct TYPE_4__ {int * pgd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__ VAR_3 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(char VAR_4)
{
 unsigned long VAR_5;
 pgd_t *VAR_6;
 pmd_t *VAR_7;
 int VAR_8;

 if (VAR_2->mm && VAR_2->mm->pgd)
  VAR_6 = VAR_2->mm->pgd;
 else
  VAR_6 = VAR_3.pgd;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_5 = (VAR_8 << VAR_0);
  VAR_7 = FUNC_1(VAR_6 + VAR_8, VAR_8 << VAR_0);
  FUNC_2(VAR_7, FUNC_0(VAR_5));
 }
}
