
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(pte_t *VAR_0, pte_t VAR_1, int VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_1) != FUNC_2(FUNC_0(VAR_0)))
  return 1;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  pte_t VAR_4 = FUNC_0(VAR_0 + VAR_3);

  if (FUNC_1(VAR_1) != FUNC_1(VAR_4))
   return 1;

  if (FUNC_3(VAR_1) != FUNC_3(VAR_4))
   return 1;
 }

 return 0;
}
