
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int window; } ;
struct st_h2o_http2client_stream_t {TYPE_3__* conn; TYPE_1__ output; } ;
typedef size_t ssize_t ;
struct TYPE_5__ {size_t max_frame_size; } ;
struct TYPE_6__ {TYPE_2__ peer_settings; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 size_t FUNC_1 (int *) ;
 size_t FUNC_2 (size_t,size_t) ;

__attribute__((used)) static size_t FUNC_3(struct st_h2o_http2client_stream_t *VAR_0)
{
    ssize_t VAR_1, VAR_2;

    if ((VAR_1 = FUNC_0(VAR_0->conn)) <= 0)
        return 0;
    if ((VAR_2 = FUNC_1(&VAR_0->output.window)) <= 0)
        return 0;
    return FUNC_2(FUNC_2(VAR_1, VAR_2), VAR_0->conn->peer_settings.max_frame_size);
}
