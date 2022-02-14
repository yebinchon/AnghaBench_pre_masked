
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, int *VAR_1)
{
    int VAR_2 = 0;
    char VAR_3;



    if (*VAR_0 == '\0')
    {
 return(-1);
    }

    while ((VAR_3 = *VAR_0++) != '\0')
    {
 if (FUNC_0(VAR_3))
 {
     VAR_2 = VAR_2 * 10 + (VAR_3 - '0');
 }
 else if (FUNC_1(VAR_3))
 {
     break;
 }
 else
 {
     return(-1);
 }
    }
    *VAR_1 = VAR_2;
    return(0);
}
