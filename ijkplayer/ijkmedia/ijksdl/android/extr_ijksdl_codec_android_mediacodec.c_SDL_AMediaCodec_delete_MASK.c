
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sdl_amedia_status_t ;
struct TYPE_5__ {int (* func_delete ) (TYPE_1__*) ;} ;
typedef TYPE_1__ SDL_AMediaCodec ;


 int VAR_0 ;
 int FUNC_0 (int (*) (TYPE_1__*)) ;
 int FUNC_1 (TYPE_1__*) ;

sdl_amedia_status_t FUNC_2(SDL_AMediaCodec* VAR_1)
{
    if (!VAR_1)
        return VAR_0;

    FUNC_0(VAR_1->func_delete);
    return VAR_1->func_delete(VAR_1);
}
