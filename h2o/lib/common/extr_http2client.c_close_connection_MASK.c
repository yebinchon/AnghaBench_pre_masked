
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int defer_timeout; int * buf_in_flight; } ;
struct TYPE_3__ {int sock; } ;
struct st_h2o_http2client_conn_t {TYPE_2__ output; TYPE_1__ super; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct st_h2o_http2client_conn_t*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct st_h2o_http2client_conn_t *VAR_1)
{
    VAR_1->state = VAR_0;
    FUNC_1(VAR_1->super.sock);

    if (VAR_1->output.buf_in_flight != ((void*)0) || FUNC_2(&VAR_1->output.defer_timeout)) {

    } else {
        FUNC_0(VAR_1);
        return -1;
    }
    return 0;
}
