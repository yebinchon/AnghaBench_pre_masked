
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int timeout; int * loop; } ;
struct TYPE_6__ {TYPE_1__ _interval_cb; } ;
typedef TYPE_2__ h2o_socketpool_t ;
typedef int h2o_loop_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_3(h2o_socketpool_t *VAR_2, h2o_loop_t *VAR_3)
{
    uint64_t VAR_4 = FUNC_0(VAR_2);
    if (VAR_4 != VAR_1) {
        if (VAR_3 == VAR_2->_interval_cb.loop && !FUNC_1(&VAR_2->_interval_cb.timeout)) {
            if (VAR_4 < VAR_0)
                VAR_4 = VAR_0;
            FUNC_2(VAR_2->_interval_cb.loop, VAR_4, &VAR_2->_interval_cb.timeout);
        }
    }
}
