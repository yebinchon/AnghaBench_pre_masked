
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; } ;
struct TYPE_5__ {TYPE_1__ videoMode; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (int) ;

void FUNC_3(GLFWwindow* VAR_0, int VAR_1, int VAR_2)
{
    _GLFWwindow* VAR_3 = (_GLFWwindow*) VAR_0;
    FUNC_2(VAR_3 != ((void*)0));
    FUNC_2(VAR_1 >= 0);
    FUNC_2(VAR_2 >= 0);

    FUNC_0();

    VAR_3->videoMode.width = VAR_1;
    VAR_3->videoMode.height = VAR_2;

    FUNC_1(VAR_3, VAR_1, VAR_2);
}
