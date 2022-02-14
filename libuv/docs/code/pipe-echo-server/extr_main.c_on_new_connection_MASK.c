
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_pipe_t ;
typedef int uv_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;

void FUNC_5(uv_stream_t *VAR_3, int VAR_4) {
    if (VAR_4 == -1) {

        return;
    }

    uv_pipe_t *VAR_5 = (uv_pipe_t*) FUNC_0(sizeof(uv_pipe_t));
    FUNC_3(VAR_2, VAR_5, 0);
    if (FUNC_1(VAR_3, (uv_stream_t*) VAR_5) == 0) {
        FUNC_4((uv_stream_t*) VAR_5, VAR_0, VAR_1);
    }
    else {
        FUNC_2((uv_handle_t*) VAR_5, ((void*)0));
    }
}
