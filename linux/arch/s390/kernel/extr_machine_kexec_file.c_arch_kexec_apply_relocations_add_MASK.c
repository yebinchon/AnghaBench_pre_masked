
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct purgatory_info {TYPE_2__* sechdrs; void* purgatory_buf; TYPE_1__* ehdr; } ;
struct TYPE_13__ {unsigned long r_offset; int r_info; scalar_t__ r_addend; } ;
struct TYPE_12__ {int sh_offset; int sh_size; unsigned long sh_addr; } ;
struct TYPE_11__ {size_t st_shndx; unsigned long st_value; } ;
struct TYPE_10__ {scalar_t__ sh_addr; } ;
struct TYPE_9__ {size_t e_shnum; } ;
typedef TYPE_3__ Elf_Sym ;
typedef TYPE_4__ Elf_Shdr ;
typedef TYPE_5__ Elf_Rela ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int,void*,unsigned long,unsigned long) ;

int FUNC_3(struct purgatory_info *VAR_4,
         Elf_Shdr *VAR_5,
         const Elf_Shdr *VAR_6,
         const Elf_Shdr *VAR_7)
{
 Elf_Rela *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = (void *)VAR_4->ehdr + VAR_6->sh_offset;

 for (VAR_9 = 0; VAR_9 < VAR_6->sh_size / sizeof(*VAR_8); VAR_9++) {
  const Elf_Sym *VAR_11;
  unsigned long VAR_12;
  unsigned long VAR_13;
  void *VAR_14;

  VAR_11 = (void *)VAR_4->ehdr + VAR_7->sh_offset;
  VAR_11 += FUNC_0(VAR_8[VAR_9].r_info);

  if (VAR_11->st_shndx == VAR_3)
   return -VAR_0;

  if (VAR_11->st_shndx == VAR_2)
   return -VAR_0;

  if (VAR_11->st_shndx >= VAR_4->ehdr->e_shnum &&
      VAR_11->st_shndx != VAR_1)
   return -VAR_0;

  VAR_14 = VAR_4->purgatory_buf;
  VAR_14 += VAR_5->sh_offset;
  VAR_14 += VAR_8[VAR_9].r_offset;

  VAR_13 = VAR_11->st_value;
  if (VAR_11->st_shndx != VAR_1)
   VAR_13 += VAR_4->sechdrs[VAR_11->st_shndx].sh_addr;
  VAR_13 += VAR_8[VAR_9].r_addend;

  VAR_12 = VAR_5->sh_addr + VAR_8[VAR_9].r_offset;

  VAR_10 = FUNC_1(VAR_8[VAR_9].r_info);
  FUNC_2(VAR_10, VAR_14, VAR_13, VAR_12);
 }
 return 0;
}
