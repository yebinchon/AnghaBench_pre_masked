
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sh_type; int sh_size; } ;
struct section {TYPE_2__* link; TYPE_3__* symtab; TYPE_1__ shdr; } ;
struct TYPE_7__ {int st_name; } ;
struct TYPE_6__ {char* strtab; } ;
typedef TYPE_3__ Elf_Sym ;


 scalar_t__ VAR_0 ;
 struct section* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static Elf_Sym *FUNC_1(const char *VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct section *VAR_5 = &VAR_1[VAR_4];
  long VAR_6;
  char *VAR_7;
  Elf_Sym *VAR_8;
  Elf_Sym *VAR_9;

  if (VAR_5->shdr.sh_type != VAR_0)
   continue;

  VAR_6 = VAR_5->shdr.sh_size/sizeof(Elf_Sym);
  VAR_8 = VAR_5->symtab;
  VAR_7 = VAR_5->link->strtab;

  for (VAR_9 = VAR_8; --VAR_6 >= 0; VAR_9++) {
   if (!VAR_9->st_name)
    continue;
   if (FUNC_0(VAR_3, VAR_7 + VAR_9->st_name) == 0)
    return VAR_9;
  }
 }
 return 0;
}
