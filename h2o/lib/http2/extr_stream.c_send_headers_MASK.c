
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_63__ TYPE_9__ ;
typedef struct TYPE_62__ TYPE_8__ ;
typedef struct TYPE_61__ TYPE_7__ ;
typedef struct TYPE_60__ TYPE_6__ ;
typedef struct TYPE_59__ TYPE_5__ ;
typedef struct TYPE_58__ TYPE_4__ ;
typedef struct TYPE_57__ TYPE_3__ ;
typedef struct TYPE_56__ TYPE_37__ ;
typedef struct TYPE_55__ TYPE_34__ ;
typedef struct TYPE_54__ TYPE_2__ ;
typedef struct TYPE_53__ TYPE_25__ ;
typedef struct TYPE_52__ TYPE_22__ ;
typedef struct TYPE_51__ TYPE_21__ ;
typedef struct TYPE_50__ TYPE_20__ ;
typedef struct TYPE_49__ TYPE_1__ ;
typedef struct TYPE_48__ TYPE_19__ ;
typedef struct TYPE_47__ TYPE_18__ ;
typedef struct TYPE_46__ TYPE_17__ ;
typedef struct TYPE_45__ TYPE_16__ ;
typedef struct TYPE_44__ TYPE_15__ ;
typedef struct TYPE_43__ TYPE_14__ ;
typedef struct TYPE_42__ TYPE_13__ ;
typedef struct TYPE_41__ TYPE_12__ ;
typedef struct TYPE_40__ TYPE_11__ ;
typedef struct TYPE_39__ TYPE_10__ ;


typedef int ssize_t ;
struct TYPE_50__ {int len; int base; } ;
typedef TYPE_20__ h2o_iovec_t ;
struct TYPE_48__ {scalar_t__ promise_sent; } ;
struct TYPE_56__ {int size; int entries; } ;
struct TYPE_47__ {int status; TYPE_37__ headers; int content_length; } ;
struct TYPE_43__ {int len; int base; } ;
struct TYPE_55__ {TYPE_10__* entries; } ;
struct TYPE_63__ {int path; int authority; TYPE_8__* scheme; } ;
struct TYPE_59__ {int response_start_at; } ;
struct TYPE_53__ {TYPE_18__ res; int pool; scalar_t__ send_server_timing; TYPE_13__* hostconf; TYPE_14__ path; TYPE_34__ headers; TYPE_9__ input; TYPE_5__ timestamps; scalar_t__ reprocess_if_too_early; } ;
struct TYPE_51__ {int stream_id; TYPE_19__ push; int _link; TYPE_25__ req; int _scheduler; int * cache_digests; } ;
typedef TYPE_21__ h2o_http2_stream_t ;
struct TYPE_58__ {int buf; int streams_to_proceed; } ;
struct TYPE_61__ {TYPE_6__* ctx; } ;
struct TYPE_54__ {int max_frame_size; } ;
struct TYPE_49__ {scalar_t__ open; } ;
struct TYPE_45__ {int half_closed; int send_body; } ;
struct TYPE_44__ {scalar_t__ open; } ;
struct TYPE_46__ {TYPE_1__ priority; TYPE_16__ push; TYPE_15__ pull; } ;
struct TYPE_52__ {TYPE_4__ _write; TYPE_7__ super; TYPE_2__ peer_settings; int _output_header_table; int scheduler; TYPE_17__ num_streams; int * casper; } ;
typedef TYPE_22__ h2o_http2_conn_t ;
struct TYPE_62__ {int name; } ;
struct TYPE_60__ {TYPE_3__* globalconf; int loop; } ;
struct TYPE_57__ {int server_name; } ;
struct TYPE_40__ {scalar_t__ capacity_bits; scalar_t__ track_all_types; } ;
struct TYPE_41__ {scalar_t__ reprioritize_blocking_assets; TYPE_11__ casper; } ;
struct TYPE_42__ {TYPE_12__ http2; } ;
struct TYPE_39__ {TYPE_20__ value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,TYPE_37__*,int ,int *,int ,...) ;
 int FUNC_2 (int *,TYPE_37__*,int ,int ,int *,int ) ;
 int FUNC_3 (TYPE_25__*,int) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ,int ) ;
 TYPE_20__ FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_34__*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int ,int ,int,int ,int ,int *,int ) ;
 TYPE_20__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,int ,int) ;
 int FUNC_11 (TYPE_22__*,TYPE_21__*) ;
 int FUNC_12 (TYPE_22__*) ;
 int FUNC_13 (int *,int ,int ) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,int,int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (TYPE_22__*,TYPE_21__*) ;
 int FUNC_18 (TYPE_22__*,TYPE_21__*,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *,int *) ;
 scalar_t__ FUNC_21 (TYPE_25__*) ;

