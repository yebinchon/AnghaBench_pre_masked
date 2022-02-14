
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double (* func_get_latency_seconds ) (TYPE_1__*) ;double minimal_latency_seconds; } ;
typedef TYPE_1__ SDL_Aout ;


 double FUNC_0 (TYPE_1__*) ;

double FUNC_1(SDL_Aout *VAR_0)
{
    if (!VAR_0)
        return 0;

    if (VAR_0->func_get_latency_seconds)
        return VAR_0->func_get_latency_seconds(VAR_0);

    return VAR_0->minimal_latency_seconds;
}
