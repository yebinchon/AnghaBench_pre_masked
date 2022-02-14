
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
typedef TYPE_1__ SDL_Vout ;
typedef int SDL_AMediaCodecBufferProxy ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_3(SDL_Vout *VAR_0, SDL_AMediaCodecBufferProxy *VAR_1, bool VAR_2)
{
    int VAR_3 = 0;

    if (!VAR_1)
        return 0;

    FUNC_0(VAR_0->mutex);
    VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
    FUNC_1(VAR_0->mutex);
    return VAR_3;
}
