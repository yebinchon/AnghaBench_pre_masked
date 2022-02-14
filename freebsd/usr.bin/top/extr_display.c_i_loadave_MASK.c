
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;

void
FUNC_2(int VAR_1, double VAR_2[])
{
    int VAR_3;


    FUNC_1();


    if (VAR_1 != -1)
    {
 FUNC_0("last pid: %5d;  ", VAR_1);
    }

    FUNC_0("load averages");

    for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
    {
 FUNC_0("%c %5.2f",
     VAR_3 == 0 ? ':' : ',',
     VAR_2[VAR_3]);
    }
    VAR_0 = VAR_1;
}
