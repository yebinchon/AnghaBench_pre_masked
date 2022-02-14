
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guid_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 int * VAR_0 ;

__attribute__((used)) static bool FUNC_2(const guid_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (FUNC_1(VAR_1, &VAR_0[VAR_2]))
   return 1;
 }

 return 0;
}
