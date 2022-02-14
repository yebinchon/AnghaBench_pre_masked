
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ,int,int) ;
 int FUNC_4 (int *) ;

int FUNC_5() {
    VAR_5 = FUNC_0();

    FUNC_2(VAR_5, &VAR_4);
    FUNC_4((uv_handle_t*) &VAR_4);

    FUNC_3(&VAR_4, VAR_3, 0, 2000);


    FUNC_2(VAR_5, &VAR_2);
    FUNC_3(&VAR_2, VAR_1, 9000, 0);
    return FUNC_1(VAR_5, VAR_0);
}
