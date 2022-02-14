
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ _GLFWcursor ;
struct TYPE_6__ {TYPE_1__* cursorListHead; } ;
typedef int GLFWimage ;
typedef int GLFWcursor ;


 int FUNC_0 (int *) ;
 TYPE_4__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int const*,int,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;

GLFWcursor* FUNC_5(const GLFWimage* VAR_1, int VAR_2, int VAR_3)
{
    _GLFWcursor* VAR_4;

    FUNC_2(VAR_1 != ((void*)0));

    FUNC_0(((void*)0));

    VAR_4 = FUNC_3(1, sizeof(_GLFWcursor));
    VAR_4->next = VAR_0.cursorListHead;
    VAR_0.cursorListHead = VAR_4;

    if (!FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3))
    {
        FUNC_4((GLFWcursor*) VAR_4);
        return ((void*)0);
    }

    return (GLFWcursor*) VAR_4;
}
