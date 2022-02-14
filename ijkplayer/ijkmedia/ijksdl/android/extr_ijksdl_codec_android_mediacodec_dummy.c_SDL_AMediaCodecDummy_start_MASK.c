
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sdl_amedia_status_t ;
struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int request_stop; } ;
typedef TYPE_2__ SDL_AMediaCodec ;


 int VAR_0 ;

__attribute__((used)) static sdl_amedia_status_t FUNC_0(SDL_AMediaCodec* VAR_1)
{
    VAR_1->opaque->request_stop = 0;
    return VAR_0;
}
