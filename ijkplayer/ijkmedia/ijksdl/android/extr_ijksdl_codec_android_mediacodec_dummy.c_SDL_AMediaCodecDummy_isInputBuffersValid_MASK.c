
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int request_stop; } ;
typedef TYPE_2__ SDL_AMediaCodec ;



__attribute__((used)) static bool FUNC_0(SDL_AMediaCodec* VAR_0)
{
    return !VAR_0->opaque->request_stop;
}
