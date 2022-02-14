
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* ftrace_trampoline; } ;
struct module {TYPE_1__ arch; } ;
struct TYPE_8__ {size_t e_shstrndx; int e_shnum; } ;
struct TYPE_7__ {int sh_offset; int sh_name; scalar_t__ sh_addr; int sh_size; } ;
typedef TYPE_2__ Elf_Shdr ;
typedef TYPE_3__ Elf_Ehdr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,int ) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

int FUNC_3(const Elf_Ehdr *VAR_1,
      const Elf_Shdr *VAR_2,
      struct module *VAR_3)
{
 const Elf_Shdr *VAR_4, *VAR_5;
 const char *VAR_6 = (void *)VAR_1 + VAR_2[VAR_1->e_shstrndx].sh_offset;

 for (VAR_4 = VAR_2, VAR_5 = VAR_2 + VAR_1->e_shnum; VAR_4 < VAR_5; VAR_4++) {
  if (FUNC_2(".altinstructions", VAR_6 + VAR_4->sh_name) == 0)
   FUNC_1((void *)VAR_4->sh_addr, VAR_4->sh_size);





 }

 return 0;
}
