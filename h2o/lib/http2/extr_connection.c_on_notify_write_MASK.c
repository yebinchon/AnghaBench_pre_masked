
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ h2o_socket_t ;
typedef int h2o_http2_conn_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(h2o_socket_t *VAR_0, const char *VAR_1)
{
    h2o_http2_conn_t *VAR_2 = VAR_0->data;

    if (VAR_1 != ((void*)0)) {
        FUNC_0(VAR_2);
        return;
    }
    FUNC_1(VAR_2);
}
