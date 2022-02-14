
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t size; TYPE_4__* entries; } ;
struct TYPE_5__ {size_t size; TYPE_4__* entries; } ;
struct TYPE_7__ {TYPE_2__ sets; TYPE_1__ unsets; int * parent; } ;
typedef TYPE_3__ h2o_envconf_t ;
struct TYPE_8__ {int * base; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    h2o_envconf_t *VAR_1 = VAR_0;
    size_t VAR_2;

    if (VAR_1->parent != ((void*)0))
        FUNC_1(VAR_1->parent);

    for (VAR_2 = 0; VAR_2 != VAR_1->unsets.size; ++VAR_2)
        FUNC_1(VAR_1->unsets.entries[VAR_2].base);
    FUNC_0(VAR_1->unsets.entries);
    for (VAR_2 = 0; VAR_2 != VAR_1->sets.size; ++VAR_2)
        FUNC_1(VAR_1->sets.entries[VAR_2].base);
    FUNC_0(VAR_1->sets.entries);
}
