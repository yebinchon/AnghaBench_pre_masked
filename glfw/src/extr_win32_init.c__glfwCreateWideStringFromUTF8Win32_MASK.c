
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char const*,int,int *,int) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;

WCHAR* FUNC_4(const char* VAR_2)
{
    WCHAR* VAR_3;
    int VAR_4;

    VAR_4 = FUNC_0(VAR_0, 0, VAR_2, -1, ((void*)0), 0);
    if (!VAR_4)
    {
        FUNC_1(VAR_1,
                             "Win32: Failed to convert string from UTF-8");
        return ((void*)0);
    }

    VAR_3 = FUNC_2(VAR_4, sizeof(WCHAR));

    if (!FUNC_0(VAR_0, 0, VAR_2, -1, VAR_3, VAR_4))
    {
        FUNC_1(VAR_1,
                             "Win32: Failed to convert string from UTF-8");
        FUNC_3(VAR_3);
        return ((void*)0);
    }

    return VAR_3;
}
