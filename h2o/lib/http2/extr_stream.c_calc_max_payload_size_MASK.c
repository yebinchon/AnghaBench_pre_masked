
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_8__ {int output_window; } ;
typedef TYPE_2__ h2o_http2_stream_t ;
struct TYPE_7__ {size_t max_frame_size; } ;
struct TYPE_9__ {TYPE_1__ peer_settings; } ;
typedef TYPE_3__ h2o_http2_conn_t ;


 size_t FUNC_0 (TYPE_3__*) ;
 size_t FUNC_1 (int *) ;
 size_t FUNC_2 (size_t,size_t) ;

__attribute__((used)) static size_t FUNC_3(h2o_http2_conn_t *VAR_0, h2o_http2_stream_t *VAR_1)
{
    ssize_t VAR_2, VAR_3;

    if ((VAR_2 = FUNC_0(VAR_0)) <= 0)
        return 0;
    if ((VAR_3 = FUNC_1(&VAR_1->output_window)) <= 0)
        return 0;
    return FUNC_2(FUNC_2(VAR_2, VAR_3), VAR_0->peer_settings.max_frame_size);
}
