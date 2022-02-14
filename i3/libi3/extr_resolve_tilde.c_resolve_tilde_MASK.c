
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int gl_pathc; char** gl_pathv; } ;
typedef TYPE_1__ glob_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (size_t,int) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,size_t) ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char*,char*) ;
 size_t FUNC_10 (char const*) ;

char *FUNC_11(const char *VAR_3) {
    static glob_t VAR_4;
    char *VAR_5, *VAR_6, *VAR_7;

    VAR_6 = FUNC_8(VAR_3, '/');
    VAR_5 = FUNC_6(VAR_3, VAR_6 ? (size_t)(VAR_6 - VAR_3) : FUNC_10(VAR_3));

    int VAR_8 = FUNC_2(VAR_5, VAR_2, ((void*)0), &VAR_4);
    FUNC_1(VAR_5);

    if (VAR_8 == VAR_1 || VAR_4.gl_pathc != 1)
        VAR_7 = FUNC_5(VAR_3);
    else if (VAR_8 != 0) {
        FUNC_0(VAR_0, "glob() failed");
    } else {
        VAR_5 = VAR_4.gl_pathv[0];
        VAR_7 = FUNC_4(FUNC_10(VAR_5) + (VAR_6 ? FUNC_10(VAR_6) : 0) + 1, 1);
        FUNC_9(VAR_7, VAR_5);
        if (VAR_6) {
            FUNC_7(VAR_7, VAR_6);
        }
    }
    FUNC_3(&VAR_4);

    return VAR_7;
}
