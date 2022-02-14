
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int buffer_proxy; int vout; } ;
typedef TYPE_1__ SDL_VoutOverlay_Opaque ;
typedef TYPE_2__ SDL_VoutOverlay ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static void FUNC_1(SDL_VoutOverlay *VAR_0)
{
    SDL_VoutOverlay_Opaque *VAR_1 = VAR_0->opaque;

    FUNC_0(VAR_1->vout, &VAR_1->buffer_proxy, 0);
}
