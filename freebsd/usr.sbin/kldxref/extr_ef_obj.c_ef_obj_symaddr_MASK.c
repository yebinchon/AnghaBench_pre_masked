
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* elf_file_t ;
struct TYPE_5__ {scalar_t__ st_shndx; scalar_t__ st_value; } ;
struct TYPE_4__ {scalar_t__ address; TYPE_2__* ddbsymtab; scalar_t__ ddbsymcnt; } ;
typedef TYPE_2__ Elf_Sym ;
typedef size_t Elf_Size ;
typedef scalar_t__ Elf_Addr ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static Elf_Addr
FUNC_0(elf_file_t VAR_1, Elf_Size VAR_2)
{
 const Elf_Sym *VAR_3;

 if (VAR_2 >= (size_t) VAR_1->ddbsymcnt)
  return (0);
 VAR_3 = VAR_1->ddbsymtab + VAR_2;

 if (VAR_3->st_shndx != VAR_0)
  return (VAR_3->st_value - (Elf_Addr)VAR_1->address);
 return (0);
}
