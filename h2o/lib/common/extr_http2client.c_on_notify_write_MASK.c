
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_http2client_conn_t {int dummy; } ;
struct TYPE_3__ {struct st_h2o_http2client_conn_t* data; } ;
typedef TYPE_1__ h2o_socket_t ;


 int FUNC_0 (struct st_h2o_http2client_conn_t*,int ) ;
 int FUNC_1 (struct st_h2o_http2client_conn_t*) ;
 int FUNC_2 (struct st_h2o_http2client_conn_t*) ;
 int FUNC_3 (struct st_h2o_http2client_conn_t*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(h2o_socket_t *VAR_1, const char *VAR_2)
{
    struct st_h2o_http2client_conn_t *VAR_3 = VAR_1->data;

    if (VAR_2 != ((void*)0)) {
        FUNC_0(VAR_3, VAR_0);
        FUNC_2(VAR_3);
        return;
    }
    FUNC_3(VAR_3);
    FUNC_1(VAR_3);
}
