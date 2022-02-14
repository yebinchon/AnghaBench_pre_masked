
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t e_shstrndx; int e_shnum; } ;
struct TYPE_6__ {int sh_offset; int sh_name; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef TYPE_2__ Elf32_Ehdr ;


 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static const Elf_Shdr *FUNC_1(const Elf32_Ehdr *VAR_0,
 const Elf_Shdr *VAR_1, const char *VAR_2)
{
 const Elf_Shdr *VAR_3, *VAR_4;
 const char *VAR_5 = (void *)VAR_0 + VAR_1[VAR_0->e_shstrndx].sh_offset;

 for (VAR_3 = VAR_1, VAR_4 = VAR_1 + VAR_0->e_shnum; VAR_3 < VAR_4; VAR_3++)
  if (FUNC_0(VAR_2, VAR_5 + VAR_3->sh_name) == 0)
   return VAR_3;

 return ((void*)0);
}
