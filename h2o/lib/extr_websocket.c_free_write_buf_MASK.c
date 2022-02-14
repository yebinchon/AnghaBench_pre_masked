
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t cnt; TYPE_1__* bufs; } ;
struct TYPE_7__ {TYPE_2__ _write_buf; } ;
typedef TYPE_3__ h2o_websocket_conn_t ;
struct TYPE_5__ {int base; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(h2o_websocket_conn_t *VAR_0)
{
    size_t VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->_write_buf.cnt; ++VAR_1)
        FUNC_0(VAR_0->_write_buf.bufs[VAR_1].base);
}
