
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int sending_link; TYPE_1__* buf; int window; } ;
struct st_h2o_http2client_stream_t {TYPE_4__ output; TYPE_3__* conn; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {int sending_streams; } ;
struct TYPE_7__ {TYPE_2__ output; } ;
struct TYPE_5__ {scalar_t__ size; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct st_h2o_http2client_stream_t *VAR_0, ssize_t VAR_1)
{
    ssize_t VAR_2 = FUNC_1(&VAR_0->output.window);
    if (FUNC_2(&VAR_0->output.window, VAR_1) != 0)
        return -1;
    ssize_t VAR_3 = FUNC_1(&VAR_0->output.window);
    if (VAR_2 <= 0 && 0 < VAR_3 && VAR_0->output.buf != ((void*)0) && VAR_0->output.buf->size != 0) {
        FUNC_0(!FUNC_4(&VAR_0->output.sending_link));
        FUNC_3(&VAR_0->conn->output.sending_streams, &VAR_0->output.sending_link);
    }
    return 0;
}
