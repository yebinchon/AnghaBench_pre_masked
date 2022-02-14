
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numer; int denom; int resizable; scalar_t__ monitor; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (int) ;

void FUNC_4(GLFWwindow* VAR_2, int VAR_3, int VAR_4)
{
    _GLFWwindow* VAR_5 = (_GLFWwindow*) VAR_2;
    FUNC_3(VAR_5 != ((void*)0));
    FUNC_3(VAR_3 != 0);
    FUNC_3(VAR_4 != 0);

    FUNC_0();

    if (VAR_3 != VAR_0 && VAR_4 != VAR_0)
    {
        if (VAR_3 <= 0 || VAR_4 <= 0)
        {
            FUNC_1(VAR_1,
                            "Invalid window aspect ratio %i:%i",
                            VAR_3, VAR_4);
            return;
        }
    }

    VAR_5->numer = VAR_3;
    VAR_5->denom = VAR_4;

    if (VAR_5->monitor || !VAR_5->resizable)
        return;

    FUNC_2(VAR_5, VAR_3, VAR_4);
}
