
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_7__ {int enc; } ;
struct TYPE_6__ {int max_header_list_size; int num_placeholders; } ;
struct TYPE_8__ {TYPE_2__ qpack; TYPE_1__ peer_settings; int quic; } ;
typedef TYPE_3__ h2o_http3_conn_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int const**,int const*) ;
 int FUNC_4 (int ) ;

int FUNC_5(h2o_http3_conn_t *VAR_3, const uint8_t *VAR_4, size_t VAR_5, const char **VAR_6)
{
    const uint8_t *VAR_7 = VAR_4, *VAR_8 = VAR_7 + VAR_5;
    uint32_t VAR_9 = VAR_0;

    FUNC_0(!FUNC_1(VAR_3));

    while (VAR_7 != VAR_8) {
        uint64_t VAR_10;
        uint64_t VAR_11;
        if ((VAR_10 = FUNC_3(&VAR_7, VAR_8)) == VAR_2)
            goto Malformed;
        if ((VAR_11 = FUNC_3(&VAR_7, VAR_8)) == VAR_2)
            goto Malformed;
        switch (VAR_10) {
        case 129:
            VAR_3->peer_settings.max_header_list_size = (uint64_t)VAR_11;
            break;
        case 128:
            if (!FUNC_4(VAR_3->quic))
                goto Malformed;
            VAR_3->peer_settings.num_placeholders = (uint64_t)VAR_11;
            break;
        case 130:
            VAR_9 = (uint32_t)VAR_11;
            break;

        default:
            break;
        }
    }

    VAR_3->qpack.enc = FUNC_2(VAR_9, 100 );
    return 0;
Malformed:
    *VAR_6 = "malformed SETTINGS frame";
    return VAR_1;
}
