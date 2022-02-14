
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * unwind; } ;
struct module {TYPE_1__ arch; } ;
struct mod_unwind_map {TYPE_2__ const* txt_sec; TYPE_2__ const* unw_sec; } ;
typedef int maps ;
struct TYPE_11__ {size_t e_shstrndx; int e_shnum; } ;
struct TYPE_10__ {int sh_offset; int sh_name; int sh_flags; int sh_size; scalar_t__ sh_addr; } ;
typedef TYPE_2__ Elf_Shdr ;
typedef TYPE_3__ Elf32_Ehdr ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 (TYPE_3__ const*,TYPE_2__ const*,char*) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct mod_unwind_map*,int ,int) ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__,int ) ;

int FUNC_7(const Elf32_Ehdr *VAR_8, const Elf_Shdr *VAR_9,
      struct module *VAR_10)
{
 const Elf_Shdr *VAR_11 = ((void*)0);
 VAR_11 = FUNC_0(VAR_8, VAR_9, ".alt.smp.init");
 if (VAR_11 && !FUNC_3())



  return -VAR_6;

 return 0;
}
