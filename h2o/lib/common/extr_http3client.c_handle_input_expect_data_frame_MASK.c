
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int (* on_body ) (TYPE_3__*,char*) ;} ;
struct TYPE_7__ {TYPE_1__ _cb; } ;
struct st_h2o_http3client_req_t {int (* handle_input ) (struct st_h2o_http3client_req_t*,int const**,int const*,int,char const**) ;int bytes_left_in_data_frame; TYPE_3__ super; } ;
struct TYPE_6__ {int type; int length; } ;
typedef TYPE_2__ h2o_http3_read_frame_t ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,int ,int const**,int const*,char const**) ;
 int FUNC_1 (struct st_h2o_http3client_req_t*,int const**,int const*,int,char const**) ;
 int FUNC_2 (TYPE_3__*,char*) ;

int FUNC_3(struct st_h2o_http3client_req_t *VAR_2, const uint8_t **VAR_3, const uint8_t *VAR_4, int VAR_5,
                                   const char **VAR_6)
{
    h2o_http3_read_frame_t VAR_7;
    int VAR_8;

    if ((VAR_8 = FUNC_0(&VAR_7, 1, VAR_1, VAR_3, VAR_4, VAR_6)) != 0) {

        if (VAR_8 == VAR_0 && VAR_5 == 0)
            return VAR_8;
        VAR_2->super._cb.on_body(&VAR_2->super, "malformed frame");
        return VAR_8;
    }

    switch (VAR_7.type) {
    case 128:
        break;
    default:

        return 0;
    }

    VAR_2->bytes_left_in_data_frame = VAR_7.length;



    VAR_2->handle_input = FUNC_1;
    return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
