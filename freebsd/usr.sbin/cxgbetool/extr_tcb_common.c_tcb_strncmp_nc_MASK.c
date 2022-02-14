
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1(char *VAR_1, char *VAR_2, int VAR_3)
{

    int VAR_4 = 0;
    int VAR_5;


    VAR_5 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_3 && 0 == VAR_5 && !(VAR_0 == *VAR_1 && VAR_0 == *VAR_2); ++VAR_4) {



        VAR_5 = FUNC_0(*VAR_1++) - FUNC_0(*VAR_2++);
    }
    return VAR_5;
}
