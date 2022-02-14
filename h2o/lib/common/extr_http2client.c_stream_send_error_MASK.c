
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int buf; } ;
struct st_h2o_http2client_conn_t {scalar_t__ state; TYPE_1__ output; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct st_h2o_http2client_conn_t*) ;

__attribute__((used)) static void FUNC_3(struct st_h2o_http2client_conn_t *VAR_1, uint32_t VAR_2, int VAR_3)
{
    FUNC_0(VAR_2 != 0);
    FUNC_0(VAR_1->state != VAR_0);

    FUNC_1(&VAR_1->output.buf, VAR_2, -VAR_3);
    FUNC_2(VAR_1);
}
