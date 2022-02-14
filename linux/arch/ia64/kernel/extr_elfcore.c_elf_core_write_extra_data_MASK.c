
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_phdr {scalar_t__ p_type; int p_memsz; scalar_t__ p_vaddr; } ;
struct coredump_params {int dummy; } ;
struct TYPE_2__ {int e_phnum; scalar_t__ e_phoff; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct coredump_params*,void*,size_t) ;

int FUNC_2(struct coredump_params *VAR_3)
{
 const struct elf_phdr *const VAR_4 =
  (const struct elf_phdr *) (VAR_0 + VAR_1->e_phoff);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->e_phnum; ++VAR_5) {
  if (VAR_4[VAR_5].p_type == VAR_2) {
   void *VAR_6 = (void *)VAR_4[VAR_5].p_vaddr;
   size_t VAR_7 = FUNC_0(VAR_4[VAR_5].p_memsz);

   if (!FUNC_1(VAR_3, VAR_6, VAR_7))
    return 0;
   break;
  }
 }
 return 1;
}
