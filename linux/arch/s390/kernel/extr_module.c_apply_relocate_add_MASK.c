
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_3__ {size_t sh_info; int sh_size; scalar_t__ sh_addr; } ;
typedef int Elf_Sym ;
typedef TYPE_1__ Elf_Shdr ;
typedef int Elf_Rela ;
typedef scalar_t__ Elf_Addr ;


 int FUNC_0 (char*,unsigned int,size_t) ;
 int FUNC_1 (int *,scalar_t__,int *,char const*,struct module*) ;

int FUNC_2(Elf_Shdr *VAR_0, const char *VAR_1,
         unsigned int VAR_2, unsigned int VAR_3,
         struct module *VAR_4)
{
 Elf_Addr VAR_5;
 Elf_Sym *VAR_6;
 Elf_Rela *VAR_7;
 unsigned long VAR_8, VAR_9;
 int VAR_10;

 FUNC_0("Applying relocate section %u to %u\n",
        VAR_3, VAR_0[VAR_3].sh_info);
 VAR_5 = VAR_0[VAR_0[VAR_3].sh_info].sh_addr;
 VAR_6 = (Elf_Sym *) VAR_0[VAR_2].sh_addr;
 VAR_7 = (Elf_Rela *) VAR_0[VAR_3].sh_addr;
 VAR_9 = VAR_0[VAR_3].sh_size / sizeof(Elf_Rela);

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++, VAR_7++) {
  VAR_10 = FUNC_1(VAR_7, VAR_5, VAR_6, VAR_1, VAR_4);
  if (VAR_10)
   return VAR_10;
 }
 return 0;
}
