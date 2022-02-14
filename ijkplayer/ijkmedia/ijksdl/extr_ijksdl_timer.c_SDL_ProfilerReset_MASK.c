
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_sample; } ;
typedef TYPE_1__ SDL_Profiler ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(SDL_Profiler* VAR_0, int VAR_1)
{
    FUNC_0(VAR_0, 0, sizeof(SDL_Profiler));
    if (VAR_1 < 0)
        VAR_0->max_sample = 3;
    else
        VAR_0->max_sample = VAR_1;
}
