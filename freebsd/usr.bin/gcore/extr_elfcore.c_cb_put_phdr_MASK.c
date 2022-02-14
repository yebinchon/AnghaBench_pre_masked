
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_map_entry_t ;
struct phdr_closure {TYPE_2__* phdr; int offset; } ;
struct TYPE_5__ {scalar_t__ p_filesz; int p_flags; int p_align; scalar_t__ p_memsz; scalar_t__ p_paddr; scalar_t__ p_vaddr; int p_offset; int p_type; } ;
struct TYPE_4__ {int protection; scalar_t__ start; scalar_t__ end; } ;
typedef TYPE_2__ Elf_Phdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(vm_map_entry_t VAR_8, void *VAR_9)
{
 struct phdr_closure *VAR_10 = (struct phdr_closure *)VAR_9;
 Elf_Phdr *VAR_11 = VAR_10->phdr;

 VAR_10->offset = FUNC_0(VAR_10->offset);

 VAR_11->p_type = VAR_4;
 VAR_11->p_offset = VAR_10->offset;
 VAR_11->p_vaddr = VAR_8->start;
 VAR_11->p_paddr = 0;
 VAR_11->p_filesz = VAR_11->p_memsz = VAR_8->end - VAR_8->start;
 VAR_11->p_align = VAR_0;
 VAR_11->p_flags = 0;
 if (VAR_8->protection & VAR_6)
  VAR_11->p_flags |= VAR_1;
 if (VAR_8->protection & VAR_7)
  VAR_11->p_flags |= VAR_2;
 if (VAR_8->protection & VAR_5)
  VAR_11->p_flags |= VAR_3;

 VAR_10->offset += VAR_11->p_filesz;
 VAR_10->phdr++;
}
