
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(uv_stream_t *VAR_1, int VAR_2) {
    if (VAR_2 == -1) {

        return;
    }

    uv_tcp_t *VAR_3 = (uv_tcp_t*) FUNC_1(sizeof(uv_tcp_t));
    FUNC_4(VAR_0, VAR_3);
    if (FUNC_2(VAR_1, (uv_stream_t*) VAR_3) == 0) {
        FUNC_0(VAR_3);
    }
    else {
        FUNC_3((uv_handle_t*) VAR_3, ((void*)0));
    }
}
