
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 char const* FUNC_2 (int) ;

const char* FUNC_3(int VAR_6, int VAR_7)
{
    FUNC_0(((void*)0));

    if (VAR_6 != VAR_4)
    {
        if (VAR_6 != VAR_3 &&
            (VAR_6 < VAR_1 || VAR_6 > VAR_2) &&
            (VAR_6 < VAR_0 || VAR_6 > VAR_5))
        {
            return ((void*)0);
        }

        VAR_7 = FUNC_1(VAR_6);
    }

    return FUNC_2(VAR_7);
}
