
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct st_h2o_http3_server_stream_t {TYPE_2__* quic; } ;
struct TYPE_5__ {int type; } ;
typedef TYPE_1__ h2o_http3_read_frame_t ;
struct TYPE_6__ {int sendstate; int recvstate; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int const**,int const*,char const**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct st_h2o_http3_server_stream_t*,int ) ;

int FUNC_6(struct st_h2o_http3_server_stream_t *VAR_3, const uint8_t **VAR_4, const uint8_t *VAR_5,
                               const char **VAR_6)
{
    h2o_http3_read_frame_t VAR_7;
    int VAR_8;


    if ((VAR_8 = FUNC_0(&VAR_7, 0, VAR_2, VAR_4, VAR_5, VAR_6)) != 0)
        return VAR_8;
    switch (VAR_7.type) {
    case 128:
    case 129:
    case 130:
        if (!FUNC_1(&VAR_3->quic->recvstate))
            FUNC_2(VAR_3->quic, VAR_0);
        if (FUNC_4(&VAR_3->quic->sendstate))
            FUNC_3(VAR_3->quic, VAR_0);
        FUNC_5(VAR_3, VAR_1);
        return 0;
    default:
        break;
    }

    return 0;
}