__attribute__((used)) static int FUNC_22(h2o_http2_conn_t *VAR_6, h2o_http2_stream_t *VAR_7)
{
    if (VAR_7->req.res.status == 425 && VAR_7->req.reprocess_if_too_early) {
        FUNC_11(VAR_6, VAR_7);
        return -1;
    }

    VAR_7->req.timestamps.response_start_at = FUNC_7(VAR_6->super.ctx->loop);


    if (FUNC_16(VAR_7->stream_id)) {
        if (400 <= VAR_7->req.res.status)
            goto CancelPush;
        if (VAR_7->cache_digests != ((void*)0)) {
            ssize_t VAR_8 = FUNC_6(&VAR_7->req.headers, VAR_4, -1);
            if (VAR_8 != -1) {
                h2o_iovec_t VAR_9 = FUNC_5(&VAR_7->req.pool, VAR_7->req.input.scheme->name, FUNC_19(FUNC_0("://")),
                                             VAR_7->req.input.authority, VAR_7->req.input.path);
                h2o_iovec_t *VAR_10 = &VAR_7->req.headers.entries[VAR_8].value;
                if (FUNC_4(VAR_7->cache_digests, VAR_9.base, VAR_9.len, VAR_10->base, VAR_10->len) ==
                    VAR_0)
                    goto CancelPush;
            }
        }
    }


    if (VAR_7->cache_digests != ((void*)0) && VAR_7->req.hostconf->http2.casper.capacity_bits != 0) {
        FUNC_1(&VAR_7->req.pool, &VAR_7->req.res.headers, VAR_5, ((void*)0),
                       FUNC_0("h2o_casper=; Path=/; Expires=Sat, 01 Jan 2000 00:00:00 GMT"));
    }


    if (VAR_6->casper != ((void*)0)) {

        if (VAR_7->req.hostconf->http2.casper.track_all_types || FUNC_21(&VAR_7->req)) {
            if (FUNC_10(VAR_6->casper, VAR_7->req.path.base, VAR_7->req.path.len, 1)) {

                if (FUNC_16(VAR_7->stream_id))
                    goto CancelPush;
            }
        }
        if (VAR_7->cache_digests != ((void*)0))
            goto SkipCookie;




        if (FUNC_16(VAR_7->stream_id)) {
            if (!(VAR_6->num_streams.pull.open == 0 && (VAR_6->num_streams.push.half_closed - VAR_6->num_streams.push.send_body) == 1))
                goto SkipCookie;
        } else {
            if (VAR_6->num_streams.push.half_closed - VAR_6->num_streams.push.send_body != 0)
                goto SkipCookie;
        }
        h2o_iovec_t VAR_11 = FUNC_9(VAR_6->casper);
        FUNC_1(&VAR_7->req.pool, &VAR_7->req.res.headers, VAR_5, ((void*)0), VAR_11.base, VAR_11.len);
    SkipCookie:;
    }

    if (FUNC_16(VAR_7->stream_id)) {

        if (!VAR_7->push.promise_sent)
            FUNC_17(VAR_6, VAR_7);

        if (FUNC_21(&VAR_7->req))
            FUNC_15(&VAR_7->_scheduler, &VAR_6->scheduler, 257, 0);
    } else {



        if (VAR_6->num_streams.priority.open == 0 && VAR_7->req.hostconf->http2.reprioritize_blocking_assets &&
            FUNC_14(&VAR_7->_scheduler) == &VAR_6->scheduler && FUNC_21(&VAR_7->req))
            FUNC_15(&VAR_7->_scheduler, &VAR_6->scheduler, 257, 0);
    }


    if (FUNC_16(VAR_7->stream_id))
        FUNC_2(&VAR_7->req.pool, &VAR_7->req.res.headers, FUNC_0("x-http2-push"), 0, ((void*)0),
                              FUNC_0("pushed"));
    if (VAR_7->req.send_server_timing)
        FUNC_3(&VAR_7->req, 1);
    FUNC_8(&VAR_6->_write.buf, &VAR_6->_output_header_table, VAR_7->stream_id,
                               VAR_6->peer_settings.max_frame_size, VAR_7->req.res.status, VAR_7->req.res.headers.entries,
                               VAR_7->req.res.headers.size, &VAR_6->super.ctx->globalconf->server_name,
                               VAR_7->req.res.content_length);
    FUNC_12(VAR_6);
    FUNC_18(VAR_6, VAR_7, VAR_3);

    return 0;

CancelPush:
    FUNC_2(&VAR_7->req.pool, &VAR_7->req.res.headers, FUNC_0("x-http2-push"), 0, ((void*)0),
                          FUNC_0("cancelled"));
    FUNC_18(VAR_6, VAR_7, VAR_2);
    FUNC_20(&VAR_6->_write.streams_to_proceed, &VAR_7->_link);
    if (VAR_7->push.promise_sent) {
        FUNC_13(&VAR_6->_write.buf, VAR_7->stream_id, -VAR_1);
        FUNC_12(VAR_6);
    }
    return -1;
}
