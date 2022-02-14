
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int stream_id; } ;
typedef TYPE_2__ h2o_http2_stream_t ;
struct TYPE_9__ {int buf; } ;
struct TYPE_11__ {TYPE_1__ _write; } ;
typedef TYPE_3__ h2o_http2_conn_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(h2o_http2_conn_t *VAR_1, h2o_http2_stream_t *VAR_2)
{
    FUNC_1(&VAR_1->_write.buf, VAR_2->stream_id, -VAR_0);
    FUNC_0(VAR_1);
    FUNC_2(VAR_1, VAR_2);
}
