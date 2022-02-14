
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num_streams; } ;
struct st_h2o_http2client_conn_t {scalar_t__ state; TYPE_1__ super; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct st_h2o_http2client_conn_t*) ;

__attribute__((used)) static int FUNC_1(struct st_h2o_http2client_conn_t *VAR_2)
{
    if (VAR_2->state == VAR_0 && VAR_2->super.num_streams == 0)
        VAR_2->state = VAR_1;
    if (VAR_2->state == VAR_1) {
        FUNC_0(VAR_2);
        return 1;
    }
    return 0;
}
