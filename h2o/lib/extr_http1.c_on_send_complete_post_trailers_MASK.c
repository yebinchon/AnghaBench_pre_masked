
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * proceed_req; scalar_t__ http1_is_persistent; } ;
struct TYPE_5__ {int state; } ;
struct st_h2o_http1_conn_t {TYPE_2__ req; TYPE_1__ _ostr_final; } ;
struct TYPE_7__ {struct st_h2o_http1_conn_t* data; } ;
typedef TYPE_3__ h2o_socket_t ;


 int VAR_0 ;
 int FUNC_0 (struct st_h2o_http1_conn_t*) ;

__attribute__((used)) static void FUNC_1(h2o_socket_t *VAR_1, const char *VAR_2)
{
    struct st_h2o_http1_conn_t *VAR_3 = VAR_1->data;

    if (VAR_2 != ((void*)0))
        VAR_3->req.http1_is_persistent = 0;

    VAR_3->_ostr_final.state = VAR_0;
    if (VAR_3->req.proceed_req == ((void*)0))
        FUNC_0(VAR_3);
}
