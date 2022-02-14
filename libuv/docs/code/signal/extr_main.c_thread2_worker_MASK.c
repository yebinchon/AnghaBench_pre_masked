
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_signal_t ;
typedef int uv_loop_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int ) ;

void FUNC_4(void *VAR_3)
{
    uv_loop_t *VAR_4 = FUNC_0();
    uv_loop_t *VAR_5 = FUNC_0();

    uv_signal_t VAR_6;
    FUNC_2(VAR_4, &VAR_6);
    FUNC_3(&VAR_6, VAR_2, VAR_0);

    uv_signal_t VAR_7;
    FUNC_2(VAR_5, &VAR_7);
    FUNC_3(&VAR_7, VAR_2, VAR_0);

    while (FUNC_1(VAR_4, VAR_1) || FUNC_1(VAR_5, VAR_1)) {
    }
}
