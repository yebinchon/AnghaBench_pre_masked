
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_16__ {int * (* on_head ) (TYPE_7__*,int *,int,int,int ,int ,int ,int ) ;int * on_body; } ;
struct TYPE_19__ {scalar_t__ (* informational_cb ) (TYPE_7__*,int ,int,int ,int ,int ) ;TYPE_4__ _cb; int pool; } ;
struct st_h2o_http3client_req_t {int * handle_input; TYPE_7__ super; TYPE_3__* conn; TYPE_2__* quic; } ;
struct TYPE_17__ {int type; int length; int payload; } ;
typedef TYPE_5__ h2o_http3_read_frame_t ;
struct TYPE_18__ {int size; int entries; int * member_0; } ;
typedef TYPE_6__ h2o_headers_t ;
struct TYPE_13__ {int dec; } ;
struct TYPE_12__ {TYPE_1__ qpack; } ;
struct TYPE_15__ {TYPE_10__ super; } ;
struct TYPE_14__ {int stream_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_5__*,int,int ,int const**,int const*,char const**) ;
 int FUNC_1 (TYPE_10__*,int *,size_t) ;
 int * VAR_11 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int ,int*,TYPE_6__*,int *,size_t*,int ,int ,char const**) ;
 int * VAR_12 ;
 int FUNC_4 (struct st_h2o_http3client_req_t*,char const*) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int ,int,int ,int ,int ) ;
 int * FUNC_6 (TYPE_7__*,int *,int,int,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct st_h2o_http3client_req_t *VAR_13, const uint8_t **VAR_14, const uint8_t *VAR_15, int VAR_16,
                                       const char **VAR_17)
{
    h2o_http3_read_frame_t VAR_18;
    int VAR_19;
    h2o_headers_t VAR_20 = {((void*)0)};
    uint8_t VAR_21[VAR_0];
    size_t VAR_22;
    int VAR_23, VAR_24;


    if ((VAR_23 = FUNC_0(&VAR_18, 1, VAR_10, VAR_14, VAR_15, VAR_17)) != 0) {
        if (VAR_23 == VAR_6) {
            if (VAR_16 != 0) {
                FUNC_4(VAR_13, VAR_16 == VAR_8 ? "unexpected close" : "reset by peer");
                return 0;
            }
            return VAR_23;
        }
        FUNC_4(VAR_13, "response header too large");
        return VAR_3;
    }
    VAR_24 = *VAR_14 == VAR_15 && VAR_16 != 0;
    if (VAR_18.type != VAR_9) {
        switch (VAR_18.type) {
        case 128:
            *VAR_17 = "received DATA frame before HEADERS";
            return VAR_4;
        default:
            return 0;
        }
    }
    if ((VAR_23 = FUNC_3(VAR_13->super.pool, VAR_13->conn->super.qpack.dec, VAR_13->quic->stream_id, &VAR_19, &VAR_20,
                                        VAR_21, &VAR_22, VAR_18.payload, VAR_18.length, VAR_17)) != 0) {
        if (VAR_23 == VAR_1) {

            VAR_13->handle_input = ((void*)0);
            return 0;
        }
        FUNC_4(VAR_13, *VAR_17 != ((void*)0) ? *VAR_17 : "qpack error");
        return VAR_5;
    }
    if (VAR_22 != 0)
        FUNC_1(&VAR_13->conn->super, VAR_21, VAR_22);


    if (100 <= VAR_19 && VAR_19 <= 199) {
        if (VAR_19 == 101) {
            FUNC_4(VAR_13, "unexpected 101");
            return VAR_5;
        }
        if (VAR_24) {
            FUNC_4(VAR_13, VAR_16 == VAR_2 ? "unexpected close" : "reset by peer");
            return 0;
        }
        if (VAR_13->super.informational_cb != ((void*)0) &&
            VAR_13->super.informational_cb(&VAR_13->super, 0, VAR_19, FUNC_2(((void*)0), 0), VAR_20.entries, VAR_20.size) != 0) {
            return VAR_7;
        }
        return 0;
    }


    if ((VAR_13->super._cb.on_body = VAR_13->super._cb.on_head(&VAR_13->super, VAR_24 ? VAR_11 : ((void*)0), 0x300,
                                                         VAR_19, FUNC_2(((void*)0), 0), VAR_20.entries, VAR_20.size, 0)) ==
        ((void*)0))
        return VAR_24 ? 0 : VAR_7;


    VAR_13->handle_input = VAR_12;
    return 0;
}
