
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elfhdr {int dummy; } ;
struct elf_phdr {scalar_t__ p_type; int p_memsz; int p_filesz; int p_paddr; int p_offset; } ;
struct TYPE_2__ {int cpu_notes_buf_size; int cpu_notes_buf_vaddr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;

void FUNC_1(char *VAR_2)
{
 struct elfhdr *VAR_3;
 struct elf_phdr *VAR_4;

 VAR_3 = (struct elfhdr *)VAR_2;
 VAR_2 += sizeof(struct elfhdr);


 VAR_4 = (struct elf_phdr *)VAR_2;

 if (VAR_4->p_type == VAR_0) {
  VAR_4->p_paddr = FUNC_0(VAR_1.cpu_notes_buf_vaddr);
  VAR_4->p_offset = VAR_4->p_paddr;
  VAR_4->p_filesz = VAR_1.cpu_notes_buf_size;
  VAR_4->p_memsz = VAR_1.cpu_notes_buf_size;
 }
 return;
}
