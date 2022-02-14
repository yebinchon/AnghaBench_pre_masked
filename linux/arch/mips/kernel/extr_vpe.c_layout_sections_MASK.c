
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ size; scalar_t__ text_size; } ;
struct module {TYPE_1__ core_layout; } ;
struct TYPE_9__ {unsigned int e_shnum; } ;
struct TYPE_8__ {unsigned long sh_entsize; unsigned long const sh_flags; } ;
typedef TYPE_2__ Elf_Shdr ;
typedef TYPE_3__ Elf_Ehdr ;



 unsigned int FUNC_0 (unsigned long const**) ;



 unsigned long FUNC_1 (unsigned long*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct module *VAR_0, const Elf_Ehdr *VAR_1,
       Elf_Shdr *VAR_2, const char *VAR_3)
{
 static unsigned long const VAR_4[][2] = {



  {129 | 130, 131},
  {130, 128 | 131},
  {128 | 130, 131},
  {131 | 130, 0}
 };
 unsigned int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1->e_shnum; VAR_6++)
  VAR_2[VAR_6].sh_entsize = ~0UL;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); ++VAR_5) {
  for (VAR_6 = 0; VAR_6 < VAR_1->e_shnum; ++VAR_6) {
   Elf_Shdr *VAR_7 = &VAR_2[VAR_6];

   if ((VAR_7->sh_flags & VAR_4[VAR_5][0]) != VAR_4[VAR_5][0]
       || (VAR_7->sh_flags & VAR_4[VAR_5][1])
       || VAR_7->sh_entsize != ~0UL)
    continue;
   VAR_7->sh_entsize =
    FUNC_1((unsigned long *)&VAR_0->core_layout.size, VAR_7);
  }

  if (VAR_5 == 0)
   VAR_0->core_layout.text_size = VAR_0->core_layout.size;

 }
}
