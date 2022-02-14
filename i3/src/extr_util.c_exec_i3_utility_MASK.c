
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char**) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char**,char*,char*,char*) ;
 char* FUNC_5 (int ) ;
 int * VAR_1 ;
 int FUNC_6 (char*,...) ;

void FUNC_7(char *VAR_2, char *VAR_3[]) {

    char *VAR_4 = VAR_2;
    VAR_3[0] = VAR_4;
    FUNC_2(VAR_4, VAR_3);




    char *VAR_5 = FUNC_5(VAR_1[0]);
    char *VAR_6 = FUNC_1(VAR_5);
    FUNC_4(&VAR_4, "%s/%s", VAR_6, VAR_2);
    VAR_3[0] = VAR_4;
    FUNC_2(VAR_4, VAR_3);



    char VAR_7[VAR_0];
    if (FUNC_3("/proc/self/exe", VAR_7, VAR_0) == -1) {
        FUNC_6("could not read /proc/self/exe");
        FUNC_0(1);
    }
    VAR_6 = FUNC_1(VAR_7);
    FUNC_4(&VAR_4, "%s/%s", VAR_6, VAR_2);
    VAR_3[0] = VAR_4;
    FUNC_2(VAR_4, VAR_3);


    FUNC_6("Could not start %s", VAR_2);
    FUNC_0(2);
}
