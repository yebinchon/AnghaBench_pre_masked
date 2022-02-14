
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dynsym_start; scalar_t__ rela_dyn_end; scalar_t__ rela_dyn_start; } ;
struct TYPE_5__ {unsigned long r_offset; unsigned long r_addend; int r_info; } ;
struct TYPE_4__ {scalar_t__ st_shndx; scalar_t__ st_value; } ;
typedef TYPE_1__ Elf64_Sym ;
typedef TYPE_2__ Elf64_Rela ;
typedef unsigned long Elf64_Addr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,void*,unsigned long,int ) ;
 int FUNC_3 (char*) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 Elf64_Rela *VAR_3, *VAR_4, *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 Elf64_Addr VAR_9, VAR_10;
 Elf64_Sym *VAR_11;

 VAR_3 = (Elf64_Rela *) VAR_1.rela_dyn_start;
 VAR_4 = (Elf64_Rela *) VAR_1.rela_dyn_end;
 VAR_11 = (Elf64_Sym *) VAR_1.dynsym_start;
 for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5++) {
  VAR_9 = VAR_5->r_offset + VAR_2;
  VAR_10 = VAR_5->r_addend;
  VAR_7 = FUNC_0(VAR_5->r_info);
  if (VAR_7) {
   if (VAR_11[VAR_7].st_shndx != VAR_0)
    VAR_10 += VAR_11[VAR_7].st_value + VAR_2;
  } else {




   VAR_10 += VAR_2;
  }
  VAR_6 = FUNC_1(VAR_5->r_info);
  VAR_8 = FUNC_2(VAR_6, (void *) VAR_9, VAR_10, 0);
  if (VAR_8)
   FUNC_3("Unknown relocation type");
 }
}
