
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ppc64_stub_entry {int dummy; } ;
struct TYPE_6__ {unsigned int e_shnum; } ;
struct TYPE_5__ {scalar_t__ sh_type; int sh_size; scalar_t__ sh_addr; } ;
typedef TYPE_1__ Elf64_Shdr ;
typedef int Elf64_Rela ;
typedef TYPE_2__ Elf64_Ehdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*,int) ;
 int FUNC_1 (char*,unsigned long,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void*,int,int,int ,int ) ;

__attribute__((used)) static unsigned long FUNC_3(const Elf64_Ehdr *VAR_3,
        const Elf64_Shdr *VAR_4)
{

 unsigned long VAR_5 = 1;
 unsigned VAR_6;


 for (VAR_6 = 1; VAR_6 < VAR_3->e_shnum; VAR_6++) {
  if (VAR_4[VAR_6].sh_type == VAR_0) {
   FUNC_1("Found relocations in section %u\n", VAR_6);
   FUNC_1("Ptr: %p.  Number: %Lu\n",
          (void *)VAR_4[VAR_6].sh_addr,
          VAR_4[VAR_6].sh_size / sizeof(Elf64_Rela));






   FUNC_2((void *)VAR_4[VAR_6].sh_addr,
        VAR_4[VAR_6].sh_size / sizeof(Elf64_Rela),
        sizeof(Elf64_Rela), VAR_1, VAR_2);

   VAR_5 += FUNC_0((void *)VAR_4[VAR_6].sh_addr,
            VAR_4[VAR_6].sh_size
            / sizeof(Elf64_Rela));
  }
 }
 FUNC_1("Looks like a total of %lu stubs, max\n", VAR_5);
 return VAR_5 * sizeof(struct ppc64_stub_entry);
}
