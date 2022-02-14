
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _GLFWwindow ;
typedef int GLFWwindow ;
typedef int GLFWimage ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int,int const*) ;
 int FUNC_2 (int) ;

void FUNC_3(GLFWwindow* VAR_0,
                               int VAR_1, const GLFWimage* VAR_2)
{
    _GLFWwindow* VAR_3 = (_GLFWwindow*) VAR_0;
    FUNC_2(VAR_3 != ((void*)0));
    FUNC_2(VAR_1 >= 0);
    FUNC_2(VAR_1 == 0 || VAR_2 != ((void*)0));

    FUNC_0();
    FUNC_1(VAR_3, VAR_1, VAR_2);
}
