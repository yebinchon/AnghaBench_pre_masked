
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,size_t,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 size_t FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*,size_t) ;

__attribute__((used)) static int FUNC_7(FILE *VAR_1,const char *VAR_2)
{
    char *VAR_3;
    size_t VAR_4;
    int VAR_5 = 0;

    VAR_4 = FUNC_5(VAR_2);
    if ((VAR_3 = FUNC_4(VAR_4+2)) == ((void*)0))
 FUNC_0(VAR_0, "virtual memory exhausted");

    while(FUNC_2(VAR_3, VAR_4+2, VAR_1) != ((void*)0))
    {
 if ((FUNC_6(VAR_2, VAR_3, VAR_4) == 0) &&
     (VAR_3[VAR_4] == '\n'))
 {
     VAR_5 = 1;
     break;
 }
    }
    FUNC_1(VAR_1);
    FUNC_3(VAR_3);
    return VAR_5;
}
