
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int req; int _link; } ;
typedef TYPE_2__ h2o_http2_stream_t ;
struct TYPE_7__ {int blocked_streams; } ;
struct TYPE_9__ {TYPE_1__ early_data; TYPE_4__* sock; } ;
typedef TYPE_3__ h2o_http2_conn_t ;
struct TYPE_10__ {int * ssl; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;

void FUNC_3(h2o_http2_conn_t *VAR_0, h2o_http2_stream_t *VAR_1)
{
    if (VAR_0->sock->ssl != ((void*)0) && FUNC_2(VAR_0->sock)) {
        FUNC_0(&VAR_0->early_data.blocked_streams, &VAR_1->_link);
    } else {
        FUNC_1(&VAR_1->req);
    }
}
