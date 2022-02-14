
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ len; } ;
typedef TYPE_1__ h2o_sendvec_t ;
typedef scalar_t__ h2o_send_state_t ;
struct TYPE_8__ {int final_sent; scalar_t__ bytes_left; } ;
typedef TYPE_2__ h2o_mruby_sender_t ;
struct TYPE_9__ {int req; TYPE_2__* sender; } ;
typedef TYPE_3__ h2o_mruby_generator_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*,size_t,scalar_t__) ;

void FUNC_3(h2o_mruby_generator_t *VAR_3, h2o_sendvec_t *VAR_4, size_t VAR_5, h2o_send_state_t VAR_6)
{
    h2o_mruby_sender_t *VAR_7 = VAR_3->sender;
    FUNC_0(!VAR_7->final_sent);

    if (VAR_7->bytes_left != VAR_2) {
        int VAR_8 = 0;
        for (VAR_8 = 0; VAR_8 != VAR_5 && VAR_7->bytes_left > 0; ++VAR_8) {
            if (VAR_7->bytes_left < VAR_4[VAR_8].len)
                VAR_4[VAR_8].len = VAR_7->bytes_left;
            VAR_7->bytes_left -= VAR_4[VAR_8].len;
        }
        VAR_5 = VAR_8;
    }

    if (VAR_6 == VAR_1) {
        if (!(VAR_7->bytes_left == 0 || VAR_7->bytes_left == VAR_2)) {

            VAR_6 = VAR_0;
        }
    }

    if (!FUNC_1(VAR_6))
        VAR_7->final_sent = 1;

    FUNC_2(VAR_3->req, VAR_4, VAR_5, VAR_6);
}
