
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_9__ {scalar_t__ err; TYPE_2__* data; } ;
typedef TYPE_1__ redisAsyncContext ;
struct TYPE_10__ {scalar_t__ state; scalar_t__ connect_timeout; int _timeout_entry; int loop; TYPE_1__* _redis; } ;
typedef TYPE_2__ h2o_redis_client_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int ,scalar_t__,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_4 (char const*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;

void FUNC_7(h2o_redis_client_t *VAR_6, const char *VAR_7, uint16_t VAR_8)
{
    if (VAR_6->state != VAR_0) {
        return;
    }

    redisAsyncContext *VAR_9 = FUNC_4(VAR_7, VAR_8);
    if (VAR_9 == ((void*)0)) {
        FUNC_2("no memory");
    }

    VAR_6->_redis = VAR_9;
    VAR_6->_redis->data = VAR_6;
    VAR_6->state = VAR_1;

    FUNC_0(VAR_9, VAR_6->loop);
    FUNC_5(VAR_9, VAR_4);
    FUNC_6(VAR_9, VAR_5);

    if (VAR_9->err != VAR_2) {

        FUNC_1(VAR_6, VAR_3);
        return;
    }

    if (VAR_6->connect_timeout != 0)
        FUNC_3(VAR_6->loop, VAR_6->connect_timeout, &VAR_6->_timeout_entry);
}
