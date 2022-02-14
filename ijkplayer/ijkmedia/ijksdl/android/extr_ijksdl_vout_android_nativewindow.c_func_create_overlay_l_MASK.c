
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SDL_VoutOverlay ;
typedef int SDL_Vout ;



 int * FUNC_0 (int,int,int *) ;
 int * FUNC_1 (int,int,int,int *) ;

__attribute__((used)) static SDL_VoutOverlay *FUNC_2(int VAR_0, int VAR_1, int VAR_2, SDL_Vout *VAR_3)
{
    switch (VAR_2) {
    case 128:
        return FUNC_0(VAR_0, VAR_1, VAR_3);
    default:
        return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
    }
}
