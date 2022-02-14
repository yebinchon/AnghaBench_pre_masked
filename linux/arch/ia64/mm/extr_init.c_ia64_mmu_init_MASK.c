
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long unimpl_va_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (int) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__* VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

void FUNC_7(void *VAR_8)
{
 unsigned long VAR_9, VAR_10;
 extern void FUNC_8(void);
 VAR_10 = FUNC_1(~(VAR_4->unimpl_va_mask | (7UL << 61)));

 if (VAR_10 < 51 || VAR_10 > 61)
  FUNC_6("CPU has bogus IMPL_VA_MSB value of %lu!\n", VAR_10 - 1);






 if (((3*(VAR_2 - 3) + VAR_2) - VAR_2 > (VAR_10 - VAR_2 + 3) - 3) ||
     ((3*(VAR_2 - 3) + VAR_2) > VAR_10 - 1))
  FUNC_6("Cannot build a big enough virtual-linear page table"
        " to cover mapped address space.\n"
        " Try using a smaller page size.\n");



 VAR_9 = (1ULL << (61)) - (1ULL << ((VAR_10 - VAR_2 + 3)));







 FUNC_2(VAR_9 | (0 << 8) | ((VAR_10 - VAR_2 + 3) << 2) | 1);

 FUNC_5();





}
