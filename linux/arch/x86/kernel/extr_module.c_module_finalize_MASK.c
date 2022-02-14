
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct module {int name; } ;
struct TYPE_6__ {size_t e_shstrndx; int e_shnum; } ;
struct TYPE_5__ {int sh_offset; int sh_name; int sh_size; scalar_t__ sh_addr; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef TYPE_2__ Elf_Ehdr ;


 int FUNC_0 (struct module*,int ,void*,void*,void*,void*) ;
 int FUNC_1 (void*,void*) ;
 int FUNC_2 (void*,void*) ;
 int FUNC_3 (struct module*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (struct module*,void*,int,void*,int) ;

int FUNC_6(const Elf_Ehdr *VAR_0,
      const Elf_Shdr *VAR_1,
      struct module *VAR_2)
{
 const Elf_Shdr *VAR_3, *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0),
  *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 char *VAR_10 = (void *)VAR_0 + VAR_1[VAR_0->e_shstrndx].sh_offset;

 for (VAR_3 = VAR_1; VAR_3 < VAR_1 + VAR_0->e_shnum; VAR_3++) {
  if (!FUNC_4(".text", VAR_10 + VAR_3->sh_name))
   VAR_4 = VAR_3;
  if (!FUNC_4(".altinstructions", VAR_10 + VAR_3->sh_name))
   VAR_5 = VAR_3;
  if (!FUNC_4(".smp_locks", VAR_10 + VAR_3->sh_name))
   VAR_6 = VAR_3;
  if (!FUNC_4(".parainstructions", VAR_10 + VAR_3->sh_name))
   VAR_7 = VAR_3;
  if (!FUNC_4(".orc_unwind", VAR_10 + VAR_3->sh_name))
   VAR_8 = VAR_3;
  if (!FUNC_4(".orc_unwind_ip", VAR_10 + VAR_3->sh_name))
   VAR_9 = VAR_3;
 }

 if (VAR_5) {

  void *VAR_11 = (void *)VAR_5->sh_addr;
  FUNC_1(VAR_11, VAR_11 + VAR_5->sh_size);
 }
 if (VAR_6 && VAR_4) {
  void *VAR_12 = (void *)VAR_6->sh_addr;
  void *VAR_13 = (void *)VAR_4->sh_addr;
  FUNC_0(VAR_2, VAR_2->name,
         VAR_12, VAR_12 + VAR_6->sh_size,
         VAR_13, VAR_13 + VAR_4->sh_size);
 }

 if (VAR_7) {
  void *VAR_14 = (void *)VAR_7->sh_addr;
  FUNC_2(VAR_14, VAR_14 + VAR_7->sh_size);
 }


 FUNC_3(VAR_2);

 if (VAR_8 && VAR_9)
  FUNC_5(VAR_2, (void *)VAR_9->sh_addr, VAR_9->sh_size,
       (void *)VAR_8->sh_addr, VAR_8->sh_size);

 return 0;
}
