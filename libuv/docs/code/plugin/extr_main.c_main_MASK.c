
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_lib_t ;
typedef int (* init_plugin_function ) () ;


 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int *) ;
 scalar_t__ FUNC_4 (int *,char*,void**) ;

int FUNC_5(int VAR_1, char **VAR_2) {
    if (VAR_1 == 1) {
        FUNC_0(VAR_0, "Usage: %s [plugin1] [plugin2] ...\n", VAR_2[0]);
        return 0;
    }

    uv_lib_t *VAR_3 = (uv_lib_t*) FUNC_1(sizeof(uv_lib_t));
    while (--VAR_1) {
        FUNC_0(VAR_0, "Loading %s\n", VAR_2[VAR_1]);
        if (FUNC_3(VAR_2[VAR_1], VAR_3)) {
            FUNC_0(VAR_0, "Error: %s\n", FUNC_2(VAR_3));
            continue;
        }

        init_plugin_function VAR_4;
        if (FUNC_4(VAR_3, "initialize", (void **) &VAR_4)) {
            FUNC_0(VAR_0, "dlsym error: %s\n", FUNC_2(VAR_3));
            continue;
        }

        VAR_4();
    }

    return 0;
}
