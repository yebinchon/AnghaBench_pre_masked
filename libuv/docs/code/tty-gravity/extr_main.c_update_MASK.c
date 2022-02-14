
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_timer_t ;
typedef int uv_stream_t ;
struct TYPE_3__ {char* base; int len; } ;
typedef TYPE_1__ uv_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int,unsigned long,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,TYPE_1__*,int,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

void FUNC_5(uv_timer_t *VAR_7) {
    char VAR_8[500];

    uv_buf_t VAR_9;
    VAR_9.base = VAR_8;
    VAR_9.len = FUNC_0(VAR_8, "\033[2J\033[H\033[%dB\033[%luC\033[42;37m%s",
                            VAR_2,
                            (unsigned long) (VAR_5-FUNC_1(VAR_1))/2,
                            VAR_1);
    FUNC_4(&VAR_6, (uv_stream_t*) &VAR_4, &VAR_9, 1, ((void*)0));

    VAR_2++;
    if (VAR_2 > VAR_0) {
        FUNC_3();
        FUNC_2(&VAR_3);
    }
}
