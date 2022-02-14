
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int link; } ;
struct TYPE_3__ {int buf; } ;
struct st_h2o_http2client_conn_t {scalar_t__ state; TYPE_2__ super; TYPE_1__ output; } ;
typedef int h2o_iovec_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct st_h2o_http2client_conn_t*) ;

__attribute__((used)) static void FUNC_4(struct st_h2o_http2client_conn_t *VAR_2, int VAR_3, h2o_iovec_t VAR_4)
{
    if (VAR_2->state == VAR_1)
        return;

    FUNC_0(&VAR_2->output.buf, 0, VAR_3, VAR_4);
    FUNC_3(VAR_2);
    VAR_2->state = VAR_0;


    if (FUNC_1(&VAR_2->super.link))
        FUNC_2(&VAR_2->super.link);
}
