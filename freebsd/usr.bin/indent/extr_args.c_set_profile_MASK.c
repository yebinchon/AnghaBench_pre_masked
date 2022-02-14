
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fname ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*) ;
 char* VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,char*,char const*,...) ;

void
FUNC_5(const char *VAR_2)
{
    FILE *VAR_3;
    char VAR_4[VAR_0];
    static char VAR_5[] = ".indent.pro";

    if (VAR_2 == ((void*)0))
 FUNC_4(VAR_4, sizeof(VAR_4), "%s/%s", FUNC_2("HOME"), VAR_5);
    else
 FUNC_4(VAR_4, sizeof(VAR_4), "%s", VAR_2 + 2);
    if ((VAR_3 = FUNC_1(VAR_1 = VAR_4, "r")) != ((void*)0)) {
 FUNC_3(VAR_3);
 (void) FUNC_0(VAR_3);
    }
    if ((VAR_3 = FUNC_1(VAR_1 = VAR_5, "r")) != ((void*)0)) {
 FUNC_3(VAR_3);
 (void) FUNC_0(VAR_3);
    }
    VAR_1 = "Command line";
}
