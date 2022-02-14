
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_fs_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,size_t*) ;

void FUNC_3(uv_fs_event_t *VAR_4, const char *VAR_5, int VAR_6, int VAR_7) {
    char VAR_8[1024];
    size_t VAR_9 = 1023;

    FUNC_2(VAR_4, VAR_8, &VAR_9);
    VAR_8[VAR_9] = '\0';

    FUNC_0(VAR_3, "Change detected in %s: ", VAR_8);
    if (VAR_6 & VAR_1)
        FUNC_0(VAR_3, "renamed");
    if (VAR_6 & VAR_0)
        FUNC_0(VAR_3, "changed");

    FUNC_0(VAR_3, " %s\n", VAR_5 ? VAR_5 : "");
    FUNC_1(VAR_2);
}
