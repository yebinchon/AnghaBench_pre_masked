
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_5__ {unsigned long sh_addr; int sh_size; int sh_name; } ;
struct TYPE_4__ {int st_shndx; int st_value; int st_name; } ;
typedef TYPE_1__ Elf_Sym ;
typedef TYPE_2__ Elf_Shdr ;






 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_3(Elf_Shdr *VAR_0,
       unsigned int VAR_1,
       const char *VAR_2,
       const char *VAR_3,
       unsigned int VAR_4, struct module *VAR_5)
{
 Elf_Sym *VAR_6 = (void *)VAR_0[VAR_1].sh_addr;
 unsigned long VAR_7, VAR_8 = 0;
 unsigned int VAR_9, VAR_10 = VAR_0[VAR_1].sh_size / sizeof(Elf_Sym);
 int VAR_11;


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (FUNC_2(VAR_3 + VAR_0[VAR_9].sh_name, ".bss", 4) == 0) {
   VAR_8 = VAR_0[VAR_9].sh_addr;
   break;
  }
 }

 for (VAR_9 = 1; VAR_9 < VAR_10; VAR_9++) {
  switch (VAR_6[VAR_9].st_shndx) {
  case 130:




   VAR_11 = VAR_6[VAR_9].st_value;
   VAR_6[VAR_9].st_value = VAR_8;

   VAR_8 += VAR_11;
   break;

  case 131:

   break;

  case 128:

   break;

  case 129:
   FUNC_0("simplify_symbols: ignoring SHN_MIPS_SCOMMON symbol <%s> st_shndx %d\n",
     VAR_2 + VAR_6[VAR_9].st_name, VAR_6[VAR_9].st_shndx);

   break;

  default:
   VAR_7 = VAR_0[VAR_6[VAR_9].st_shndx].sh_addr;

   if (FUNC_2(VAR_2 + VAR_6[VAR_9].st_name, "_gp", 3) == 0)
    FUNC_1(VAR_7, VAR_6[VAR_9].st_value);

   VAR_6[VAR_9].st_value += VAR_7;
   break;
  }
 }
}
