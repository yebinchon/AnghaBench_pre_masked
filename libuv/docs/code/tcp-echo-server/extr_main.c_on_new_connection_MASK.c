
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(uv_stream_t *VAR_5, int VAR_6) {
    if (VAR_6 < 0) {
        FUNC_0(VAR_4, "New connection error %s\n", FUNC_5(VAR_6));

        return;
    }

    uv_tcp_t *VAR_7 = (uv_tcp_t*) FUNC_1(sizeof(uv_tcp_t));
    FUNC_6(VAR_2, VAR_7);
    if (FUNC_2(VAR_5, (uv_stream_t*) VAR_7) == 0) {
        FUNC_4((uv_stream_t*) VAR_7, VAR_0, VAR_1);
    }
    else {
        FUNC_3((uv_handle_t*) VAR_7, VAR_3);
    }
}
