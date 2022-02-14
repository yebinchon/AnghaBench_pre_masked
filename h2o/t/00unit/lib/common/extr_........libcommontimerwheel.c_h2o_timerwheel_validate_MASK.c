
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t num_wheels; } ;
typedef TYPE_1__ h2o_timerwheel_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t,size_t) ;

int FUNC_1(h2o_timerwheel_t *VAR_1)
{
    size_t VAR_2, VAR_3;
    int VAR_4 = 1;

    for (VAR_2 = 0; VAR_2 < VAR_1->num_wheels; ++VAR_2)
        for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
            if (!FUNC_0(VAR_1, VAR_2, VAR_3))
                VAR_4 = 0;

    return VAR_4;
}
