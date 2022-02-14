
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buf; } ;
typedef TYPE_1__ write_req_t ;
typedef int uv_write_t ;
typedef int uv_stream_t ;
typedef int uv_handle_t ;
struct TYPE_5__ {int base; } ;
typedef TYPE_2__ uv_buf_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int *,int *,int,int ) ;

void FUNC_7(uv_stream_t *VAR_3, ssize_t VAR_4, const uv_buf_t *VAR_5) {
    if (VAR_4 > 0) {
        write_req_t *VAR_6 = (write_req_t*) FUNC_2(sizeof(write_req_t));
        VAR_6->buf = FUNC_3(VAR_5->base, VAR_4);
        FUNC_6((uv_write_t*) VAR_6, VAR_3, &VAR_6->buf, 1, VAR_1);
        return;
    }

    if (VAR_4 < 0) {
        if (VAR_4 != VAR_0)
            FUNC_0(VAR_2, "Read error %s\n", FUNC_5(VAR_4));
        FUNC_4((uv_handle_t*) VAR_3, ((void*)0));
    }

    FUNC_1(VAR_5->base);
}
