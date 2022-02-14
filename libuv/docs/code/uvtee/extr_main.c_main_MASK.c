
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_fs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *,char*,int,int,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(int VAR_9, char **VAR_10) {
    VAR_5 = FUNC_0();

    FUNC_2(VAR_5, &VAR_7, 0);
    FUNC_3(&VAR_7, 0);

    FUNC_2(VAR_5, &VAR_8, 0);
    FUNC_3(&VAR_8, 1);

    uv_fs_t VAR_11;
    int VAR_12 = FUNC_1(VAR_5, &VAR_11, VAR_10[1], VAR_0 | VAR_1, 0644, ((void*)0));
    FUNC_2(VAR_5, &VAR_4, 0);
    FUNC_3(&VAR_4, VAR_12);

    FUNC_4((uv_stream_t*)&VAR_7, VAR_3, VAR_6);

    FUNC_5(VAR_5, VAR_2);
    return 0;
}
