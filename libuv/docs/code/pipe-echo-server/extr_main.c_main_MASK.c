
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_pipe_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 () ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8() {
    VAR_3 = FUNC_2();

    uv_pipe_t VAR_7;
    FUNC_6(VAR_3, &VAR_7, 0);

    FUNC_1(VAR_1, VAR_5);

    int VAR_8;
    if ((VAR_8 = FUNC_5(&VAR_7, VAR_0))) {
        FUNC_0(VAR_6, "Bind error %s\n", FUNC_3(VAR_8));
        return 1;
    }
    if ((VAR_8 = FUNC_4((uv_stream_t*) &VAR_7, 128, VAR_4))) {
        FUNC_0(VAR_6, "Listen error %s\n", FUNC_3(VAR_8));
        return 2;
    }
    return FUNC_7(VAR_3, VAR_2);
}
