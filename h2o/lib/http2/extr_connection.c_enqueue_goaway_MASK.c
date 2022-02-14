
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int h2o_iovec_t ;
struct TYPE_7__ {int max_open; } ;
struct TYPE_6__ {int buf; } ;
struct TYPE_8__ {scalar_t__ state; TYPE_2__ pull_stream_ids; TYPE_1__ _write; } ;
typedef TYPE_3__ h2o_http2_conn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(h2o_http2_conn_t *VAR_2, int VAR_3, h2o_iovec_t VAR_4)
{
    if (VAR_2->state < VAR_1) {

        FUNC_1(&VAR_2->_write.buf, VAR_2->pull_stream_ids.max_open, VAR_3, VAR_4);
        FUNC_0(VAR_2);
        VAR_2->state = VAR_0;
    }
}
