
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct elfhdr {int e_phnum; } ;
struct elf_phdr {int p_flags; unsigned long p_vaddr; unsigned long long p_offset; unsigned long long p_paddr; unsigned long long p_filesz; unsigned long long p_memsz; scalar_t__ p_align; void* p_type; } ;
struct TYPE_6__ {int mem_range_cnt; TYPE_1__* mem_ranges; } ;
struct TYPE_5__ {unsigned long long* boot_mem_addr; unsigned long long boot_mem_dest_addr; int boot_mem_regs_cnt; scalar_t__* boot_mem_sz; } ;
struct TYPE_4__ {unsigned long long base; unsigned long long size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 unsigned long long VAR_5 ;
 scalar_t__ FUNC_0 (unsigned long long) ;
 TYPE_3__ VAR_6 ;
 int FUNC_1 (char*) ;
 unsigned long long FUNC_2 (int ) ;
 TYPE_2__ VAR_7 ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(char *VAR_8)
{
 unsigned long long VAR_9, VAR_10;
 struct elf_phdr *VAR_11;
 struct elfhdr *VAR_12;
 int VAR_13, VAR_14;

 FUNC_1(VAR_8);
 VAR_12 = (struct elfhdr *)VAR_8;
 VAR_8 += sizeof(struct elfhdr);
 VAR_11 = (struct elf_phdr *)VAR_8;
 VAR_8 += sizeof(struct elf_phdr);
 VAR_11->p_type = VAR_4;
 VAR_11->p_flags = 0;
 VAR_11->p_vaddr = 0;
 VAR_11->p_align = 0;

 VAR_11->p_offset = 0;
 VAR_11->p_paddr = 0;
 VAR_11->p_filesz = 0;
 VAR_11->p_memsz = 0;

 (VAR_12->e_phnum)++;


 VAR_11 = (struct elf_phdr *)VAR_8;
 VAR_8 += sizeof(struct elf_phdr);
 VAR_11->p_type = VAR_4;
 VAR_11->p_flags = 0;
 VAR_11->p_vaddr = 0;
 VAR_11->p_align = 0;

 VAR_11->p_paddr = FUNC_2(FUNC_3());
 VAR_11->p_offset = VAR_11->p_paddr;
 VAR_11->p_memsz = VAR_11->p_filesz = VAR_5;


 (VAR_12->e_phnum)++;


 VAR_14 = 0;
 VAR_10 = 0;
 VAR_9 = VAR_7.boot_mem_addr[0];
 for (VAR_13 = 0; VAR_13 < VAR_6.mem_range_cnt; VAR_13++) {
  u64 VAR_15, VAR_16;

  VAR_15 = VAR_6.mem_ranges[VAR_13].base;
  VAR_16 = VAR_6.mem_ranges[VAR_13].size;
  if (!VAR_16)
   continue;

  VAR_11 = (struct elf_phdr *)VAR_8;
  VAR_8 += sizeof(struct elf_phdr);
  VAR_11->p_type = VAR_3;
  VAR_11->p_flags = VAR_0|VAR_1|VAR_2;
  VAR_11->p_offset = VAR_15;

  if (VAR_15 == VAR_9) {





   VAR_11->p_offset = VAR_7.boot_mem_dest_addr + VAR_10;
   if (VAR_14 < (VAR_7.boot_mem_regs_cnt - 1)) {
    VAR_10 += VAR_7.boot_mem_sz[VAR_14];
    VAR_9 = VAR_7.boot_mem_addr[++VAR_14];
   }
  }

  VAR_11->p_paddr = VAR_15;
  VAR_11->p_vaddr = (unsigned long)FUNC_0(VAR_15);
  VAR_11->p_filesz = VAR_16;
  VAR_11->p_memsz = VAR_16;
  VAR_11->p_align = 0;


  (VAR_12->e_phnum)++;
 }
 return 0;
}
