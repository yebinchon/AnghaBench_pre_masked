
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfhdr {int e_phnum; scalar_t__ e_phoff; } ;
struct elf_phdr {scalar_t__ p_type; size_t p_filesz; scalar_t__ p_vaddr; } ;
struct coredump_params {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct coredump_params*,void*,size_t) ;
 scalar_t__ VAR_1 ;

int FUNC_1(struct coredump_params *VAR_2)
{
 if ( VAR_1 ) {
  const struct elfhdr *const VAR_3 =
   (struct elfhdr *) VAR_1;
  const struct elf_phdr *const VAR_4 =
   (const struct elf_phdr *) (VAR_1 + VAR_3->e_phoff);
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_3->e_phnum; ++VAR_5) {
   if (VAR_4[VAR_5].p_type == VAR_0) {
    void *VAR_6 = (void *) VAR_4[VAR_5].p_vaddr;
    size_t VAR_7 = VAR_4[VAR_5].p_filesz;
    if (!FUNC_0(VAR_2, VAR_6, VAR_7))
     return 0;
   }
  }
 }
 return 1;
}
