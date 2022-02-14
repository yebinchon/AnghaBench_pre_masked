
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int **) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(void) {
    const char *VAR_4 = "debuglog off; shmlog off";
    if (FUNC_3(VAR_3, FUNC_4(VAR_4),
                         VAR_1, (uint8_t *)VAR_4) != 0)
        FUNC_0(VAR_0, "IPC send");


    uint32_t VAR_5 = 0;
    uint8_t *VAR_6 = ((void*)0);
    if (FUNC_2(VAR_3, VAR_2,
                         &VAR_5, &VAR_6) != 0) {
        FUNC_0(VAR_0, "IPC recv");
    }
    FUNC_1(VAR_6);
}
