
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int ,int *,int,int,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6() {
    VAR_4 = FUNC_1();

    FUNC_3(VAR_4, &VAR_3);

    uv_buf_t VAR_7 = FUNC_0(VAR_1, 1024);
    FUNC_2(VAR_4, &VAR_6, 0, &VAR_7, 1, -1, VAR_5);
    FUNC_4(&VAR_3, VAR_2);
    return FUNC_5(VAR_4, VAR_0);
}
