
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;

void
FUNC_7(char *VAR_0)
{
    FILE *VAR_1;
    char VAR_2[1024];
    int VAR_3;

    if((VAR_1 = FUNC_3(VAR_0, "r")) == ((void*)0)) {
 FUNC_4(VAR_0);
 FUNC_6();
    }

    while(FUNC_2(VAR_2, sizeof(VAR_2), VAR_1)) {
 VAR_3 = FUNC_5(VAR_2);
 if(VAR_3 && VAR_2[VAR_3-1] == '\n')
     VAR_2[VAR_3-1] = '\0';

 FUNC_0(VAR_2);
    }
    FUNC_1(VAR_1);
}
