
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int sdl_amedia_status_t ;
typedef int off_t ;
struct TYPE_7__ {int (* func_queueInputBuffer ) (TYPE_2__*,size_t,int ,size_t,int ,int) ;TYPE_1__* common; } ;
struct TYPE_6__ {int fake_fifo; } ;
typedef TYPE_2__ SDL_AMediaCodec ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t,int ,size_t,int ,int) ;
 int FUNC_1 (int (*) (TYPE_2__*,size_t,int ,size_t,int ,int)) ;
 int FUNC_2 (TYPE_2__*,size_t,int ,size_t,int ,int) ;

sdl_amedia_status_t FUNC_3(SDL_AMediaCodec* VAR_1, size_t VAR_2, off_t VAR_3, size_t VAR_4, uint64_t VAR_5, uint32_t VAR_6)
{
    FUNC_1(VAR_1->func_queueInputBuffer);
    if (VAR_6 & VAR_0) {
        return FUNC_0(&VAR_1->common->fake_fifo, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    }

    return VAR_1->func_queueInputBuffer(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
