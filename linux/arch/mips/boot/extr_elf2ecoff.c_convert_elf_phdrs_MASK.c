
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* p_align; void* p_flags; void* p_memsz; void* p_filesz; void* p_paddr; void* p_vaddr; void* p_offset; void* p_type; } ;
typedef TYPE_1__ Elf32_Phdr ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(Elf32_Phdr * VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++, VAR_0++) {
  VAR_0->p_type = FUNC_0(VAR_0->p_type);
  VAR_0->p_offset = FUNC_0(VAR_0->p_offset);
  VAR_0->p_vaddr = FUNC_0(VAR_0->p_vaddr);
  VAR_0->p_paddr = FUNC_0(VAR_0->p_paddr);
  VAR_0->p_filesz = FUNC_0(VAR_0->p_filesz);
  VAR_0->p_memsz = FUNC_0(VAR_0->p_memsz);
  VAR_0->p_flags = FUNC_0(VAR_0->p_flags);
  VAR_0->p_align = FUNC_0(VAR_0->p_align);
 }

}
