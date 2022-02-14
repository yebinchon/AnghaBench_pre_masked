
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sh_size; scalar_t__ sh_addr; } ;
struct TYPE_5__ {scalar_t__ st_shndx; int st_name; } ;
typedef TYPE_1__ Elf64_Sym ;
typedef TYPE_2__ Elf64_Shdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static Elf64_Sym *FUNC_1(Elf64_Shdr *VAR_1,
          const char *VAR_2,
          unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;
 Elf64_Sym *VAR_6;

 VAR_6 = (Elf64_Sym *)VAR_1[VAR_3].sh_addr;
 VAR_5 = VAR_1[VAR_3].sh_size / sizeof(Elf64_Sym);

 for (VAR_4 = 1; VAR_4 < VAR_5; VAR_4++) {
  if (VAR_6[VAR_4].st_shndx == VAR_0
      && FUNC_0(VAR_2 + VAR_6[VAR_4].st_name, "TOC.") == 0)
   return &VAR_6[VAR_4];
 }
 return ((void*)0);
}
