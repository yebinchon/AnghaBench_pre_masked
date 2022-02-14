
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _GLFWmonitor ;
typedef int GLFWmonitor ;


 int FUNC_0 () ;
 int FUNC_1 (int *,float*,float*) ;
 int FUNC_2 (int ) ;

void FUNC_3(GLFWmonitor* VAR_0,
                                        float* VAR_1, float* VAR_2)
{
    _GLFWmonitor* VAR_3 = (_GLFWmonitor*) VAR_0;
    FUNC_2(VAR_3 != ((void*)0));

    if (VAR_1)
        *VAR_1 = 0.f;
    if (VAR_2)
        *VAR_2 = 0.f;

    FUNC_0();
    FUNC_1(VAR_3, VAR_1, VAR_2);
}
