
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__ _now_millisec; int _timeouts; } ;
typedef TYPE_1__ h2o_evloop_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

int32_t FUNC_2(h2o_evloop_t *VAR_0, int32_t VAR_1)
{
    uint64_t VAR_2 = FUNC_0(VAR_0->_timeouts);

    FUNC_1(VAR_0);

    if (VAR_2 <= VAR_0->_now_millisec) {
        VAR_1 = 0;
    } else {
        uint64_t VAR_3 = VAR_2 - VAR_0->_now_millisec;
        if (VAR_3 < VAR_1)
            VAR_1 = (int32_t)VAR_3;
    }

    return VAR_1;
}
