
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_3__ {size_t last_run; size_t num_wheels; int ** wheels; } ;
typedef TYPE_1__ h2o_timerwheel_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (size_t,size_t) ;
 int VAR_3 ;

uint64_t FUNC_4(h2o_timerwheel_t *VAR_4)
{




    size_t VAR_5, VAR_6;
    uint64_t VAR_7 = VAR_4->last_run;

    for (VAR_5 = 0; VAR_5 < VAR_4->num_wheels; ++VAR_5) {
        uint64_t VAR_8 = (uint64_t)1 << (VAR_5 * VAR_0);
        size_t VAR_9 = FUNC_3(VAR_5, VAR_7);

        for (VAR_6 = VAR_9; VAR_6 < VAR_1; ++VAR_6) {
            if (!FUNC_1(&VAR_4->wheels[VAR_5][VAR_6]))
                goto Found;
            VAR_7 += VAR_8;
        }
        while (1) {

            if (VAR_5 + 1 < VAR_4->num_wheels) {
                size_t VAR_10;
                for (VAR_10 = VAR_5 + 1; VAR_10 < VAR_4->num_wheels; ++VAR_10) {
                    size_t VAR_11 = FUNC_3(VAR_10, VAR_7);
                    if (!FUNC_1(&VAR_4->wheels[VAR_10][VAR_11]))
                        goto Found;
                    if (VAR_11 != 0)
                        break;
                }
            }

            if (VAR_9 == 0)
                break;
            for (VAR_6 = 0; VAR_6 < VAR_9; ++VAR_6) {
                if (!FUNC_1(&VAR_4->wheels[VAR_5][VAR_6]))
                    goto Found;
                VAR_7 += VAR_8;
            }
            VAR_7 += VAR_8 * (VAR_1 - VAR_9);
            VAR_9 = 0;
        }
    }


    return VAR_2;
Found:
    return VAR_7;
}
