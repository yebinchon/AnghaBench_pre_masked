
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_prepare_t ;
typedef int uv_idle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6() {
    uv_idle_t VAR_3;
    uv_prepare_t VAR_4;

    FUNC_1(FUNC_0(), &VAR_3);
    FUNC_2(&VAR_3, VAR_1);

    FUNC_3(FUNC_0(), &VAR_4);
    FUNC_4(&VAR_4, VAR_2);

    FUNC_5(FUNC_0(), VAR_0);

    return 0;
}
