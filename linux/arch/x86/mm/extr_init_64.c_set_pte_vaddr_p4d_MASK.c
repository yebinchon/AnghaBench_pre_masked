
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int p4d_t ;


 int FUNC_0 (int *,unsigned long,int ) ;
 int * FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (unsigned long) ;

void FUNC_3(p4d_t *VAR_0, unsigned long VAR_1, pte_t VAR_2)
{
 p4d_t *VAR_3 = VAR_0 + FUNC_2(VAR_1);
 pud_t *VAR_4 = FUNC_1(VAR_3, VAR_1);

 FUNC_0(VAR_4, VAR_1, VAR_2);
}
