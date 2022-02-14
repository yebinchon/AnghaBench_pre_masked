
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* character ) (int *,unsigned int) ;int (* charmods ) (int *,unsigned int,int) ;} ;
struct TYPE_5__ {TYPE_1__ callbacks; int lockKeyMods; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;
typedef scalar_t__ GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned int,int) ;
 int FUNC_1 (int *,unsigned int) ;

void FUNC_2(_GLFWwindow* VAR_2, unsigned int VAR_3, int VAR_4, GLFWbool VAR_5)
{
    if (VAR_3 < 32 || (VAR_3 > 126 && VAR_3 < 160))
        return;

    if (!VAR_2->lockKeyMods)
        VAR_4 &= ~(VAR_0 | VAR_1);

    if (VAR_2->callbacks.charmods)
        VAR_2->callbacks.charmods((GLFWwindow*) VAR_2, VAR_3, VAR_4);

    if (VAR_5)
    {
        if (VAR_2->callbacks.character)
            VAR_2->callbacks.character((GLFWwindow*) VAR_2, VAR_3);
    }
}
