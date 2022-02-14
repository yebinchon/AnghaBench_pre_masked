
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Uint32 ;
struct TYPE_3__ {int overlay_format; } ;
typedef TYPE_1__ SDL_Vout ;



int FUNC_0(SDL_Vout *VAR_0, Uint32 VAR_1)
{
    if (!VAR_0)
        return -1;

    VAR_0->overlay_format = VAR_1;
    return 0;
}
