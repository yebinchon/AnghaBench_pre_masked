
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int timeout_entry; int * buf_in_flight; } ;
struct TYPE_6__ {TYPE_1__ _write; int state; } ;
typedef TYPE_2__ h2o_http2_conn_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(h2o_http2_conn_t *VAR_1)
{
    VAR_1->state = VAR_0;

    if (VAR_1->_write.buf_in_flight != ((void*)0) || FUNC_1(&VAR_1->_write.timeout_entry)) {

    } else {
        FUNC_0(VAR_1);
        return -1;
    }
    return 0;
}
