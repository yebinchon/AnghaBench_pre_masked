
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* elf_file_t ;
struct TYPE_6__ {int st_name; scalar_t__ st_shndx; } ;
struct TYPE_5__ {int ddbsymcnt; char* ddbstrtab; TYPE_2__* ddbsymtab; } ;
typedef TYPE_2__ Elf_Sym ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_1(elf_file_t VAR_2, const char* VAR_3, Elf_Sym** VAR_4)
{
 Elf_Sym *VAR_5;
 const char *VAR_6;
 int VAR_7;

 for (VAR_7 = 0, VAR_5 = VAR_2->ddbsymtab; VAR_7 < VAR_2->ddbsymcnt; VAR_7++, VAR_5++) {
  VAR_6 = VAR_2->ddbstrtab + VAR_5->st_name;
  if (VAR_5->st_shndx != VAR_1 && FUNC_0(VAR_3, VAR_6) == 0) {
   *VAR_4 = VAR_5;
   return (0);
  }
 }
 return (VAR_0);
}
