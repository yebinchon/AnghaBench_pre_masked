
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_write_t ;
typedef int uv_stream_t ;
struct TYPE_3__ {char* base; void* len; } ;
typedef TYPE_1__ uv_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,TYPE_1__*,int,int *) ;

int FUNC_8() {
    VAR_4 = FUNC_1();

    FUNC_4(VAR_4, &VAR_5, VAR_0, 0);
    FUNC_6(&VAR_5, VAR_3);

    if (FUNC_2(1) == VAR_2) {
        uv_write_t VAR_6;
        uv_buf_t VAR_7;
        VAR_7.base = "\033[41;37m";
        VAR_7.len = FUNC_0(VAR_7.base);
        FUNC_7(&VAR_6, (uv_stream_t*) &VAR_5, &VAR_7, 1, ((void*)0));
    }

    uv_write_t VAR_8;
    uv_buf_t VAR_9;
    VAR_9.base = "Hello TTY\n";
    VAR_9.len = FUNC_0(VAR_9.base);
    FUNC_7(&VAR_8, (uv_stream_t*) &VAR_5, &VAR_9, 1, ((void*)0));
    FUNC_5();
    return FUNC_3(VAR_4, VAR_1);
}
