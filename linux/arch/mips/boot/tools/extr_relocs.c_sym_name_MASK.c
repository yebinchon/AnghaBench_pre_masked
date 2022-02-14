
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_name; int st_shndx; } ;
typedef TYPE_1__ Elf_Sym ;


 char* FUNC_0 (int ) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_0, Elf_Sym *VAR_1)
{
 const char *VAR_2;

 if (VAR_1->st_name)
  VAR_2 = VAR_0 + VAR_1->st_name;
 else
  VAR_2 = FUNC_0(VAR_1->st_shndx);
 return VAR_2;
}
