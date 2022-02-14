
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_2__ {int * pgd; } ;


 unsigned long VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (unsigned long,unsigned int,struct pt_regs*) ;
 int FUNC_2 (unsigned long,unsigned int,struct pt_regs*) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_1 ;
 unsigned int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_10(unsigned long VAR_2, unsigned int VAR_3, struct pt_regs *VAR_4)
{
 unsigned int VAR_5;
 pgd_t *VAR_6, *VAR_7;
 pmd_t *VAR_8, *VAR_9;

 if (VAR_2 < VAR_0)
  return FUNC_2(VAR_2, VAR_3, VAR_4);

 if (FUNC_9(VAR_4))
  goto bad_area;

 VAR_5 = FUNC_4(VAR_2);

 VAR_6 = FUNC_0() + VAR_5;
 VAR_7 = VAR_1.pgd + VAR_5;

 if (FUNC_5(*VAR_7))
  goto bad_area;

 VAR_9 = FUNC_7((pud_t *) VAR_7, VAR_2);
 VAR_8 = FUNC_7((pud_t *) VAR_6, VAR_2);

 if (FUNC_6(*VAR_9))
  goto bad_area;

 FUNC_8(VAR_8, *VAR_9);
 FUNC_3(VAR_8);
 return 0;

bad_area:
 FUNC_1(VAR_2, VAR_3, VAR_4);
 return 0;
}
