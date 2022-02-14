
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int send_state; int inbufcnt; int * inbufs; } ;
struct TYPE_8__ {TYPE_1__ pending_final; scalar_t__ sending; } ;
struct st_h2o_http1_finalostream_t {TYPE_2__ informational; int super; } ;
struct TYPE_10__ {scalar_t__ _ostr_top; } ;
struct st_h2o_http1_conn_t {TYPE_5__ req; } ;
struct TYPE_9__ {struct st_h2o_http1_conn_t* data; } ;
typedef TYPE_3__ h2o_socket_t ;


 int FUNC_0 (struct st_h2o_http1_conn_t*,int) ;
 int FUNC_1 (struct st_h2o_http1_finalostream_t*,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_5__*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(h2o_socket_t *VAR_0, const char *VAR_1)
{
    struct st_h2o_http1_conn_t *VAR_2 = VAR_0->data;
    struct st_h2o_http1_finalostream_t *VAR_3 = (struct st_h2o_http1_finalostream_t *)VAR_2->req._ostr_top;
    if (VAR_1 != ((void*)0)) {
        FUNC_0(VAR_2, 1);
        return;
    }

    VAR_3->informational.sending = 0;

    if (VAR_3->informational.pending_final.inbufs != ((void*)0)) {
        FUNC_2(&VAR_3->super, &VAR_2->req, VAR_3->informational.pending_final.inbufs,
                          VAR_3->informational.pending_final.inbufcnt, VAR_3->informational.pending_final.send_state);
        return;
    }

    FUNC_1(VAR_3, VAR_0);
}
