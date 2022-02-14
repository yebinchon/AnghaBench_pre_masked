
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _timeout_entry; int state; int * loop; } ;
typedef TYPE_1__ h2o_redis_client_t ;
typedef int h2o_loop_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int ,size_t) ;
 int VAR_1 ;

h2o_redis_client_t *FUNC_3(h2o_loop_t *VAR_2, size_t VAR_3)
{
    h2o_redis_client_t *VAR_4 = FUNC_0(VAR_3);
    FUNC_2(VAR_4, 0, VAR_3);

    VAR_4->loop = VAR_2;
    VAR_4->state = VAR_0;
    FUNC_1(&VAR_4->_timeout_entry, VAR_1);

    return VAR_4;
}
