
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

void FUNC_2(void *VAR_1) {
    int VAR_2 = *((int *) VAR_1);
    while (VAR_2) {
        VAR_2--;
        FUNC_0(VAR_0, "Tortoise ran another step\n");
        FUNC_1(3);
    }
    FUNC_0(VAR_0, "Tortoise done running!\n");
}
