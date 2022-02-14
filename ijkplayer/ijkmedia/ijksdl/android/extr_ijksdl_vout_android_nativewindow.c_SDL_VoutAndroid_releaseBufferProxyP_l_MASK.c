
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SDL_Vout ;
typedef int SDL_AMediaCodecBufferProxy ;


 int FUNC_0 (int *,int *,int) ;

int FUNC_1(SDL_Vout *VAR_0, SDL_AMediaCodecBufferProxy **VAR_1, bool VAR_2)
{
    int VAR_3 = 0;

    if (!VAR_1)
        return 0;

    VAR_3 = FUNC_0(VAR_0, *VAR_1, VAR_2);
    *VAR_1 = ((void*)0);
    return VAR_3;
}
