
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uv_stream_t ;
typedef int uv_handle_t ;
struct TYPE_3__ {char* base; } ;
typedef TYPE_1__ uv_buf_t ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int *,int *) ;
 char* FUNC_5 (int) ;

void FUNC_6(uv_stream_t *VAR_2, ssize_t VAR_3, const uv_buf_t *VAR_4) {
    if (VAR_3 < 0) {
        if (VAR_3 != VAR_0)
            FUNC_0(VAR_1, "Read error %s\n", FUNC_5(VAR_3));
        FUNC_4((uv_handle_t*) VAR_2, ((void*)0));
        FUNC_1(VAR_4->base);
        FUNC_1(VAR_2);
        return;
    }

    char *VAR_5 = (char*) FUNC_2(sizeof(char) * (VAR_3+1));
    VAR_5[VAR_3] = '\0';
    FUNC_3(VAR_5, VAR_4->base, VAR_3);

    FUNC_0(VAR_1, "%s", VAR_5);
    FUNC_1(VAR_5);
    FUNC_1(VAR_4->base);
}
