
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int head; int * tail_ref; } ;
struct TYPE_8__ {int _now_millisec; int _timeouts; TYPE_1__ _statechanged; } ;
typedef TYPE_2__ h2o_evloop_t ;


 TYPE_2__* FUNC_0 (size_t) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_2__*,int ,size_t) ;
 int FUNC_3 (TYPE_2__*) ;

h2o_evloop_t *FUNC_4(size_t VAR_0)
{
    h2o_evloop_t *VAR_1 = FUNC_0(VAR_0);

    FUNC_2(VAR_1, 0, VAR_0);
    VAR_1->_statechanged.tail_ref = &VAR_1->_statechanged.head;
    FUNC_3(VAR_1);

    VAR_1->_timeouts = FUNC_1(3, VAR_1->_now_millisec);

    return VAR_1;
}
