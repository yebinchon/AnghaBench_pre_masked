
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ redisAsyncContext ;
struct TYPE_6__ {int (* on_connect ) () ;int state; int _timeout_entry; } ;
typedef TYPE_2__ h2o_redis_client_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(const redisAsyncContext *VAR_3, int VAR_4)
{
    h2o_redis_client_t *VAR_5 = (h2o_redis_client_t *)VAR_3->data;
    if (VAR_5 == ((void*)0))
        return;

    if (VAR_4 != VAR_1) {
        FUNC_0(VAR_5, VAR_2);
        return;
    }
    FUNC_1(&VAR_5->_timeout_entry);

    VAR_5->state = VAR_0;
    if (VAR_5->on_connect != ((void*)0))
        VAR_5->on_connect();
}
