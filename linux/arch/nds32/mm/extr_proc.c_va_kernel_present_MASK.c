
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,unsigned long) ;
 int* FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(unsigned long VAR_0)
{
 pmd_t *VAR_1;
 pte_t *VAR_2, VAR_3;

 VAR_1 = FUNC_2(FUNC_0(VAR_0), VAR_0);
 if (!FUNC_1(*VAR_1)) {
  VAR_2 = FUNC_3(VAR_1, VAR_0);
  VAR_3 = *VAR_2;
  if (FUNC_4(VAR_3))
   return VAR_3;
 }
 return 0;
}
