
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* base; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int VAR_1 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__) ;
 TYPE_1__ FUNC_3 (int *,char const*,int ) ;
 int FUNC_4 (char*,char*,char*,char const*) ;
 int * FUNC_5 (char const*,char) ;
 scalar_t__ FUNC_6 (char const*) ;

char *FUNC_7(const char *VAR_2)
{
    char *VAR_3, *VAR_4;


    if (VAR_2[0] == '/' || FUNC_5(VAR_2, '/') == ((void*)0))
        goto ReturnOrig;


    if ((VAR_3 = FUNC_1("H2O_ROOT")) == ((void*)0)) {
        VAR_3 = FUNC_0(VAR_0);
    }


    VAR_4 = FUNC_2(FUNC_6(VAR_3) + FUNC_6(VAR_2) + 2);
    FUNC_4(VAR_4, "%s/%s", VAR_3, VAR_2);
    return VAR_4;

ReturnOrig:
    return FUNC_3(((void*)0), VAR_2, VAR_1).base;
}
