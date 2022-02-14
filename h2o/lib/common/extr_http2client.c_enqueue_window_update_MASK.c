
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int buf; } ;
struct st_h2o_http2client_conn_t {TYPE_1__ output; } ;
typedef int int32_t ;
typedef int h2o_http2_window_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct st_h2o_http2client_conn_t*) ;

__attribute__((used)) static void FUNC_5(struct st_h2o_http2client_conn_t *VAR_1, uint32_t VAR_2, h2o_http2_window_t *VAR_3,
                                  size_t VAR_4)
{
    FUNC_0(VAR_4 <= VAR_0);
    if (FUNC_2(VAR_3) * 2 < VAR_4) {
        int32_t VAR_5 = (int32_t)(VAR_4 - FUNC_2(VAR_3));
        FUNC_1(&VAR_1->output.buf, VAR_2, VAR_5);
        FUNC_4(VAR_1);
        FUNC_3(VAR_3, VAR_5);
    }
}
