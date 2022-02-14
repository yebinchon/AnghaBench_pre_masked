
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ppc_plt_entry {int dummy; } ;
struct TYPE_6__ {unsigned int e_shnum; } ;
struct TYPE_5__ {int sh_name; scalar_t__ sh_type; int sh_offset; int sh_size; } ;
typedef TYPE_1__ Elf32_Shdr ;
typedef int Elf32_Rela ;
typedef TYPE_2__ Elf32_Ehdr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (char*,void*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void*,int,int,int ,int ) ;
 int * FUNC_3 (char const*,char*) ;

__attribute__((used)) static unsigned long FUNC_4(const Elf32_Ehdr *VAR_3,
      const Elf32_Shdr *VAR_4,
      const char *VAR_5,
      int VAR_6)
{
 unsigned long VAR_7 = 0;
 unsigned VAR_8;



 for (VAR_8 = 1; VAR_8 < VAR_3->e_shnum; VAR_8++) {


  if ((FUNC_3(VAR_5 + VAR_4[VAR_8].sh_name, ".init") != ((void*)0))
      != VAR_6)
   continue;


  if (FUNC_3(VAR_5 + VAR_4[VAR_8].sh_name, ".debug"))
   continue;

  if (VAR_4[VAR_8].sh_type == VAR_0) {
   FUNC_1("Found relocations in section %u\n", VAR_8);
   FUNC_1("Ptr: %p.  Number: %u\n",
          (void *)VAR_3 + VAR_4[VAR_8].sh_offset,
          VAR_4[VAR_8].sh_size / sizeof(Elf32_Rela));






   FUNC_2((void *)VAR_3 + VAR_4[VAR_8].sh_offset,
        VAR_4[VAR_8].sh_size / sizeof(Elf32_Rela),
        sizeof(Elf32_Rela), VAR_1, VAR_2);

   VAR_7 += FUNC_0((void *)VAR_3
          + VAR_4[VAR_8].sh_offset,
          VAR_4[VAR_8].sh_size
          / sizeof(Elf32_Rela))
    * sizeof(struct ppc_plt_entry);
  }
 }

 return VAR_7;
}
