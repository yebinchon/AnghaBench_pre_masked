
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
typedef int SDL_VoutOverlay ;
typedef TYPE_1__ SDL_Vout ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int,int,int,TYPE_1__*) ;

__attribute__((used)) static SDL_VoutOverlay *FUNC_3(int VAR_0, int VAR_1, int VAR_2, SDL_Vout *VAR_3)
{
    FUNC_0(VAR_3->mutex);
    SDL_VoutOverlay *VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_1(VAR_3->mutex);
    return VAR_4;
}
