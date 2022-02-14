
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*,char const*) ;
 int VAR_1 ;
 size_t FUNC_6 (char*,char*) ;

void
FUNC_7(const char *VAR_2)
{
    FILE *VAR_3;
    char VAR_4[VAR_0];

    if ((VAR_3 = FUNC_4(VAR_2, "r")) == ((void*)0)) {
 FUNC_5(VAR_1, "indent: cannot open file %s\n", VAR_2);
 FUNC_1(1);
    }
    while ((FUNC_3(VAR_4, VAR_0, VAR_3)) != ((void*)0)) {

 VAR_4[FUNC_6(VAR_4, " \t\n\r")] = '\0';
 FUNC_0(VAR_4);
    }
    FUNC_2(VAR_3);
}
