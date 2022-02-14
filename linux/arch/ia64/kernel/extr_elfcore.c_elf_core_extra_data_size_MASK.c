
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_phdr {scalar_t__ p_type; int p_memsz; } ;
struct TYPE_2__ {int e_phnum; scalar_t__ e_phoff; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;

size_t FUNC_1(void)
{
 const struct elf_phdr *const VAR_3 =
  (const struct elf_phdr *) (VAR_0 + VAR_1->e_phoff);
 int VAR_4;
 size_t VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->e_phnum; ++VAR_4) {
  if (VAR_3[VAR_4].p_type == VAR_2) {
   VAR_5 += FUNC_0(VAR_3[VAR_4].p_memsz);
   break;
  }
 }
 return VAR_5;
}
