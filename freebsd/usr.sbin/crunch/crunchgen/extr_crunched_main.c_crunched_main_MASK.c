
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub {int dummy; } ;


 char* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char**,char**) ;
 char* FUNC_2 (char*,char) ;

int
FUNC_3(int VAR_1, char **VAR_2, char **VAR_3)
{
    char *VAR_4;
    struct stub *VAR_5;
    int VAR_6, VAR_7;

    if(VAR_1 <= 1)
 FUNC_0();

    VAR_4 = FUNC_2(VAR_2[1], '/');
    VAR_0 = VAR_4? VAR_4+1 : VAR_2[1];

    return FUNC_1(--VAR_1, ++VAR_2, VAR_3);
}
