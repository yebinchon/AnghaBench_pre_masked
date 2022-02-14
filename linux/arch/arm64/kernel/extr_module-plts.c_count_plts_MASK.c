
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct plt_entry {int dummy; } ;
struct TYPE_10__ {int r_offset; int r_addend; int r_info; } ;
struct TYPE_9__ {int st_shndx; } ;
struct TYPE_8__ {int sh_addralign; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef int Elf64_Word ;
typedef TYPE_2__ Elf64_Sym ;
typedef TYPE_3__ Elf64_Rela ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;




 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int) ;
 unsigned long long FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static unsigned int FUNC_8(Elf64_Sym *VAR_4, Elf64_Rela *VAR_5, int VAR_6,
          Elf64_Word VAR_7, Elf_Shdr *VAR_8)
{
 unsigned int VAR_9 = 0;
 Elf64_Sym *VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  u64 VAR_12;

  switch (FUNC_2(VAR_5[VAR_11].r_info)) {
  case 128:
  case 129:
   if (!FUNC_3(VAR_2))
    break;
   VAR_10 = VAR_4 + FUNC_1(VAR_5[VAR_11].r_info);
   if (VAR_10->st_shndx == VAR_7)
    break;
   if (VAR_5[VAR_11].r_addend != 0 || !FUNC_5(VAR_5, VAR_11))
    VAR_9++;
   break;
  case 130:
  case 131:
   if (!FUNC_3(VAR_1) ||
       !FUNC_4(VAR_0))
    break;
   VAR_12 = 2ULL << FUNC_6(VAR_5[VAR_11].r_offset | 0x7);
   if (VAR_12 > VAR_3)
    VAR_9++;
   else
    VAR_8->sh_addralign = FUNC_7(VAR_8->sh_addralign,
          VAR_12);
   break;
  }
 }

 if (FUNC_3(VAR_1) &&
     FUNC_4(VAR_0))




  VAR_9 += FUNC_0(VAR_9, (VAR_3 / sizeof(struct plt_entry)));

 return VAR_9;
}
