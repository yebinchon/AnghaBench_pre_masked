
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int start_opd; int end_opd; } ;
struct module {TYPE_1__ arch; } ;
struct TYPE_10__ {int cpu_features; int mmu_features; } ;
struct TYPE_9__ {int sh_addr; int sh_size; } ;
typedef TYPE_2__ Elf_Shdr ;
typedef int Elf_Ehdr ;


 int VAR_0 ;
 TYPE_7__* VAR_1 ;
 int FUNC_0 (int ,void*,void*) ;
 int FUNC_1 (int ,void*,void*) ;
 int FUNC_2 (int ,void*,void*) ;
 TYPE_2__* FUNC_3 (int const*,TYPE_2__ const*,char*) ;
 int FUNC_4 (struct module*,TYPE_2__ const*) ;
 int VAR_2 ;

int FUNC_5(const Elf_Ehdr *VAR_3,
  const Elf_Shdr *VAR_4, struct module *VAR_5)
{
 const Elf_Shdr *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_5, VAR_4);
 if (VAR_7)
  return VAR_7;


 VAR_6 = FUNC_3(VAR_3, VAR_4, "__ftr_fixup");
 if (VAR_6 != ((void*)0))
  FUNC_1(VAR_1->cpu_features,
      (void *)VAR_6->sh_addr,
      (void *)VAR_6->sh_addr + VAR_6->sh_size);

 VAR_6 = FUNC_3(VAR_3, VAR_4, "__mmu_ftr_fixup");
 if (VAR_6 != ((void*)0))
  FUNC_1(VAR_1->mmu_features,
      (void *)VAR_6->sh_addr,
      (void *)VAR_6->sh_addr + VAR_6->sh_size);
 VAR_6 = FUNC_3(VAR_3, VAR_4, "__lwsync_fixup");
 if (VAR_6 != ((void*)0))
  FUNC_2(VAR_1->cpu_features,
     (void *)VAR_6->sh_addr,
     (void *)VAR_6->sh_addr + VAR_6->sh_size);

 return 0;
}
