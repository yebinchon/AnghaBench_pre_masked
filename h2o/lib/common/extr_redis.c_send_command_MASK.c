
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_1__ h2o_redis_command_t ;
struct TYPE_8__ {scalar_t__ state; int _redis; } ;
typedef TYPE_2__ h2o_redis_client_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,TYPE_1__*,char const*,size_t) ;

__attribute__((used)) static void FUNC_2(h2o_redis_client_t *VAR_5, h2o_redis_command_t *VAR_6, const char *VAR_7, size_t VAR_8)
{
    if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_6, ((void*)0), "Failed to create command");
        return;
    }

    if (VAR_5->state == VAR_1) {
        FUNC_0(VAR_6, ((void*)0), VAR_3);
        return;
    }

    if (VAR_6->type == VAR_0) {

        FUNC_0(VAR_6, ((void*)0), "Unsupported command");
        return;
    }

    int VAR_9 = FUNC_1(VAR_5->_redis, VAR_4, VAR_6, VAR_7, VAR_8);
    if (VAR_9 != VAR_2) {
        FUNC_0(VAR_6, ((void*)0), "Failed to send command");
    }
}
