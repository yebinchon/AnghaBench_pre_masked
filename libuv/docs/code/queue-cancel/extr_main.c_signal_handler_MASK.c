
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_signal_t ;
typedef int uv_req_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(uv_signal_t *VAR_2, int VAR_3)
{
    FUNC_0("Signal received!\n");
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        FUNC_1((uv_req_t*) &VAR_1[VAR_4]);
    }
    FUNC_2(VAR_2);
}
