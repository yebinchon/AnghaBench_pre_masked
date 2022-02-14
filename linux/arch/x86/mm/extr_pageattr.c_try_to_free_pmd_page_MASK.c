
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pmd_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(pmd_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (!FUNC_1(VAR_1[VAR_2]))
   return 0;

 FUNC_0((unsigned long)VAR_1);
 return 1;
}
