
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int _pending; } ;
typedef TYPE_1__ h2o_hostinfo_getaddr_req_t ;
struct TYPE_5__ {scalar_t__ num_threads_idle; scalar_t__ num_threads; int mutex; int cond; int pending; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_5(h2o_hostinfo_getaddr_req_t *VAR_2)
{
    FUNC_3(&VAR_1.mutex);

    FUNC_1(&VAR_1.pending, &VAR_2->_pending);

    if (VAR_1.num_threads_idle == 0 && VAR_1.num_threads < VAR_0)
        FUNC_0();

    FUNC_2(&VAR_1.cond);
    FUNC_4(&VAR_1.mutex);
}
