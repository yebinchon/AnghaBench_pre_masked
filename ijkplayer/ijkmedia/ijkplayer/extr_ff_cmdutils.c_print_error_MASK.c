
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errbuf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,char*,char const*,char const*) ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 char* FUNC_3 (int ) ;

void FUNC_4(const char *VAR_1, int VAR_2)
{
    char VAR_3[128];
    const char *VAR_4 = VAR_3;

    if (FUNC_2(VAR_2, VAR_3, sizeof(VAR_3)) < 0)
        VAR_4 = FUNC_3(FUNC_0(VAR_2));
    FUNC_1(((void*)0), VAR_0, "%s: %s\n", VAR_1, VAR_4);
}
