
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct module {int name; } ;
struct TYPE_8__ {int e_shnum; } ;
struct TYPE_7__ {scalar_t__ sh_type; size_t sh_link; int sh_size; scalar_t__ sh_addr; } ;
struct TYPE_6__ {scalar_t__ st_shndx; int st_info; } ;
typedef TYPE_1__ Elf_Sym ;
typedef TYPE_2__ Elf_Shdr ;
typedef TYPE_3__ Elf_Ehdr ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,int ) ;

int FUNC_2(Elf_Ehdr *VAR_5,
         Elf_Shdr *VAR_6,
         char *VAR_7,
         struct module *VAR_8)
{
 unsigned int VAR_9;
 Elf_Sym *VAR_10;
 char *VAR_11;
 int VAR_12;

 for (VAR_9 = 0; VAR_6[VAR_9].sh_type != VAR_3; VAR_9++) {
  if (VAR_9 == VAR_5->e_shnum-1) {
   FUNC_1("%s: no symtab found.\n", VAR_8->name);
   return -VAR_0;
  }
 }
 VAR_10 = (Elf_Sym *)VAR_6[VAR_9].sh_addr;
 VAR_11 = (char *)VAR_6[VAR_6[VAR_9].sh_link].sh_addr;

 for (VAR_12 = 1; VAR_12 < VAR_6[VAR_9].sh_size / sizeof(Elf_Sym); VAR_12++) {
  if (VAR_10[VAR_12].st_shndx == VAR_2) {
   if (FUNC_0(VAR_10[VAR_12].st_info) == VAR_4)
    VAR_10[VAR_12].st_shndx = VAR_1;
  }
 }
 return 0;
}
