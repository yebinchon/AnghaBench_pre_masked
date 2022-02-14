
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* opaque; scalar_t__ mutex; } ;
typedef TYPE_1__ SDL_Vout ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) inline static void FUNC_3(SDL_Vout *VAR_0)
{
    if (!VAR_0)
        return;

    if (VAR_0->mutex) {
        FUNC_0(VAR_0->mutex);
    }

    FUNC_1(VAR_0->opaque);
    FUNC_2(VAR_0, 0, sizeof(SDL_Vout));
    FUNC_1(VAR_0);
}
