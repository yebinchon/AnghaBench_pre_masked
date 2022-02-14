
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int h2o_status_handler_t ;
struct TYPE_5__ {size_t size; int ** entries; } ;
struct TYPE_4__ {TYPE_2__ statuses; } ;
typedef TYPE_1__ h2o_globalconf_t ;


 int FUNC_0 (int *,TYPE_2__*,int) ;

void FUNC_1(h2o_globalconf_t *VAR_0, h2o_status_handler_t *VAR_1)
{

    size_t VAR_2;
    for (VAR_2 = 0; VAR_2 != VAR_0->statuses.size; ++VAR_2)
        if (VAR_0->statuses.entries[VAR_2] == VAR_1)
            return;

    FUNC_0(((void*)0), &VAR_0->statuses, VAR_0->statuses.size + 1);
    VAR_0->statuses.entries[VAR_0->statuses.size++] = VAR_1;
}
