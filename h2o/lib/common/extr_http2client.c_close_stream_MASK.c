
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * body; } ;
struct TYPE_4__ {int * buf; int sending_link; } ;
struct TYPE_6__ {int _timeout; } ;
struct st_h2o_http2client_stream_t {TYPE_2__ input; TYPE_1__ output; TYPE_3__ super; int * conn; } ;


 int FUNC_0 (struct st_h2o_http2client_stream_t*) ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct st_h2o_http2client_stream_t*) ;

__attribute__((used)) static void FUNC_7(struct st_h2o_http2client_stream_t *VAR_0)
{
    if (VAR_0->conn != ((void*)0)) {
        FUNC_6(VAR_0);
    }

    if (FUNC_4(&VAR_0->super._timeout))
        FUNC_5(&VAR_0->super._timeout);
    if (FUNC_2(&VAR_0->output.sending_link))
        FUNC_3(&VAR_0->output.sending_link);

    if (VAR_0->output.buf != ((void*)0))
        FUNC_1(&VAR_0->output.buf);
    FUNC_1(&VAR_0->input.body);

    FUNC_0(VAR_0);
}
