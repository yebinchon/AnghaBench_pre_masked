
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double minimal_latency_seconds; int (* func_set_default_latency_seconds ) (TYPE_1__*,double) ;} ;
typedef TYPE_1__ SDL_Aout ;


 int FUNC_0 (TYPE_1__*,double) ;

void FUNC_1(SDL_Aout *VAR_0, double VAR_1)
{
    if (VAR_0) {
        if (VAR_0->func_set_default_latency_seconds)
            VAR_0->func_set_default_latency_seconds(VAR_0, VAR_1);
        VAR_0->minimal_latency_seconds = VAR_1;
    }
}
