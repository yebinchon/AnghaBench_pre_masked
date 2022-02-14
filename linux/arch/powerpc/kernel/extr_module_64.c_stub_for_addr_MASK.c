
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ppc64_stub_entry {int funcdata; } ;
struct TYPE_5__ {size_t stubs_section; } ;
struct module {TYPE_1__ arch; } ;
struct TYPE_6__ {int sh_size; scalar_t__ sh_addr; } ;
typedef TYPE_2__ Elf64_Shdr ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__ const*,struct ppc64_stub_entry*,unsigned long,struct module*) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static unsigned long FUNC_4(const Elf64_Shdr *VAR_0,
       unsigned long VAR_1,
       struct module *VAR_2)
{
 struct ppc64_stub_entry *VAR_3;
 unsigned int VAR_4, VAR_5;

 VAR_5 = VAR_0[VAR_2->arch.stubs_section].sh_size / sizeof(*VAR_3);


 VAR_3 = (void *)VAR_0[VAR_2->arch.stubs_section].sh_addr;
 for (VAR_4 = 0; FUNC_3(VAR_3[VAR_4].funcdata); VAR_4++) {
  if (FUNC_0(VAR_4 >= VAR_5))
   return 0;

  if (FUNC_3(VAR_3[VAR_4].funcdata) == FUNC_2(VAR_1))
   return (unsigned long)&VAR_3[VAR_4];
 }

 if (!FUNC_1(VAR_0, &VAR_3[VAR_4], VAR_1, VAR_2))
  return 0;

 return (unsigned long)&VAR_3[VAR_4];
}
