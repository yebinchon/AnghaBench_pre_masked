
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int posix_spawn_file_actions_t ;
typedef int pid_t ;
typedef int errnum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 char** FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const,int const) ;
 int VAR_4 ;
 int FUNC_4 (char const*,char* const*) ;
 int FUNC_5 () ;
 int FUNC_6 (char**) ;
 int FUNC_7 (int *,int const) ;
 int FUNC_8 (int *,int const,int const) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int*,char const*,int *,int *,char* const*,char**) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,int*,int) ;
 int FUNC_14 (int,int *,int ) ;
 int FUNC_15 (int,int*,int) ;

pid_t FUNC_16(const char *VAR_5, char *const *VAR_6, const int *VAR_7, int VAR_8)
{


    extern int FUNC_17(int VAR_9[2], int VAR_10);





    extern char **VAR_11;
    int VAR_12[2] = {-1, -1}, VAR_13;
    pid_t VAR_14;


    if (FUNC_17(VAR_12, VAR_2) != 0)
        goto Error;


    if (!VAR_8)
        FUNC_11(&VAR_3);
    if ((VAR_14 = FUNC_5()) == 0) {

        if (VAR_7 != ((void*)0)) {
            for (; *VAR_7 != -1; VAR_7 += 2) {
                if (VAR_7[0] != VAR_7[1]) {
                    if (VAR_7[1] != -1)
                        FUNC_3(VAR_7[0], VAR_7[1]);
                    FUNC_2(VAR_7[0]);
                }
            }
        }
        char **VAR_15 = FUNC_1();
        if (VAR_15 != ((void*)0))
            VAR_11 = VAR_15;
        FUNC_4(VAR_5, VAR_6);
        VAR_13 = VAR_4;
        FUNC_15(VAR_12[1], &VAR_13, sizeof(VAR_13));
        FUNC_0(VAR_1);
    }
    if (!VAR_8)
        FUNC_12(&VAR_3);
    if (VAR_14 == -1)
        goto Error;


    FUNC_2(VAR_12[1]);
    VAR_12[1] = -1;
    ssize_t VAR_16;
    VAR_13 = 0;
    while ((VAR_16 = FUNC_13(VAR_12[0], &VAR_13, sizeof(VAR_13))) == -1 && VAR_4 == VAR_0)
        ;
    if (VAR_16 != 0) {

        while (FUNC_14(VAR_14, ((void*)0), 0) != VAR_14)
            ;
        VAR_14 = -1;
        VAR_4 = VAR_13;
        goto Error;
    }


    FUNC_2(VAR_12[0]);
    return VAR_14;

Error:
    VAR_13 = VAR_4;
    if (VAR_12[0] != -1)
        FUNC_2(VAR_12[0]);
    if (VAR_12[1] != -1)
        FUNC_2(VAR_12[1]);
    VAR_4 = VAR_13;
    return -1;
}
