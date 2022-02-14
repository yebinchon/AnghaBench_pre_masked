
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pgd_t ;


 int FUNC_0 (int *,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int * FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(pgd_t *VAR_0, unsigned long VAR_1, unsigned long VAR_2,
 unsigned long VAR_3)
{
 pud_t *VAR_4 = FUNC_2(VAR_0, VAR_1);
 unsigned long VAR_5;

 do {
  VAR_5 = FUNC_1(VAR_1, VAR_2);
  FUNC_0(VAR_4, VAR_1, VAR_5, VAR_3);
 } while (VAR_4++, VAR_1 = VAR_5, VAR_1 != VAR_2);
}
