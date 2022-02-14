
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ (* on_body ) (TYPE_3__*,char const*) ;} ;
struct TYPE_6__ {TYPE_2__ _cb; } ;
struct TYPE_4__ {int body; } ;
struct st_h2o_http3client_req_t {size_t bytes_left_in_data_frame; TYPE_3__ super; int handle_input; TYPE_1__ recvbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,size_t) ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*,char const*) ;

__attribute__((used)) static int FUNC_2(struct st_h2o_http3client_req_t *VAR_4, const uint8_t **VAR_5, const uint8_t *VAR_6, int VAR_7,
                                     const char **VAR_8)
{
    size_t VAR_9 = VAR_4->bytes_left_in_data_frame;
    const char *VAR_10;


    if (VAR_6 - *VAR_5 < VAR_9)
        VAR_9 = VAR_6 - *VAR_5;
    FUNC_0(&VAR_4->recvbuf.body, *VAR_5, VAR_9);
    *VAR_5 += VAR_9;
    VAR_4->bytes_left_in_data_frame -= VAR_9;
    if (VAR_4->bytes_left_in_data_frame == 0)
        VAR_4->handle_input = VAR_3;


    VAR_10 = ((void*)0);
    if (*VAR_5 == VAR_6 && VAR_7 != 0) {

        VAR_10 = VAR_7 == VAR_0 && VAR_4->bytes_left_in_data_frame == 0 ? VAR_2 : "reset by peer";
    } else {
        VAR_10 = ((void*)0);
    }
    if (VAR_4->super._cb.on_body(&VAR_4->super, VAR_10) != 0)
        return VAR_1;

    return 0;
}
