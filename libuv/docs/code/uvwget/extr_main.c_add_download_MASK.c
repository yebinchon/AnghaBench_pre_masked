
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const FILE ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,int ,char const*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 char* FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char const*,...) ;
 int FUNC_5 (char*,char*,int) ;
 int VAR_3 ;

void FUNC_6(const char *VAR_4, int VAR_5) {
    char VAR_6[50];
    FUNC_5(VAR_6, "%d.download", VAR_5);
    FILE *VAR_7;

    VAR_7 = FUNC_3(VAR_6, "w");
    if (VAR_7 == ((void*)0)) {
        FUNC_4(VAR_3, "Error opening %s\n", VAR_6);
        return;
    }

    CURL *VAR_8 = FUNC_0();
    FUNC_1(VAR_8, VAR_1, VAR_7);
    FUNC_1(VAR_8, VAR_0, VAR_4);
    FUNC_2(VAR_2, VAR_8);
    FUNC_4(VAR_3, "Added download %s -> %s\n", VAR_4, VAR_6);
}
