
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfhdr {int e_phnum; scalar_t__ e_phoff; } ;
struct elf_phdr {scalar_t__ p_type; scalar_t__ p_paddr; scalar_t__ p_offset; scalar_t__ p_filesz; } ;
struct coredump_params {int dummy; } ;
typedef int phdr ;
typedef scalar_t__ loff_t ;
typedef scalar_t__ Elf32_Off ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct coredump_params*,struct elf_phdr*,int) ;
 scalar_t__ VAR_1 ;

int FUNC_1(struct coredump_params *VAR_2, loff_t VAR_3)
{
 if ( VAR_1 ) {
  const struct elfhdr *const VAR_4 =
   (struct elfhdr *) VAR_1;
  const struct elf_phdr *const VAR_5 =
   (const struct elf_phdr *) (VAR_1 + VAR_4->e_phoff);
  int VAR_6;
  Elf32_Off VAR_7 = 0;

  for (VAR_6 = 0; VAR_6 < VAR_4->e_phnum; ++VAR_6) {
   struct elf_phdr VAR_8 = VAR_5[VAR_6];

   if (VAR_8.p_type == VAR_0) {
    VAR_7 = VAR_8.p_offset = VAR_3;
    VAR_3 += VAR_8.p_filesz;
   } else {
    VAR_8.p_offset += VAR_7;
   }
   VAR_8.p_paddr = 0;
   if (!FUNC_0(VAR_2, &VAR_8, sizeof(VAR_8)))
    return 0;
  }
 }
 return 1;
}
