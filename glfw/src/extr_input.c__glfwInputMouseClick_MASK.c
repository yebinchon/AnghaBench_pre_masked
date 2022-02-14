
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* mouseButton ) (int *,int,int,int) ;} ;
struct TYPE_5__ {char* mouseButtons; TYPE_1__ callbacks; scalar_t__ stickyMouseButtons; int lockKeyMods; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int FUNC_0 (int *,int,int,int) ;

void FUNC_1(_GLFWwindow* VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    if (VAR_6 < 0 || VAR_6 > VAR_2)
        return;

    if (!VAR_5->lockKeyMods)
        VAR_8 &= ~(VAR_0 | VAR_1);

    if (VAR_7 == VAR_3 && VAR_5->stickyMouseButtons)
        VAR_5->mouseButtons[VAR_6] = VAR_4;
    else
        VAR_5->mouseButtons[VAR_6] = (char) VAR_7;

    if (VAR_5->callbacks.mouseButton)
        VAR_5->callbacks.mouseButton((GLFWwindow*) VAR_5, VAR_6, VAR_7, VAR_8);
}
