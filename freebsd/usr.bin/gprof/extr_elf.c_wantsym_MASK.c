
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_name; int st_info; } ;
typedef TYPE_1__ Elf_Sym ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (char const*,char) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool
FUNC_3(const Elf_Sym *VAR_4, const char *VAR_5)
{
    int VAR_6;
    int VAR_7;

    VAR_6 = FUNC_1(VAR_4->st_info);
    VAR_7 = FUNC_0(VAR_4->st_info);

    if (VAR_6 != VAR_1 ||
      (VAR_2 && VAR_7 == VAR_0) ||
      (VAR_3 && FUNC_2(VAR_5 + VAR_4->st_name, '.') != ((void*)0)))
 return 0;

    return 1;
}
