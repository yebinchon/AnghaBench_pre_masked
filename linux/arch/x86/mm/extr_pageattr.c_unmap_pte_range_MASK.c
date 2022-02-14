
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(pmd_t *VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 pte_t *VAR_4 = FUNC_3(VAR_1, VAR_2);

 while (VAR_2 < VAR_3) {
  FUNC_4(VAR_4, FUNC_0(0));

  VAR_2 += VAR_0;
  VAR_4++;
 }

 if (FUNC_5((pte_t *)FUNC_2(*VAR_1))) {
  FUNC_1(VAR_1);
  return 1;
 }
 return 0;
}
