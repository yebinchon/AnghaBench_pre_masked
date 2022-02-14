
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sdl_amedia_status_t ;
struct TYPE_5__ {int (* func_releaseOutputBuffer ) (TYPE_1__*,size_t,int) ;} ;
typedef TYPE_1__ SDL_AMediaCodec ;


 int FUNC_0 (int (*) (TYPE_1__*,size_t,int)) ;
 int FUNC_1 (TYPE_1__*,size_t,int) ;

sdl_amedia_status_t FUNC_2(SDL_AMediaCodec* VAR_0, size_t VAR_1, bool VAR_2)
{
    FUNC_0(VAR_0->func_releaseOutputBuffer);
    return VAR_0->func_releaseOutputBuffer(VAR_0, VAR_1, VAR_2);
}
