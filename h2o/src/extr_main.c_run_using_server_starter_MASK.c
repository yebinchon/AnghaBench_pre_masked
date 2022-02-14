
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** FUNC_0 (char const*,char const*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char**) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_2 ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3, const char *VAR_4)
{
    char **VAR_5 = FUNC_0(VAR_3, VAR_4);
    FUNC_3("H2O_VIA_MASTER", "", 1);
    FUNC_1(VAR_5[0], VAR_5);
    FUNC_2(VAR_2, "failed to spawn %s:%s\n", VAR_5[0], FUNC_4(VAR_1));
    return VAR_0;
}
