
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_pipe_t ;
typedef int uv_os_fd_t ;
typedef scalar_t__ uv_handle_type ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int const*,int*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int ,int *) ;

void FUNC_12(uv_stream_t *VAR_6, ssize_t VAR_7, const uv_buf_t *VAR_8) {
    if (VAR_7 < 0) {
        if (VAR_7 != VAR_0)
            FUNC_1(VAR_5, "Read error %s\n", FUNC_6(VAR_7));
        FUNC_5((uv_handle_t*) VAR_6, ((void*)0));
        return;
    }

    uv_pipe_t *VAR_9 = (uv_pipe_t*) VAR_6;
    if (!FUNC_8(VAR_9)) {
        FUNC_1(VAR_5, "No pending count\n");
        return;
    }

    uv_handle_type VAR_10 = FUNC_9(VAR_9);
    FUNC_0(VAR_10 == VAR_1);

    uv_tcp_t *VAR_11 = (uv_tcp_t*) FUNC_3(sizeof(uv_tcp_t));
    FUNC_11(VAR_4, VAR_11);
    if (FUNC_4(VAR_6, (uv_stream_t*) VAR_11) == 0) {
        uv_os_fd_t VAR_12;
        FUNC_7((const uv_handle_t*) VAR_11, &VAR_12);
        FUNC_1(VAR_5, "Worker %d: Accepted fd %d\n", FUNC_2(), VAR_12);
        FUNC_10((uv_stream_t*) VAR_11, VAR_2, VAR_3);
    }
    else {
        FUNC_5((uv_handle_t*) VAR_11, ((void*)0));
    }
}
