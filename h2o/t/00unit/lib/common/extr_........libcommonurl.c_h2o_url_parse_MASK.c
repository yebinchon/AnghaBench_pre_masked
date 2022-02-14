
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scheme; } ;
typedef TYPE_1__ h2o_url_t ;


 size_t VAR_0 ;
 int FUNC_0 (char const*,char const*,TYPE_1__*) ;
 char* FUNC_1 (char const*,char const*,int *) ;
 size_t FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_1, size_t VAR_2, h2o_url_t *VAR_3)
{
    const char *VAR_4, *VAR_5;

    if (VAR_2 == VAR_0)
        VAR_2 = FUNC_2(VAR_1);
    VAR_4 = VAR_1 + VAR_2;


    if ((VAR_5 = FUNC_1(VAR_1, VAR_4, &VAR_3->scheme)) == ((void*)0))
        return -1;


    if (!(VAR_4 - VAR_5 >= 2 && VAR_5[0] == '/' && VAR_5[1] == '/'))
        return -1;
    VAR_5 += 2;

    return FUNC_0(VAR_5, VAR_4, VAR_3);
}
