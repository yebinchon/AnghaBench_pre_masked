
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_22__ {int hpack_max_capacity; int hpack_capacity; } ;
struct TYPE_23__ {int read_frame; int window; TYPE_8__ header_table; } ;
struct TYPE_20__ {int cb; } ;
struct TYPE_19__ {int hpack_capacity; } ;
struct TYPE_21__ {int sent_streams; int sending_streams; TYPE_6__ defer_timeout; int buf; int window; TYPE_5__ header_table; } ;
struct TYPE_14__ {int initial_window_size; int header_table_size; } ;
struct TYPE_18__ {int cb; } ;
struct TYPE_17__ {int cb; } ;
struct TYPE_16__ {int link; int origin_url; int * sock; int * ctx; } ;
struct st_h2o_http2client_conn_t {TYPE_9__ input; TYPE_7__ output; TYPE_12__ peer_settings; TYPE_4__ keepalive_timeout; TYPE_3__ io_timeout; TYPE_2__ super; int streams; int state; } ;
typedef int h2o_url_t ;
typedef int h2o_socket_t ;
typedef int h2o_httpclient_ctx_t ;
struct TYPE_15__ {int conns; } ;
struct TYPE_13__ {TYPE_1__ http2; } ;
typedef TYPE_10__ h2o_httpclient_connection_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_12__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 struct st_h2o_http2client_conn_t* FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct st_h2o_http2client_conn_t*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static struct st_h2o_http2client_conn_t *FUNC_8(h2o_httpclient_ctx_t *VAR_9, h2o_socket_t *VAR_10, h2o_url_t *VAR_11,
                                                           h2o_httpclient_connection_pool_t *VAR_12)
{
    struct st_h2o_http2client_conn_t *VAR_13 = FUNC_4(sizeof(*VAR_13));
    FUNC_7(VAR_13, 0, sizeof(*VAR_13));
    VAR_13->super.ctx = VAR_9;
    VAR_13->super.sock = VAR_10;
    VAR_13->state = VAR_0;
    VAR_13->peer_settings = VAR_2;
    VAR_13->streams = FUNC_6(VAR_7);
    FUNC_5(((void*)0), &VAR_13->super.origin_url, VAR_11);
    if (VAR_12 != ((void*)0))
        FUNC_3(&VAR_12->http2.conns, &VAR_13->super.link);
    VAR_13->io_timeout.cb = VAR_5;
    VAR_13->keepalive_timeout.cb = VAR_6;


    VAR_13->output.header_table.hpack_capacity = VAR_1;
    FUNC_1(&VAR_13->output.window, VAR_13->peer_settings.initial_window_size);
    FUNC_0(&VAR_13->output.buf, &VAR_8);
    VAR_13->output.defer_timeout.cb = VAR_3;
    FUNC_2(&VAR_13->output.sending_streams);
    FUNC_2(&VAR_13->output.sent_streams);


    VAR_13->input.header_table.hpack_capacity = VAR_13->input.header_table.hpack_max_capacity =
        VAR_2.header_table_size;
    FUNC_1(&VAR_13->input.window, VAR_2.initial_window_size);
    VAR_13->input.read_frame = VAR_4;

    return VAR_13;
}
