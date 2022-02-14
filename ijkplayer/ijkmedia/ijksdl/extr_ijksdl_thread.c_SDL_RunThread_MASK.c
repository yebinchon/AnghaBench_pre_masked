
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int (* func ) (int ) ;int retval; int name; } ;
typedef TYPE_1__ SDL_Thread ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void *FUNC_6(void *VAR_0)
{
    SDL_Thread *VAR_1 = VAR_0;
    FUNC_0("SDL_RunThread: [%d] %s\n", (int)FUNC_2(), VAR_1->name);
    FUNC_4(FUNC_3(), VAR_1->name);
    VAR_1->retval = VAR_1->func(VAR_1->data);



    return ((void*)0);
}
