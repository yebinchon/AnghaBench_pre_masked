
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_write_t ;
typedef int uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_handle_t ;
struct child_worker {int pipe; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *,int *,int,int *,int *) ;
 struct child_worker* VAR_4 ;

void FUNC_6(uv_stream_t *VAR_5, int VAR_6) {
    if (VAR_6 == -1) {

        return;
    }

    uv_tcp_t *VAR_7 = (uv_tcp_t*) FUNC_0(sizeof(uv_tcp_t));
    FUNC_4(VAR_2, VAR_7);
    if (FUNC_1(VAR_5, (uv_stream_t*) VAR_7) == 0) {
        uv_write_t *VAR_8 = (uv_write_t*) FUNC_0(sizeof(uv_write_t));
        VAR_1 = FUNC_2("a", 1);
        struct child_worker *VAR_9 = &VAR_4[VAR_3];
        FUNC_5(VAR_8, (uv_stream_t*) &VAR_9->pipe, &VAR_1, 1, (uv_stream_t*) VAR_7, ((void*)0));
        VAR_3 = (VAR_3 + 1) % VAR_0;
    }
    else {
        FUNC_3((uv_handle_t*) VAR_7, ((void*)0));
    }
}
