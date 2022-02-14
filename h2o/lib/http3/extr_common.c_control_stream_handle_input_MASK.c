
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct st_h2o_http3_ingress_unistream_t {int dummy; } ;
struct TYPE_9__ {scalar_t__ type; int length; int payload; } ;
typedef TYPE_2__ h2o_http3_read_frame_t ;
struct TYPE_10__ {TYPE_1__* callbacks; int quic; } ;
typedef TYPE_3__ h2o_http3_conn_t ;
struct TYPE_8__ {int (* handle_control_stream_frame ) (TYPE_3__*,scalar_t__,int ,int ,char const**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int const**,int const*,char const**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int ,int ,char const**) ;

__attribute__((used)) static int FUNC_4(h2o_http3_conn_t *VAR_5, struct st_h2o_http3_ingress_unistream_t *VAR_6, const uint8_t **VAR_7,
                                       const uint8_t *VAR_8, const char **VAR_9)
{
    h2o_http3_read_frame_t VAR_10;
    int VAR_11;

    do {
        if ((VAR_11 = FUNC_1(&VAR_10, FUNC_2(VAR_5->quic), VAR_4, VAR_7, VAR_8,
                                        VAR_9)) != 0) {
            if (VAR_11 == VAR_1)
                VAR_11 = 0;
            break;
        }
        if (FUNC_0(VAR_5) == (VAR_10.type == VAR_3) ||
            VAR_10.type == VAR_2)
            return VAR_0;
        if ((VAR_11 = VAR_5->callbacks->handle_control_stream_frame(VAR_5, VAR_10.type, VAR_10.payload, VAR_10.length, VAR_9)) != 0)
            break;
    } while (*VAR_7 != VAR_8);

    return VAR_11;
}
