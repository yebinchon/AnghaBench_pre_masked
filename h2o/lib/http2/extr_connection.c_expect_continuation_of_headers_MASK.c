
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_18__ {scalar_t__ state; int stream_id; } ;
typedef TYPE_1__ h2o_http2_stream_t ;
struct TYPE_19__ {scalar_t__ type; scalar_t__ length; int flags; int payload; int stream_id; } ;
typedef TYPE_2__ h2o_http2_frame_t ;
struct TYPE_20__ {TYPE_14__* _headers_unparsed; int _read_expect; } ;
typedef TYPE_3__ h2o_http2_conn_t ;
struct TYPE_17__ {scalar_t__ size; scalar_t__ bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_14__**) ;
 int FUNC_1 (TYPE_14__**,scalar_t__) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_2__*,int const*,size_t,int ,char const**) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*,int const*,scalar_t__,char const**) ;
 int FUNC_6 (TYPE_3__*,TYPE_1__*,int const*,scalar_t__,char const**) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_9(h2o_http2_conn_t *VAR_9, const uint8_t *VAR_10, size_t VAR_11, const char **VAR_12)
{
    h2o_http2_frame_t VAR_13;
    ssize_t VAR_14;
    h2o_http2_stream_t *VAR_15;
    int VAR_16;

    if ((VAR_14 = FUNC_3(&VAR_13, VAR_10, VAR_11, VAR_4, VAR_12)) < 0)
        return VAR_14;
    if (VAR_13.type != VAR_3) {
        *VAR_12 = "expected CONTINUATION frame";
        return VAR_0;
    }

    if ((VAR_15 = FUNC_2(VAR_9, VAR_13.stream_id)) == ((void*)0) ||
        !(VAR_15->state == VAR_6 || VAR_15->state == VAR_5)) {
        *VAR_12 = "unexpected stream id in CONTINUATION frame";
        return VAR_0;
    }

    if (VAR_9->_headers_unparsed->size + VAR_13.length <= VAR_7) {
        FUNC_1(&VAR_9->_headers_unparsed, VAR_13.length);
        FUNC_7(VAR_9->_headers_unparsed->bytes + VAR_9->_headers_unparsed->size, VAR_13.payload, VAR_13.length);
        VAR_9->_headers_unparsed->size += VAR_13.length;

        if ((VAR_13.flags & VAR_2) != 0) {
            VAR_9->_read_expect = VAR_8;
            if (VAR_15->state == VAR_6) {
                VAR_16 = FUNC_5(VAR_9, VAR_15, (const uint8_t *)VAR_9->_headers_unparsed->bytes,
                                               VAR_9->_headers_unparsed->size, VAR_12);
            } else {
                VAR_16 = FUNC_6(VAR_9, VAR_15, (const uint8_t *)VAR_9->_headers_unparsed->bytes,
                                               VAR_9->_headers_unparsed->size, VAR_12);
            }
            if (VAR_16 != 0)
                VAR_14 = VAR_16;
            FUNC_0(&VAR_9->_headers_unparsed);
            VAR_9->_headers_unparsed = ((void*)0);
        }
    } else {

        FUNC_8(VAR_9, VAR_15->stream_id, VAR_1);
        FUNC_4(VAR_9, VAR_15);
    }

    return VAR_14;
}
