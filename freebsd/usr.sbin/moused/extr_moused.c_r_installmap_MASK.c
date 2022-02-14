
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char) ;
 int ** VAR_4 ;
 int* VAR_5 ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_6)
{
    int VAR_7;
    int VAR_8;
    char *VAR_9;

    while (*VAR_6) {
 VAR_6 = FUNC_3(VAR_6);
 VAR_9 = VAR_6;
 while (FUNC_1(*VAR_6))
     ++VAR_6;
 VAR_6 = FUNC_3(VAR_6);
 if ((VAR_6 <= VAR_9) || (*VAR_6 != '='))
     return (VAR_0);
 VAR_8 = FUNC_0(VAR_9);

 VAR_6 = FUNC_3(++VAR_6);
 VAR_9 = VAR_6;
 while (FUNC_1(*VAR_6))
     ++VAR_6;
 if ((VAR_6 <= VAR_9) || (!FUNC_2(*VAR_6) && (*VAR_6 != '\0')))
     return (VAR_0);
 VAR_7 = FUNC_0(VAR_9);

 if ((VAR_8 <= 0) || (VAR_8 > VAR_1))
     return (VAR_0);
 if ((VAR_7 <= 0) || (VAR_7 > VAR_1))
     return (VAR_0);
 VAR_5[VAR_7 - 1] = 1 << (VAR_8 - 1);
 VAR_4[VAR_8 - 1] = &VAR_3[VAR_7 - 1];
    }

    return (VAR_2);
}
