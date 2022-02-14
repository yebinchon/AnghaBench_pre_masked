
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int res; } ;
struct TYPE_10__ {int * on_body; int * (* on_head ) (TYPE_5__*,int *,int,int,int ,int ,int ,int ) ;} ;
struct TYPE_12__ {scalar_t__ (* informational_cb ) (TYPE_5__*,int ,int,int ,int ,int ) ;TYPE_3__ _cb; int pool; } ;
struct TYPE_13__ {int size; int entries; } ;
struct TYPE_9__ {int status; TYPE_7__ headers; } ;
struct st_h2o_http2client_stream_t {int stream_id; TYPE_4__ state; TYPE_5__ super; TYPE_2__ input; } ;
struct TYPE_8__ {int header_table; } ;
struct st_h2o_http2client_conn_t {TYPE_1__ input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct st_h2o_http2client_stream_t*,int ) ;
 int FUNC_2 (struct st_h2o_http2client_stream_t*) ;
 int FUNC_3 (struct st_h2o_http2client_stream_t*) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int *,int*,TYPE_7__*,int const*,size_t,char const**) ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct st_h2o_http2client_conn_t*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int ,int,int ,int ,int ) ;
 int * FUNC_8 (TYPE_5__*,int *,int,int,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct st_h2o_http2client_conn_t *VAR_8, struct st_h2o_http2client_stream_t *VAR_9, const uint8_t *VAR_10,
                   size_t VAR_11, const char **VAR_12, int VAR_13)
{
    int VAR_14;



    if ((VAR_14 = FUNC_4(VAR_9->super.pool, VAR_5, &VAR_8->input.header_table,
                                        &VAR_9->input.status, &VAR_9->input.headers, VAR_10, VAR_11, VAR_12)) != 0) {
        if (VAR_14 == VAR_2) {
            VAR_14 = VAR_3;
            goto Failed;
        }
        return VAR_14;
    }

    if (100 <= VAR_9->input.status && VAR_9->input.status <= 199) {
        if (VAR_9->input.status == 101) {
            VAR_14 = VAR_3;
            goto Failed;
        }
        if (VAR_9->super.informational_cb != ((void*)0) &&
            VAR_9->super.informational_cb(&VAR_9->super, 0, VAR_9->input.status, FUNC_5(((void*)0), 0),
                                           VAR_9->input.headers.entries, VAR_9->input.headers.size) != 0) {
            VAR_14 = VAR_1;
            goto SendRSTStream;
        }
        return 0;
    }

    VAR_9->super._cb.on_body =
        VAR_9->super._cb.on_head(&VAR_9->super, VAR_13 ? VAR_7 : ((void*)0), 0x200, VAR_9->input.status,
                                  FUNC_5(((void*)0), 0), VAR_9->input.headers.entries, VAR_9->input.headers.size, 0);

    if (VAR_13) {
        FUNC_2(VAR_9);
        return 0;
    }
    if (VAR_9->super._cb.on_body == ((void*)0)) {






        VAR_14 = VAR_0;
        goto SendRSTStream;
    }

    VAR_9->state.res = VAR_4;

    return 0;

Failed:
    FUNC_0(VAR_14 == VAR_3);
    FUNC_1(VAR_9, VAR_6);
SendRSTStream:
    FUNC_6(VAR_8, VAR_9->stream_id, VAR_14);
    FUNC_3(VAR_9);
    return 0;
}
