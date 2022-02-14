
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t size; TYPE_3__* entries; } ;
struct TYPE_5__ {TYPE_2__ unsets; } ;
typedef TYPE_1__ h2o_envconf_t ;
struct TYPE_7__ {int len; int base; } ;


 scalar_t__ FUNC_0 (int ,int ,char const*,size_t) ;
 TYPE_3__ FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 size_t FUNC_3 (char const*) ;

void FUNC_4(h2o_envconf_t *VAR_0, const char *VAR_1)
{
    size_t VAR_2, VAR_3 = FUNC_3(VAR_1);


    for (VAR_2 = 0; VAR_2 != VAR_0->unsets.size; ++VAR_2)
        if (FUNC_0(VAR_0->unsets.entries[VAR_2].base, VAR_0->unsets.entries[VAR_2].len, VAR_1, VAR_3))
            return;

    FUNC_2(((void*)0), &VAR_0->unsets, VAR_0->unsets.size + 1);
    VAR_0->unsets.entries[VAR_0->unsets.size++] = FUNC_1(((void*)0), VAR_1, VAR_3);
}
