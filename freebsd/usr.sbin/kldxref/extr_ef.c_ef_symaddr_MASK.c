
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* elf_file_t ;
struct TYPE_5__ {scalar_t__ st_shndx; scalar_t__ st_value; int st_info; } ;
struct TYPE_4__ {scalar_t__ ef_nchains; TYPE_2__* ef_symtab; } ;
typedef TYPE_2__ Elf_Sym ;
typedef scalar_t__ Elf_Size ;
typedef scalar_t__ Elf_Addr ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static Elf_Addr
FUNC_1(elf_file_t VAR_2, Elf_Size VAR_3)
{
 const Elf_Sym *VAR_4;

 if (VAR_3 >= VAR_2->ef_nchains)
  return (0);
 VAR_4 = VAR_2->ef_symtab + VAR_3;

 if (FUNC_0(VAR_4->st_info) == VAR_1 &&
     VAR_4->st_shndx != VAR_0 && VAR_4->st_value != 0)
  return (VAR_4->st_value);
 return (0);
}
