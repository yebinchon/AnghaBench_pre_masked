
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; int val; } ;
typedef TYPE_1__ symtab_t ;



__attribute__((used)) static const char *
FUNC_0(symtab_t *VAR_0, int VAR_1)
{
    static const char VAR_2[] = "unknown";
    int VAR_3;

    for (VAR_3 = 0; VAR_0[VAR_3].name != ((void*)0); ++VAR_3) {
 if (VAR_0[VAR_3].val == VAR_1)
     return (VAR_0[VAR_3].name);
    }
    return (VAR_2);
}
