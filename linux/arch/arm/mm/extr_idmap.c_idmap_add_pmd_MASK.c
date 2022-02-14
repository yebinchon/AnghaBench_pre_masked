
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(pud_t *VAR_2, unsigned long VAR_3, unsigned long VAR_4,
 unsigned long VAR_5)
{
 pmd_t *VAR_6 = FUNC_2(VAR_2, VAR_3);

 VAR_3 = (VAR_3 & VAR_0) | VAR_5;
 VAR_6[0] = FUNC_0(VAR_3);
 VAR_3 += VAR_1;
 VAR_6[1] = FUNC_0(VAR_3);
 FUNC_1(VAR_6);
}
