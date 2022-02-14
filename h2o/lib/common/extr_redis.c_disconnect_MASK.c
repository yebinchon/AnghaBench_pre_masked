
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct st_redis_socket_data_t {char const* errstr; } ;
struct TYPE_7__ {struct st_redis_socket_data_t* data; } ;
struct TYPE_8__ {TYPE_1__ ev; } ;
typedef TYPE_2__ redisAsyncContext ;
struct TYPE_9__ {scalar_t__ state; TYPE_2__* _redis; } ;
typedef TYPE_3__ h2o_redis_client_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,char const*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(h2o_redis_client_t *VAR_1, const char *VAR_2)
{
    FUNC_0(VAR_1->state != VAR_0);
    FUNC_0(VAR_1->_redis != ((void*)0));

    redisAsyncContext *VAR_3 = VAR_1->_redis;
    struct st_redis_socket_data_t *VAR_4 = VAR_3->ev.data;
    VAR_4->errstr = VAR_2;
    FUNC_1(VAR_1, VAR_2);
    FUNC_2(VAR_3);
}
