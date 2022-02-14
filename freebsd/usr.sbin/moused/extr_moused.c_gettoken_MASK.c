
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * name; } ;
typedef TYPE_1__ symtab_t ;


 scalar_t__ FUNC_0 (int *,char const*,int) ;

__attribute__((used)) static symtab_t *
FUNC_1(symtab_t *VAR_0, const char *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_0[VAR_3].name != ((void*)0); ++VAR_3) {
 if (FUNC_0(VAR_0[VAR_3].name, VAR_1, VAR_2) == 0)
     break;
    }
    return (&VAR_0[VAR_3]);
}
