
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_map_entry_t ;
struct phdr_closure {size_t offset; TYPE_2__* phdr; } ;
typedef int ssize_t ;
typedef int pid_t ;
typedef int binhdr ;
struct TYPE_8__ {int e_phoff; int e_ehsize; int e_phentsize; int e_shentsize; int e_phnum; int e_shnum; int e_shoff; int e_shstrndx; int e_flags; scalar_t__ e_entry; void* e_version; int e_machine; int e_type; void** e_ident; } ;
struct TYPE_7__ {size_t p_offset; size_t p_filesz; int p_align; int p_flags; scalar_t__ p_memsz; scalar_t__ p_paddr; scalar_t__ p_vaddr; int p_type; } ;
struct TYPE_6__ {int sh_size; int sh_info; int sh_link; int sh_type; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef TYPE_2__ Elf_Phdr ;
typedef TYPE_3__ Elf_Ehdr ;
typedef int Elf32_Size ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ,int ,struct phdr_closure*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int,TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_5(int VAR_25, pid_t VAR_26, vm_map_entry_t VAR_27, void *VAR_28, size_t VAR_29,
    size_t VAR_30, size_t VAR_31, int VAR_32)
{
 Elf_Ehdr *VAR_33, VAR_34;
 Elf_Phdr *VAR_35;
 Elf_Shdr *VAR_36;
 struct phdr_closure VAR_37;
 ssize_t VAR_38;

 VAR_38 = FUNC_4(VAR_25, &VAR_34, sizeof(VAR_34));
 if (VAR_38 < 0)
  FUNC_1(1, "Failed to re-read ELF header");
 else if (VAR_38 != sizeof(VAR_34))
  FUNC_2(1, "Failed to re-read ELF header");

 VAR_33 = (Elf_Ehdr *)VAR_28;

 VAR_33->e_ident[VAR_3] = VAR_10;
 VAR_33->e_ident[VAR_4] = VAR_11;
 VAR_33->e_ident[VAR_5] = VAR_12;
 VAR_33->e_ident[VAR_6] = VAR_13;
 VAR_33->e_ident[VAR_1] = VAR_15;
 VAR_33->e_ident[VAR_2] = VAR_16;
 VAR_33->e_ident[VAR_9] = VAR_18;
 VAR_33->e_ident[VAR_7] = VAR_14;
 VAR_33->e_ident[VAR_0] = 0;
 VAR_33->e_ident[VAR_8] = 0;
 VAR_33->e_type = VAR_17;
 VAR_33->e_machine = VAR_34.e_machine;
 VAR_33->e_version = VAR_18;
 VAR_33->e_entry = 0;
 VAR_33->e_phoff = sizeof(Elf_Ehdr);
 VAR_33->e_flags = VAR_34.e_flags;
 VAR_33->e_ehsize = sizeof(Elf_Ehdr);
 VAR_33->e_phentsize = sizeof(Elf_Phdr);
 VAR_33->e_shentsize = sizeof(Elf_Shdr);
 VAR_33->e_shstrndx = VAR_22;
 if (VAR_32 + 1 < VAR_20) {
  VAR_33->e_phnum = VAR_32 + 1;
  VAR_33->e_shnum = 0;
 } else {
  VAR_33->e_phnum = VAR_20;
  VAR_33->e_shnum = 1;

  VAR_33->e_shoff = VAR_33->e_phoff +
      (VAR_32 + 1) * VAR_33->e_phentsize;

  VAR_36 = (Elf_Shdr *)((char *)VAR_28 + VAR_33->e_shoff);
  FUNC_3(VAR_36, 0, sizeof(*VAR_36));
  VAR_36->sh_type = VAR_23;
  VAR_36->sh_size = VAR_33->e_shnum;
  VAR_36->sh_link = VAR_33->e_shstrndx;
  VAR_36->sh_info = VAR_32 + 1;
 }




 VAR_35 = (Elf_Phdr *)((char *)VAR_28 + VAR_33->e_phoff);


 VAR_35->p_type = VAR_21;
 VAR_35->p_offset = VAR_29;
 VAR_35->p_vaddr = 0;
 VAR_35->p_paddr = 0;
 VAR_35->p_filesz = VAR_30;
 VAR_35->p_memsz = 0;
 VAR_35->p_flags = VAR_19;
 VAR_35->p_align = sizeof(Elf32_Size);
 VAR_35++;


 VAR_37.phdr = VAR_35;
 VAR_37.offset = VAR_31;
 FUNC_0(VAR_27, VAR_24, &VAR_37);
}
