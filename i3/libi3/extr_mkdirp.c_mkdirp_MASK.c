
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char) ;

int FUNC_9(const char *VAR_4, mode_t VAR_5) {
    if (FUNC_3(VAR_4, VAR_5) == 0)
        return 0;
    if (VAR_3 == VAR_0) {
        struct stat VAR_6;

        if (FUNC_5(VAR_4, &VAR_6)) {
            FUNC_0("stat(%s) failed: %s\n", VAR_4, FUNC_6(VAR_3));
            return -1;
        }
        if (!FUNC_1(VAR_6.st_mode)) {
            FUNC_0("mkdir(%s) failed: %s\n", VAR_4, FUNC_6(VAR_2));
            return -1;
        }
        return 0;
    } else if (VAR_3 != VAR_1) {
        FUNC_0("mkdir(%s) failed: %s\n", VAR_4, FUNC_6(VAR_3));
        return -1;
    }
    char *VAR_7 = FUNC_4(VAR_4);

    while (VAR_7[FUNC_7(VAR_7) - 1] == '/')
        VAR_7[FUNC_7(VAR_7) - 1] = '\0';

    char *VAR_8 = FUNC_8(VAR_7, '/');
    if (VAR_8 == ((void*)0)) {
        FUNC_2(VAR_7);
        return -1;
    }
    *VAR_8 = '\0';
    int VAR_9 = -1;
    if (FUNC_9(VAR_7, VAR_5) == 0)
        VAR_9 = FUNC_9(VAR_4, VAR_5);
    FUNC_2(VAR_7);

    return VAR_9;
}
