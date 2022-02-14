
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ h2o_send_state_t ;
struct TYPE_11__ {size_t bytes_sent; scalar_t__ upstream_refused; int send_server_timing; } ;
struct TYPE_12__ {TYPE_2__ req; int stream_id; int output_window; } ;
typedef TYPE_3__ h2o_http2_stream_t ;
struct TYPE_10__ {int window; } ;
struct TYPE_13__ {TYPE_1__ _write; } ;
typedef TYPE_4__ h2o_http2_conn_t ;
struct TYPE_14__ {scalar_t__ size; scalar_t__ bytes; } ;
typedef TYPE_5__ h2o_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,size_t,int ,int ,int ) ;
 int FUNC_2 (TYPE_5__**,int ,int ) ;
 int FUNC_3 (int *,size_t) ;

__attribute__((used)) static void FUNC_4(h2o_http2_conn_t *VAR_7, h2o_http2_stream_t *VAR_8, h2o_buffer_t **VAR_9, size_t VAR_10,
                               h2o_send_state_t VAR_11)
{
    FUNC_0(VAR_9 != ((void*)0));

    if (VAR_10 || VAR_11 == VAR_6) {
        FUNC_1(
            (void *)((*VAR_9)->bytes + (*VAR_9)->size), VAR_10, VAR_4,
            (VAR_11 == VAR_6 && !VAR_8->req.send_server_timing) ? VAR_2 : 0,
            VAR_8->stream_id);
        FUNC_3(&VAR_7->_write.window, VAR_10);
        FUNC_3(&VAR_8->output_window, VAR_10);
        (*VAR_9)->size += VAR_10 + VAR_3;
        VAR_8->req.bytes_sent += VAR_10;
    }

    if (VAR_11 == VAR_5) {
        FUNC_2(
            VAR_9, VAR_8->stream_id, -(VAR_8->req.upstream_refused ? VAR_1 : VAR_0));
    }
}
