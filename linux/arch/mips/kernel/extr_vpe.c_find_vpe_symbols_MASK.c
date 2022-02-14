
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vpe {int * shared_ptr; scalar_t__ __start; } ;
struct module {int dummy; } ;
struct TYPE_5__ {int sh_size; scalar_t__ sh_addr; } ;
struct TYPE_4__ {int st_name; scalar_t__ st_value; } ;
typedef TYPE_1__ Elf_Sym ;
typedef TYPE_2__ Elf_Shdr ;


 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(struct vpe *VAR_0, Elf_Shdr *VAR_1,
          unsigned int VAR_2, const char *VAR_3,
          struct module *VAR_4)
{
 Elf_Sym *VAR_5 = (void *)VAR_1[VAR_2].sh_addr;
 unsigned int VAR_6, VAR_7 = VAR_1[VAR_2].sh_size / sizeof(Elf_Sym);

 for (VAR_6 = 1; VAR_6 < VAR_7; VAR_6++) {
  if (FUNC_0(VAR_3 + VAR_5[VAR_6].st_name, "__start") == 0)
   VAR_0->__start = VAR_5[VAR_6].st_value;

  if (FUNC_0(VAR_3 + VAR_5[VAR_6].st_name, "vpe_shared") == 0)
   VAR_0->shared_ptr = (void *)VAR_5[VAR_6].st_value;
 }

 if ((VAR_0->__start == 0) || (VAR_0->shared_ptr == ((void*)0)))
  return -1;

 return 0;
}
