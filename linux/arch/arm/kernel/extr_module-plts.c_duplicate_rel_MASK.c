
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Elf32_Rel ;
typedef int Elf32_Addr ;


 scalar_t__ FUNC_0 (int const*,int const*) ;
 scalar_t__ FUNC_1 (int ,int const*) ;

__attribute__((used)) static bool FUNC_2(Elf32_Addr VAR_0, const Elf32_Rel *VAR_1, int VAR_2)
{
 const Elf32_Rel *VAR_3;






 if (!VAR_2)
  return 0;

 VAR_3 = VAR_1 + VAR_2 - 1;
 return FUNC_0(VAR_1 + VAR_2, VAR_3) == 0 &&
        FUNC_1(VAR_0, VAR_3);
}
