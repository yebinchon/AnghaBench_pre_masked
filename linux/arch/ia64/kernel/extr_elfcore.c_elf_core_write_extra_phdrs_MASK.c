
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_phdr {scalar_t__ p_type; scalar_t__ p_paddr; scalar_t__ p_offset; scalar_t__ p_filesz; scalar_t__ p_memsz; } ;
struct coredump_params {int dummy; } ;
typedef int phdr ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int e_phnum; scalar_t__ e_phoff; } ;
typedef scalar_t__ Elf64_Off ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct coredump_params*,struct elf_phdr*,int) ;

int FUNC_2(struct coredump_params *VAR_3, loff_t VAR_4)
{
 const struct elf_phdr *const VAR_5 =
  (const struct elf_phdr *) (VAR_0 + VAR_1->e_phoff);
 int VAR_6;
 Elf64_Off VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_1->e_phnum; ++VAR_6) {
  struct elf_phdr VAR_8 = VAR_5[VAR_6];

  if (VAR_8.p_type == VAR_2) {
   VAR_8.p_memsz = FUNC_0(VAR_8.p_memsz);
   VAR_8.p_filesz = VAR_8.p_memsz;
   if (VAR_7 == 0) {
    VAR_7 = VAR_8.p_offset = VAR_4;
    VAR_4 += VAR_8.p_filesz;
   } else {
    VAR_8.p_offset = VAR_7;
   }
  } else {
   VAR_8.p_offset += VAR_7;
  }
  VAR_8.p_paddr = 0;
  if (!FUNC_1(VAR_3, &VAR_8, sizeof(VAR_8)))
   return 0;
 }
 return 1;
}
