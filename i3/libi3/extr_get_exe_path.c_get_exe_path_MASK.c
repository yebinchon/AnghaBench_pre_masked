
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 size_t FUNC_1 (int ,char*,size_t) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,size_t) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char const*,char*,size_t) ;
 int FUNC_6 (char**,char*,char const*,...) ;
 char* FUNC_7 (size_t) ;
 char* FUNC_8 (char*,size_t) ;
 char* FUNC_9 (char const*) ;
 int * FUNC_10 (char const*,char) ;
 char* FUNC_11 (char*,char*) ;

char *FUNC_12(const char *VAR_4) {
    size_t VAR_5 = 1024;
    size_t VAR_6 = 1024;
    char *VAR_7 = FUNC_7(VAR_5);
    char *VAR_8 = FUNC_7(VAR_6);




    const char *VAR_9 = "/proc/self/exe";



    ssize_t VAR_10;

    while ((VAR_10 = FUNC_5(VAR_9, VAR_7, VAR_5)) == (ssize_t)VAR_5) {
        VAR_5 = VAR_5 * 2;
        VAR_7 = FUNC_8(VAR_7, VAR_5);
    }
    if (VAR_10 != -1) {

        VAR_7[VAR_10] = '\0';
        FUNC_2(VAR_8);
        return VAR_7;
    }



    if (VAR_4[0] == '/') {
        FUNC_2(VAR_8);
        FUNC_2(VAR_7);
        return FUNC_9(VAR_4);
    }


    if (FUNC_10(VAR_4, '/') != ((void*)0)) {
        char *VAR_11;
        while ((VAR_11 = FUNC_3(VAR_8, VAR_6)) == ((void*)0) && VAR_3 == VAR_0) {
            VAR_6 = VAR_6 * 2;
            VAR_8 = FUNC_8(VAR_8, VAR_6);
        }
        if (VAR_11 != ((void*)0)) {
            FUNC_2(VAR_7);
            FUNC_6(&VAR_7, "%s/%s", VAR_8, VAR_4);
            FUNC_2(VAR_8);
            return VAR_7;
        }
    }


    char *VAR_12 = FUNC_4("PATH");
    if (VAR_12 == ((void*)0)) {

        while (FUNC_1(VAR_2, VAR_8, VAR_6) > VAR_6) {
            VAR_6 = VAR_6 * 2;
            VAR_8 = FUNC_8(VAR_8, VAR_6);
        }
        FUNC_6(&VAR_12, ":%s", VAR_8);
    } else {
        VAR_12 = FUNC_9(VAR_12);
    }
    const char *VAR_13;
    char *VAR_14 = VAR_12;
    while (1) {
        if ((VAR_13 = FUNC_11(VAR_14, ":")) == ((void*)0))
            break;
        VAR_14 = ((void*)0);
        FUNC_2(VAR_7);
        FUNC_6(&VAR_7, "%s/%s", VAR_13, VAR_4);


        if (FUNC_0(VAR_7, VAR_1) == 0) {
            FUNC_2(VAR_12);
            FUNC_2(VAR_8);
            return VAR_7;
        }
    }
    FUNC_2(VAR_7);
    FUNC_2(VAR_12);
    FUNC_2(VAR_8);


    return FUNC_9("/usr/bin/i3-nagbar");
}
