
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (float) ;
 int FUNC_1 (float,float) ;
 int FUNC_2 (float,float,float) ;

__attribute__((used)) static void FUNC_3(float VAR_0, float VAR_1, float VAR_2, float VAR_3, int VAR_4)
{
    float VAR_5, VAR_6, VAR_7;


    if (VAR_4 >= 5)
        VAR_5 = 999999.f;
    else
    {
        VAR_6 = (float) (FUNC_0(VAR_0) < FUNC_0(VAR_2) ? FUNC_0(VAR_0) : FUNC_0(VAR_2));
        VAR_7 = (float) (FUNC_0(VAR_1) < FUNC_0(VAR_3) ? FUNC_0(VAR_1) : FUNC_0(VAR_3));
        VAR_5 = VAR_6*VAR_6 + VAR_7*VAR_7;
    }


    if (VAR_5 < 0.1f)
    {
        VAR_6 = (VAR_0 + VAR_2) * 0.5f;
        VAR_7 = (VAR_1 + VAR_3) * 0.5f;
        FUNC_3(VAR_0, VAR_1, VAR_6, VAR_7, VAR_4 + 1);
        FUNC_3(VAR_6, VAR_1, VAR_2, VAR_7, VAR_4 + 1);
        FUNC_3(VAR_0, VAR_7, VAR_6, VAR_3, VAR_4 + 1);
        FUNC_3(VAR_6, VAR_7, VAR_2, VAR_3, VAR_4 + 1);
    }
    else
    {
        FUNC_1(VAR_0 * 30.f, VAR_1 * 30.f);
        FUNC_2( VAR_0 * 80.f, VAR_1 * 80.f, 0.f);
        FUNC_1(VAR_2 * 30.f, VAR_1 * 30.f);
        FUNC_2( VAR_2 * 80.f, VAR_1 * 80.f, 0.f);
        FUNC_1(VAR_2 * 30.f, VAR_3 * 30.f);
        FUNC_2( VAR_2 * 80.f, VAR_3 * 80.f, 0.f);
        FUNC_1(VAR_0 * 30.f, VAR_3 * 30.f);
        FUNC_2( VAR_0 * 80.f, VAR_3 * 80.f, 0.f);
    }
}
