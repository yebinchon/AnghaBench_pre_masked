
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _GLFWwindow ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,float) ;
 int FUNC_2 (int *,float) ;
 int FUNC_3 (int) ;

void FUNC_4(GLFWwindow* VAR_1, float VAR_2)
{
    _GLFWwindow* VAR_3 = (_GLFWwindow*) VAR_1;
    FUNC_3(VAR_3 != ((void*)0));
    FUNC_3(VAR_2 == VAR_2);
    FUNC_3(VAR_2 >= 0.f);
    FUNC_3(VAR_2 <= 1.f);

    FUNC_0();

    if (VAR_2 != VAR_2 || VAR_2 < 0.f || VAR_2 > 1.f)
    {
        FUNC_1(VAR_0, "Invalid window opacity %f", VAR_2);
        return;
    }

    FUNC_2(VAR_3, VAR_2);
}
