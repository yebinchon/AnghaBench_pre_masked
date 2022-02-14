
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {scalar_t__ res; } ;
struct st_h2o_http2client_stream_t {TYPE_1__ state; } ;
struct TYPE_8__ {TYPE_5__* headers_unparsed; int read_frame; } ;
struct st_h2o_http2client_conn_t {TYPE_2__ input; } ;
typedef int ssize_t ;
struct TYPE_9__ {scalar_t__ type; int flags; scalar_t__ length; int payload; int stream_id; } ;
typedef TYPE_3__ h2o_http2_frame_t ;
struct TYPE_10__ {scalar_t__ size; scalar_t__ bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct st_h2o_http2client_stream_t* FUNC_0 (struct st_h2o_http2client_conn_t*,int ) ;
 int FUNC_1 (TYPE_5__**) ;
 int FUNC_2 (TYPE_5__**,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,int const*,size_t,int ,char const**) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__) ;
 int FUNC_5 (struct st_h2o_http2client_conn_t*,struct st_h2o_http2client_stream_t*,int const*,scalar_t__,char const**,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct st_h2o_http2client_conn_t *VAR_8, const uint8_t *VAR_9, size_t VAR_10,
                                              const char **VAR_11)
{
    h2o_http2_frame_t VAR_12;
    ssize_t VAR_13;
    struct st_h2o_http2client_stream_t *VAR_14;
    int VAR_15;

    if ((VAR_13 = FUNC_3(&VAR_12, VAR_9, VAR_10, VAR_4, VAR_11)) < 0)
        return VAR_13;
    if (VAR_12.type != VAR_3) {
        *VAR_11 = "expected CONTINUATION frame";
        return VAR_0;
    }

    if ((VAR_14 = FUNC_0(VAR_8, VAR_12.stream_id)) == ((void*)0) || VAR_14->state.res == VAR_6) {
        *VAR_11 = "unexpected stream id in CONTINUATION frame";
        return VAR_0;
    }

    if (VAR_14->state.res == VAR_5) {

        return VAR_13;
    }

    FUNC_2(&VAR_8->input.headers_unparsed, VAR_12.length);
    FUNC_4(VAR_8->input.headers_unparsed->bytes + VAR_8->input.headers_unparsed->size, VAR_12.payload, VAR_12.length);
    VAR_8->input.headers_unparsed->size += VAR_12.length;

    if ((VAR_12.flags & VAR_1) != 0) {
        int VAR_16 = (VAR_12.flags & VAR_2) != 0;
        VAR_8->input.read_frame = VAR_7;
        VAR_15 = FUNC_5(VAR_8, VAR_14, (const uint8_t *)VAR_8->input.headers_unparsed->bytes, VAR_8->input.headers_unparsed->size,
                       VAR_11, VAR_16);
        if (VAR_15 != 0)
            VAR_13 = VAR_15;
        FUNC_1(&VAR_8->input.headers_unparsed);
        VAR_8->input.headers_unparsed = ((void*)0);
    }

    return VAR_13;
}
