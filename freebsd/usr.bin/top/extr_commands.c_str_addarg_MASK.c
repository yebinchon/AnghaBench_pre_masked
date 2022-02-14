
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(char VAR_0[], int VAR_1, char VAR_2[], bool VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_1(VAR_2);
    if (!VAR_3)
    {
 VAR_4 += 2;
    }
    if (VAR_1 <= VAR_4)
    {
 return(0);
    }
    if (!VAR_3)
    {
 FUNC_0(VAR_0, ", ");
    }
    FUNC_0(VAR_0, VAR_2);
    return(VAR_1 - VAR_4);
}
