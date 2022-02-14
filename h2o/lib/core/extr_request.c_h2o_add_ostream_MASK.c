
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pool; } ;
typedef TYPE_1__ h2o_req_t ;
struct TYPE_8__ {int * send_informational; int * stop; int * do_send; struct TYPE_8__* next; } ;
typedef TYPE_2__ h2o_ostream_t ;


 TYPE_2__* FUNC_0 (int *,size_t,size_t) ;

h2o_ostream_t *FUNC_1(h2o_req_t *VAR_0, size_t VAR_1, size_t VAR_2, h2o_ostream_t **VAR_3)
{
    h2o_ostream_t *VAR_4 = FUNC_0(&VAR_0->pool, VAR_1, VAR_2);
    VAR_4->next = *VAR_3;
    VAR_4->do_send = ((void*)0);
    VAR_4->stop = ((void*)0);
    VAR_4->send_informational = ((void*)0);

    *VAR_3 = VAR_4;

    return VAR_4;
}
