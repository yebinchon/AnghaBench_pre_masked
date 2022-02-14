
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t num_wheels; int ** wheels; int last_run; } ;
typedef TYPE_1__ h2o_timerwheel_t ;


 int FUNC_0 (TYPE_1__*,size_t,size_t) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (size_t,int ) ;

__attribute__((used)) static int FUNC_3(h2o_timerwheel_t *VAR_0, size_t VAR_1)
{
    int VAR_2 = 0;

    for (; VAR_1 < VAR_0->num_wheels; ++VAR_1) {
        size_t VAR_3 = FUNC_2(VAR_1, VAR_0->last_run);
        if (!FUNC_1(&VAR_0->wheels[VAR_1][VAR_3]))
            VAR_2 = 1;
        FUNC_0(VAR_0, VAR_1, VAR_3);
        if (VAR_3 != 0)
            break;
    }

    return VAR_2;
}
