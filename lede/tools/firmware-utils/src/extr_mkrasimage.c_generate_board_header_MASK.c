
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (char*,char*,char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (char*) ;

char *FUNC_7(char *VAR_2, char *VAR_3, char *VAR_4)
{
    unsigned int VAR_5;
    char *VAR_6;

    VAR_6 = FUNC_3(VAR_0);
    if (!VAR_6) {
        FUNC_0("Couldn't allocate memory for board header!");
        FUNC_1(VAR_1);
    }
    FUNC_5(VAR_6, 0xff, VAR_0);


    VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
    FUNC_4(VAR_6, &VAR_5, 4);


    FUNC_4(VAR_6 + 4, VAR_4, FUNC_6(VAR_4));
    VAR_6[4 + FUNC_6(VAR_4)] = 0x0;

    return VAR_6;
}
