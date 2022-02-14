
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,double) ;
 int FUNC_2 (double) ;
 int FUNC_3 (int) ;

void FUNC_4(double VAR_2)
{
    FUNC_0();
    FUNC_3(VAR_2 == VAR_2);
    FUNC_3(VAR_2 >= 0.0);
    FUNC_3(VAR_2 <= VAR_0);

    if (VAR_2 != VAR_2 || VAR_2 < 0.0 || VAR_2 > VAR_0)
    {
        FUNC_1(VAR_1, "Invalid time %f", VAR_2);
        return;
    }

    FUNC_2(VAR_2);
}
