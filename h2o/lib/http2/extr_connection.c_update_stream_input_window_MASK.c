
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bytes_unnotified; int window; } ;
struct TYPE_5__ {TYPE_1__ input_window; int stream_id; } ;
typedef TYPE_2__ h2o_http2_stream_t ;
typedef int h2o_http2_conn_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *,scalar_t__) ;

void FUNC_2(h2o_http2_conn_t *VAR_0, h2o_http2_stream_t *VAR_1, size_t VAR_2)
{
    VAR_1->input_window.bytes_unnotified += VAR_2;
    if (VAR_1->input_window.bytes_unnotified >= FUNC_0(&VAR_1->input_window.window)) {
        FUNC_1(VAR_0, VAR_1->stream_id, &VAR_1->input_window.window, VAR_1->input_window.bytes_unnotified);
        VAR_1->input_window.bytes_unnotified = 0;
    }
}
