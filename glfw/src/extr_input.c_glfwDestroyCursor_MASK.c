
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* cursor; struct TYPE_6__* next; } ;
typedef TYPE_1__ _GLFWwindow ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ _GLFWcursor ;
struct TYPE_8__ {TYPE_2__* cursorListHead; TYPE_1__* windowListHead; } ;
typedef int GLFWwindow ;
typedef int GLFWcursor ;


 int FUNC_0 () ;
 TYPE_5__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(GLFWcursor* VAR_1)
{
    _GLFWcursor* VAR_2 = (_GLFWcursor*) VAR_1;

    FUNC_0();

    if (VAR_2 == ((void*)0))
        return;


    {
        _GLFWwindow* VAR_3;

        for (VAR_3 = VAR_0.windowListHead; VAR_3; VAR_3 = VAR_3->next)
        {
            if (VAR_3->cursor == VAR_2)
                FUNC_3((GLFWwindow*) VAR_3, ((void*)0));
        }
    }

    FUNC_1(VAR_2);


    {
        _GLFWcursor** VAR_4 = &VAR_0.cursorListHead;

        while (*VAR_4 != VAR_2)
            VAR_4 = &((*VAR_4)->next);

        *VAR_4 = VAR_2->next;
    }

    FUNC_2(VAR_2);
}
