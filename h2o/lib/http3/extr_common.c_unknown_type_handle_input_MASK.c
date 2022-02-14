
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct st_h2o_http3_ingress_unistream_t {int (* handle_input ) (TYPE_3__*,struct st_h2o_http3_ingress_unistream_t*,int const**,int const*,char const**) ;int quic; } ;
struct TYPE_10__ {struct st_h2o_http3_ingress_unistream_t* qpack_decoder; struct st_h2o_http3_ingress_unistream_t* qpack_encoder; struct st_h2o_http3_ingress_unistream_t* control; } ;
struct TYPE_11__ {TYPE_1__ ingress; } ;
struct TYPE_12__ {TYPE_2__ _control_streams; } ;
typedef TYPE_3__ h2o_http3_conn_t ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,struct st_h2o_http3_ingress_unistream_t*,int const**,int const*,char const**) ;
 int FUNC_1 (TYPE_3__*,struct st_h2o_http3_ingress_unistream_t*,int const**,int const*,char const**) ;
 int FUNC_2 (TYPE_3__*,struct st_h2o_http3_ingress_unistream_t*,int const**,int const*,char const**) ;
 int FUNC_3 (int const**,int const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*,struct st_h2o_http3_ingress_unistream_t*,int const**,int const*,char const**) ;
 int FUNC_6 (TYPE_3__*,struct st_h2o_http3_ingress_unistream_t*,int const**,int const*,char const**) ;

__attribute__((used)) static int FUNC_7(h2o_http3_conn_t *VAR_2, struct st_h2o_http3_ingress_unistream_t *VAR_3, const uint8_t **VAR_4,
                                     const uint8_t *VAR_5, const char **VAR_6)
{
    if (*VAR_4 == VAR_5) {

        return 0;
    }


    uint64_t VAR_7;
    if ((VAR_7 = FUNC_3(VAR_4, VAR_5)) == VAR_1)
        return 0;

    switch (VAR_7) {
    case 130:
        VAR_2->_control_streams.ingress.control = VAR_3;
        VAR_3->handle_input = FUNC_0;
        break;
    case 128:
        VAR_2->_control_streams.ingress.qpack_encoder = VAR_3;
        VAR_3->handle_input = FUNC_2;
        break;
    case 129:
        VAR_2->_control_streams.ingress.qpack_decoder = VAR_3;
        VAR_3->handle_input = FUNC_1;
        break;
    default:
        FUNC_4(VAR_3->quic, VAR_0);
        VAR_3->handle_input =
            FUNC_6;
        break;
    }

    return VAR_3->handle_input(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
