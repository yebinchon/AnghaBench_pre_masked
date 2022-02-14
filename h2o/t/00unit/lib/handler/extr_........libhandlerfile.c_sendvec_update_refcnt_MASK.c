
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_sendfile_generator_t {int dummy; } ;
struct TYPE_3__ {scalar_t__* cb_arg; } ;
typedef TYPE_1__ h2o_sendvec_t ;
typedef int h2o_req_t ;


 int FUNC_0 (struct st_h2o_sendfile_generator_t*) ;
 int FUNC_1 (struct st_h2o_sendfile_generator_t*) ;

__attribute__((used)) static void FUNC_2(h2o_sendvec_t *VAR_0, h2o_req_t *VAR_1, int VAR_2)
{
    struct st_h2o_sendfile_generator_t *VAR_3 = (void *)VAR_0->cb_arg[0];

    if (VAR_2) {
        FUNC_0(VAR_3);
    } else {
        FUNC_1(VAR_3);
    }
}
