
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cursor; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int _GLFWcursor ;
typedef int GLFWwindow ;
typedef int GLFWcursor ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(GLFWwindow* VAR_0, GLFWcursor* VAR_1)
{
    _GLFWwindow* VAR_2 = (_GLFWwindow*) VAR_0;
    _GLFWcursor* VAR_3 = (_GLFWcursor*) VAR_1;
    FUNC_2(VAR_2 != ((void*)0));

    FUNC_0();

    VAR_2->cursor = VAR_3;

    FUNC_1(VAR_2, VAR_3);
}
