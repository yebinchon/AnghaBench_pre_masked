
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; int callbacks; } ;
typedef TYPE_1__ _GLFWwindow ;
struct TYPE_7__ {TYPE_1__* windowListHead; int contextSlot; } ;
typedef int GLFWwindow ;


 int FUNC_0 () ;
 TYPE_5__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;

void FUNC_6(GLFWwindow* VAR_1)
{
    _GLFWwindow* VAR_2 = (_GLFWwindow*) VAR_1;

    FUNC_0();


    if (VAR_2 == ((void*)0))
        return;


    FUNC_5(&VAR_2->callbacks, 0, sizeof(VAR_2->callbacks));



    if (VAR_2 == FUNC_2(&VAR_0.contextSlot))
        FUNC_4(((void*)0));

    FUNC_1(VAR_2);


    {
        _GLFWwindow** VAR_3 = &VAR_0.windowListHead;

        while (*VAR_3 != VAR_2)
            VAR_3 = &((*VAR_3)->next);

        *VAR_3 = VAR_2->next;
    }

    FUNC_3(VAR_2);
}
