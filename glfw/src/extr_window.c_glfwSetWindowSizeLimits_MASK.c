
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int minwidth; int minheight; int maxwidth; int maxheight; int resizable; scalar_t__ monitor; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(GLFWwindow* VAR_2,
                                     int VAR_3, int VAR_4,
                                     int VAR_5, int VAR_6)
{
    _GLFWwindow* VAR_7 = (_GLFWwindow*) VAR_2;
    FUNC_3(VAR_7 != ((void*)0));

    FUNC_0();

    if (VAR_3 != VAR_0 && VAR_4 != VAR_0)
    {
        if (VAR_3 < 0 || VAR_4 < 0)
        {
            FUNC_1(VAR_1,
                            "Invalid window minimum size %ix%i",
                            VAR_3, VAR_4);
            return;
        }
    }

    if (VAR_5 != VAR_0 && VAR_6 != VAR_0)
    {
        if (VAR_5 < 0 || VAR_6 < 0 ||
            VAR_5 < VAR_3 || VAR_6 < VAR_4)
        {
            FUNC_1(VAR_1,
                            "Invalid window maximum size %ix%i",
                            VAR_5, VAR_6);
            return;
        }
    }

    VAR_7->minwidth = VAR_3;
    VAR_7->minheight = VAR_4;
    VAR_7->maxwidth = VAR_5;
    VAR_7->maxheight = VAR_6;

    if (VAR_7->monitor || !VAR_7->resizable)
        return;

    FUNC_2(VAR_7,
                                     VAR_3, VAR_4,
                                     VAR_5, VAR_6);
}
