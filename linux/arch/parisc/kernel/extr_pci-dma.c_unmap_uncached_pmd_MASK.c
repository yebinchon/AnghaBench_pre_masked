
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_6(pgd_t * VAR_4, unsigned long VAR_5,
  unsigned long VAR_6)
{
 pmd_t * VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9 = VAR_5;

 if (FUNC_3(*VAR_4))
  return;
 if (FUNC_1(*VAR_4)) {
  FUNC_0(*VAR_4);
  FUNC_2(VAR_4);
  return;
 }
 VAR_7 = FUNC_4(VAR_4, VAR_5);
 VAR_5 &= ~VAR_0;
 VAR_8 = VAR_5 + VAR_6;
 if (VAR_8 > VAR_1)
  VAR_8 = VAR_1;
 do {
  FUNC_5(VAR_7, VAR_9, VAR_8 - VAR_5);
  VAR_5 = (VAR_5 + VAR_3) & VAR_2;
  VAR_9 += VAR_3;
  VAR_7++;
 } while (VAR_5 < VAR_8);
}
