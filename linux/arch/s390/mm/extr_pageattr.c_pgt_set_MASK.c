
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
struct TYPE_2__ {int kernel_asce; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_1 (unsigned int*,unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned long *VAR_6, unsigned long VAR_7, unsigned long VAR_8,
      unsigned long VAR_9)
{
 unsigned long VAR_10, VAR_11;

 VAR_11 = 0;
 if (VAR_0) {
  switch (VAR_9) {
  case 129:
   VAR_11 = ~(VAR_4 * sizeof(pud_t) - 1);
   break;
  case 128:
   VAR_11 = ~(VAR_2 * sizeof(pmd_t) - 1);
   break;
  case 130:
   VAR_11 = ~(VAR_3 * sizeof(pte_t) - 1);
   break;
  }
  VAR_10 = (unsigned long)VAR_6 & VAR_11;
  FUNC_0(*VAR_6, VAR_7, VAR_10, VAR_9, VAR_8, VAR_5.kernel_asce);
 } else if (VAR_1) {
  FUNC_2(VAR_6, *VAR_6, VAR_7);
 } else {
  FUNC_1((unsigned int *)VAR_6 + 1, *VAR_6, VAR_7);
 }
}
