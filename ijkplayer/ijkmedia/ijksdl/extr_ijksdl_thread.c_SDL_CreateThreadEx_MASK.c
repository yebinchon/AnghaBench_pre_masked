
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* func ) (void*) ;int id; int name; void* data; } ;
typedef TYPE_1__ SDL_Thread ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char const*,int) ;

SDL_Thread *FUNC_2(SDL_Thread *VAR_1, int (*VAR_2)(void *), void *VAR_3, const char *VAR_4)
{
    VAR_1->func = VAR_2;
    VAR_1->data = VAR_3;
    FUNC_1(VAR_1->name, VAR_4, sizeof(VAR_1->name) - 1);
    int VAR_5 = FUNC_0(&VAR_1->id, ((void*)0), VAR_0, VAR_1);
    if (VAR_5)
        return ((void*)0);

    return VAR_1;
}
