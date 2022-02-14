
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * _cb; int _pending; } ;
typedef TYPE_1__ h2o_hostinfo_getaddr_req_t ;
struct TYPE_6__ {int mutex; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__ VAR_0 ;

void FUNC_5(h2o_hostinfo_getaddr_req_t *VAR_1)
{
    int VAR_2 = 0;

    FUNC_3(&VAR_0.mutex);

    if (FUNC_1(&VAR_1->_pending)) {
        FUNC_2(&VAR_1->_pending);
        VAR_2 = 1;
    } else {
        VAR_1->_cb = ((void*)0);
    }

    FUNC_4(&VAR_0.mutex);

    if (VAR_2)
        FUNC_0(VAR_1);
}
