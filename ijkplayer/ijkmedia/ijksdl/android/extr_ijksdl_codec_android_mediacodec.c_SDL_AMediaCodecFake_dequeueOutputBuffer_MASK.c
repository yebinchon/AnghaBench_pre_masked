
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int int64_t ;
struct TYPE_7__ {scalar_t__ (* func_dequeueOutputBuffer ) (TYPE_2__*,int *,int ) ;TYPE_1__* common; } ;
struct TYPE_6__ {int fake_fifo; } ;
typedef int SDL_AMediaCodecBufferInfo ;
typedef TYPE_2__ SDL_AMediaCodec ;


 scalar_t__ FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__ (*) (TYPE_2__*,int *,int )) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int ) ;

ssize_t FUNC_4(SDL_AMediaCodec* VAR_0, SDL_AMediaCodecBufferInfo *VAR_1, int64_t VAR_2)
{
    if (FUNC_1(&VAR_0->common->fake_fifo) > 0) {
        ssize_t VAR_3 = FUNC_0(&VAR_0->common->fake_fifo, VAR_1, 0);
        if (VAR_3 >= 0)
            return VAR_3;
    }

    FUNC_2(VAR_0->func_dequeueOutputBuffer);
    return VAR_0->func_dequeueOutputBuffer(VAR_0, VAR_1, VAR_2);
}
