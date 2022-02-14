
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_redis_socket_data_t {char* errstr; } ;
typedef int redisReply ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_1__ ev; } ;
typedef TYPE_2__ redisAsyncContext ;
typedef int h2o_redis_command_t ;


 char* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *,char const*) ;

__attribute__((used)) static void FUNC_2(redisAsyncContext *VAR_0, void *VAR_1, void *VAR_2)
{
    redisReply *VAR_3 = (redisReply *)VAR_1;
    h2o_redis_command_t *VAR_4 = (h2o_redis_command_t *)VAR_2;
    const char *VAR_5 = ((struct st_redis_socket_data_t *)VAR_0->ev.data)->errstr;
    if (VAR_5 == ((void*)0))
        VAR_5 = FUNC_0(VAR_0);
    FUNC_1(VAR_4, VAR_3, VAR_5);
}
