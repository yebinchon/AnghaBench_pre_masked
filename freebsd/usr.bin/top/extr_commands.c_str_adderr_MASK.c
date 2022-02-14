
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_0, int VAR_1, int VAR_2)
{
    const char *VAR_3;
    int VAR_4;

    VAR_3 = VAR_2 == 0 ? "Not a number" : FUNC_1(VAR_2);
    VAR_4 = FUNC_2(VAR_3) + 2;
    if (VAR_1 <= VAR_4)
    {
 return(0);
    }
    FUNC_0(VAR_0, ": ");
    FUNC_0(VAR_0, VAR_3);
    return(VAR_1 - VAR_4);
}
