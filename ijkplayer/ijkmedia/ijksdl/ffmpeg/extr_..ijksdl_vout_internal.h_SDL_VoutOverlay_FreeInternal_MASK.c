
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* opaque; } ;
typedef TYPE_1__ SDL_VoutOverlay ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) inline static void FUNC_2(SDL_VoutOverlay *VAR_0)
{
    if (!VAR_0)
        return;

    if (VAR_0->opaque)
        FUNC_0(VAR_0->opaque);

    FUNC_1(VAR_0, 0, sizeof(SDL_VoutOverlay));
    FUNC_0(VAR_0);
}
