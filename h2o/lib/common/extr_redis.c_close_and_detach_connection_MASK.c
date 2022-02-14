
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int _timeout_entry; TYPE_1__* _redis; int (* on_close ) (char const*) ;int state; } ;
typedef TYPE_2__ h2o_redis_client_t ;
struct TYPE_4__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(h2o_redis_client_t *VAR_1, const char *VAR_2)
{
    FUNC_0(VAR_1->_redis != ((void*)0));
    VAR_1->state = VAR_0;
    if (VAR_1->on_close != ((void*)0))
        VAR_1->on_close(VAR_2);

    VAR_1->_redis->data = ((void*)0);
    VAR_1->_redis = ((void*)0);
    FUNC_1(&VAR_1->_timeout_entry);
}
