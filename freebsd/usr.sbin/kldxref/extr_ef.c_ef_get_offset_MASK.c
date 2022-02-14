
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* elf_file_t ;
struct TYPE_5__ {scalar_t__ p_vaddr; scalar_t__ p_memsz; scalar_t__ p_offset; } ;
struct TYPE_4__ {int ef_nsegs; TYPE_2__** ef_segs; } ;
typedef TYPE_2__ Elf_Phdr ;
typedef scalar_t__ Elf_Off ;



__attribute__((used)) static Elf_Off
FUNC_0(elf_file_t VAR_0, Elf_Off VAR_1)
{
 Elf_Phdr *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->ef_nsegs; VAR_3++) {
  VAR_2 = VAR_0->ef_segs[VAR_3];
  if (VAR_1 >= VAR_2->p_vaddr && VAR_1 < VAR_2->p_vaddr + VAR_2->p_memsz) {
   return (VAR_2->p_offset + (VAR_1 - VAR_2->p_vaddr));
  }
 }
 return (0);
}
