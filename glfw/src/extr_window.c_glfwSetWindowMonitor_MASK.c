
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; int refreshRate; } ;
struct TYPE_5__ {TYPE_1__ videoMode; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int _GLFWmonitor ;
typedef int GLFWwindow ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (TYPE_2__*,int *,int,int,int,int,int) ;
 int FUNC_3 (int) ;

void FUNC_4(GLFWwindow* VAR_2,
                                  GLFWmonitor* VAR_3,
                                  int VAR_4, int VAR_5,
                                  int VAR_6, int VAR_7,
                                  int VAR_8)
{
    _GLFWwindow* VAR_9 = (_GLFWwindow*) VAR_2;
    _GLFWmonitor* VAR_10 = (_GLFWmonitor*) VAR_3;
    FUNC_3(VAR_9 != ((void*)0));
    FUNC_3(VAR_6 >= 0);
    FUNC_3(VAR_7 >= 0);

    FUNC_0();

    if (VAR_6 <= 0 || VAR_7 <= 0)
    {
        FUNC_1(VAR_1,
                        "Invalid window size %ix%i",
                        VAR_6, VAR_7);
        return;
    }

    if (VAR_8 < 0 && VAR_8 != VAR_0)
    {
        FUNC_1(VAR_1,
                        "Invalid refresh rate %i",
                        VAR_8);
        return;
    }

    VAR_9->videoMode.width = VAR_6;
    VAR_9->videoMode.height = VAR_7;
    VAR_9->videoMode.refreshRate = VAR_8;

    FUNC_2(VAR_9, VAR_10,
                                  VAR_4, VAR_5, VAR_6, VAR_7,
                                  VAR_8);
}
