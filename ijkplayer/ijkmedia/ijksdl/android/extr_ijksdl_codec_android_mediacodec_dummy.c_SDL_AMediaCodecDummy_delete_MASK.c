
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sdl_amedia_status_t ;
struct TYPE_6__ {TYPE_1__* opaque; } ;
struct TYPE_5__ {int dummy_fifo; } ;
typedef TYPE_2__ SDL_AMediaCodec ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static sdl_amedia_status_t FUNC_2(SDL_AMediaCodec* VAR_1)
{
    FUNC_0(&VAR_1->opaque->dummy_fifo);

    FUNC_1(VAR_1);
    return VAR_0;
}
