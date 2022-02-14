
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int LowPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef scalar_t__ DWORDLONG ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__,TYPE_1__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

DWORD FUNC_5(LARGE_INTEGER VAR_0,BOOL VAR_1)
{
    LARGE_INTEGER VAR_2,VAR_3,VAR_4;
    DWORDLONG VAR_5,VAR_6;
    DWORD VAR_7=16+0;
    DWORD VAR_8;
    if ((!VAR_1) || (!FUNC_3(&VAR_2)))
        VAR_8 = (FUNC_0() - VAR_0)*1;
    else
    {
        FUNC_2(&VAR_4,VAR_2,VAR_0);
        FUNC_4(&VAR_3);


        {
            VAR_5 = FUNC_1(*(DWORDLONG*)&VAR_4,VAR_7);
            VAR_6 = FUNC_1(*(DWORDLONG*)&VAR_3,VAR_7);

        }

        VAR_8 = (DWORD)((((DWORD)VAR_5)*1000)/(DWORD)(VAR_6));
        VAR_8 *=1;
    }
    return VAR_8;
}
