
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct plt_entry {int adrp; } ;
struct mod_plt_sec {size_t plt_shndx; int plt_num_entries; int plt_max_entries; } ;
struct TYPE_8__ {struct mod_plt_sec init; struct mod_plt_sec core; } ;
struct module {TYPE_1__ arch; } ;
struct TYPE_11__ {scalar_t__ r_addend; } ;
struct TYPE_10__ {scalar_t__ sh_addr; } ;
struct TYPE_9__ {scalar_t__ st_value; } ;
typedef TYPE_2__ Elf64_Sym ;
typedef TYPE_3__ Elf64_Shdr ;
typedef TYPE_4__ Elf64_Rela ;


 scalar_t__ FUNC_0 (int) ;
 struct plt_entry FUNC_1 (scalar_t__,struct plt_entry*) ;
 int FUNC_2 (struct module*,void*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct plt_entry*,struct plt_entry*) ;

u64 FUNC_5(struct module *VAR_0, Elf64_Shdr *VAR_1,
     void *VAR_2, const Elf64_Rela *VAR_3,
     Elf64_Sym *VAR_4)
{
 struct mod_plt_sec *VAR_5 = !FUNC_2(VAR_0, VAR_2) ? &VAR_0->arch.core :
         &VAR_0->arch.init;
 struct plt_entry *VAR_6 = (struct plt_entry *)VAR_1[VAR_5->plt_shndx].sh_addr;
 int VAR_7 = VAR_5->plt_num_entries;
 int VAR_8 = VAR_7 - 1;
 u64 VAR_9 = VAR_4->st_value + VAR_3->r_addend;

 if (FUNC_3(&VAR_6[VAR_7].adrp))
  VAR_7++;

 VAR_6[VAR_7] = FUNC_1(VAR_9, &VAR_6[VAR_7]);






 if (VAR_8 >= 0 && FUNC_4(VAR_6 + VAR_7, VAR_6 + VAR_8))
  return (u64)&VAR_6[VAR_8];

 VAR_5->plt_num_entries += VAR_7 - VAR_8;
 if (FUNC_0(VAR_5->plt_num_entries > VAR_5->plt_max_entries))
  return 0;

 return (u64)&VAR_6[VAR_7];
}
