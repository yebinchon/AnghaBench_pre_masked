
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int node; } ;
struct TYPE_8__ {TYPE_6__ ref; } ;
struct st_h2o_http3_server_stream_t {TYPE_1__ scheduler; } ;
struct TYPE_9__ {int quic; } ;
struct st_h2o_http3_server_conn_t {TYPE_2__ h3; } ;
struct TYPE_10__ {struct st_h2o_http3_server_stream_t* data; } ;
typedef TYPE_3__ quicly_stream_t ;
typedef int int64_t ;
typedef int h2o_http3_priority_element_type_t ;
struct TYPE_11__ {int node; } ;
typedef TYPE_4__ h2o_http2_scheduler_openref_t ;
typedef int h2o_http2_scheduler_node_t ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (struct st_h2o_http3_server_conn_t*,int,int) ;
 int * FUNC_2 (struct st_h2o_http3_server_conn_t*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_3__* FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct st_h2o_http3_server_conn_t *VAR_3, h2o_http2_scheduler_node_t **VAR_4,
                              h2o_http3_priority_element_type_t VAR_5, int64_t VAR_6, h2o_http2_scheduler_node_t *VAR_7,
                              const char **VAR_8)
{
    switch (VAR_5) {
    case 129: {


        quicly_stream_t *VAR_9;
        if (!(FUNC_7(VAR_6) && !FUNC_8(VAR_6) &&
              VAR_6 / 4 < FUNC_4(VAR_3->h3.quic, 0))) {
            *VAR_8 = "invalid request stream id in PRIORITY frame";
            return VAR_0;
        }
        if ((VAR_9 = FUNC_6(VAR_3->h3.quic, VAR_6)) != ((void*)0)) {
            struct st_h2o_http3_server_stream_t *VAR_10 = VAR_9->data;
            FUNC_0(VAR_10 != ((void*)0));
            FUNC_0(FUNC_3(&VAR_10->scheduler.ref));
            *VAR_4 = &VAR_10->scheduler.ref.node;
        } else {
            h2o_http2_scheduler_openref_t *VAR_11 =
                FUNC_1(VAR_3, VAR_6, VAR_6 >= FUNC_5(VAR_3->h3.quic, 0));

            *VAR_4 = VAR_11 != ((void*)0) ? &VAR_11->node : FUNC_2(VAR_3);
        }

    } break;

    case 130:
        *VAR_8 = "unexpectedly found a push stream id in PRIORITY frame";
        return VAR_1;

    case 131:

        if (VAR_6 >= VAR_2) {
            *VAR_8 = "invalid placeholder id found in PRIORITY frame";
            return VAR_0;
        }
        *VAR_4 = &FUNC_1(VAR_3, -1 - VAR_6, 1)->node;
        break;

    case 128:
        if (VAR_7 == ((void*)0)) {
            *VAR_8 = "invalid depedency type in PRIORITY frame";
            return VAR_0;
        }
        *VAR_4 = VAR_7;
        break;
    }

    return 0;
}
