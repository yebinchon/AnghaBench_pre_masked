
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Elf_Rela ;


 scalar_t__ FUNC_0 (int const*,int const*) ;

__attribute__((used)) static bool FUNC_1(const Elf_Rela *VAR_0, int VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (FUNC_0(&VAR_0[VAR_2], &VAR_0[VAR_1]))
   return 1;
 }
 return 0;
}
