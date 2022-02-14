
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int widthMM; int heightMM; } ;
typedef TYPE_1__ _GLFWmonitor ;
typedef int GLFWmonitor ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;

void FUNC_2(GLFWmonitor* VAR_0, int* VAR_1, int* VAR_2)
{
    _GLFWmonitor* VAR_3 = (_GLFWmonitor*) VAR_0;
    FUNC_1(VAR_3 != ((void*)0));

    if (VAR_1)
        *VAR_1 = 0;
    if (VAR_2)
        *VAR_2 = 0;

    FUNC_0();

    if (VAR_1)
        *VAR_1 = VAR_3->widthMM;
    if (VAR_2)
        *VAR_2 = VAR_3->heightMM;
}
