
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_idle_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

void FUNC_3(uv_idle_t *VAR_1) {
    FUNC_0("Idle callback\n");
    VAR_0++;

    if (VAR_0 >= 5) {
        FUNC_2(FUNC_1());
        FUNC_0("uv_stop() called\n");
    }
}
