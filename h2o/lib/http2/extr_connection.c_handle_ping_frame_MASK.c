
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int data; } ;
typedef TYPE_2__ h2o_http2_ping_payload_t ;
struct TYPE_12__ {int flags; } ;
typedef TYPE_3__ h2o_http2_frame_t ;
struct TYPE_10__ {int buf; } ;
struct TYPE_13__ {TYPE_1__ _write; } ;
typedef TYPE_4__ h2o_http2_conn_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,char const**) ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static int FUNC_3(h2o_http2_conn_t *VAR_1, h2o_http2_frame_t *VAR_2, const char **VAR_3)
{
    h2o_http2_ping_payload_t VAR_4;
    int VAR_5;

    if ((VAR_5 = FUNC_1(&VAR_4, VAR_2, VAR_3)) != 0)
        return VAR_5;

    if ((VAR_2->flags & VAR_0) == 0) {
        FUNC_2(&VAR_1->_write.buf, 1, VAR_4.data);
        FUNC_0(VAR_1);
    }

    return 0;
}
