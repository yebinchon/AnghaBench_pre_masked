
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int max_streams_bidi; int max_streams_uni; int max_data; } ;
struct TYPE_13__ {TYPE_4__ transport_params; } ;
struct TYPE_14__ {TYPE_5__ peer; } ;
struct TYPE_9__ {int bidi; int uni; } ;
struct TYPE_10__ {int permitted; } ;
struct TYPE_11__ {TYPE_1__ max_streams; TYPE_2__ max_data; } ;
struct TYPE_15__ {TYPE_6__ super; TYPE_3__ egress; } ;
typedef TYPE_7__ quicly_conn_t ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(quicly_conn_t *VAR_0)
{
    int VAR_1;

    VAR_0->egress.max_data.permitted = VAR_0->super.peer.transport_params.max_data;
    if ((VAR_1 = FUNC_0(&VAR_0->egress.max_streams.uni, VAR_0->super.peer.transport_params.max_streams_uni)) != 0)
        return VAR_1;
    if ((VAR_1 = FUNC_0(&VAR_0->egress.max_streams.bidi, VAR_0->super.peer.transport_params.max_streams_bidi)) != 0)
        return VAR_1;

    return 0;
}
