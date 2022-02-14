
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
typedef int int64_t ;
struct TYPE_5__ {int (* func_dequeueInputBuffer ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ SDL_AMediaCodec ;


 int FUNC_0 (int (*) (TYPE_1__*,int )) ;
 int FUNC_1 (TYPE_1__*,int ) ;

ssize_t FUNC_2(SDL_AMediaCodec* VAR_0, int64_t VAR_1)
{
    FUNC_0(VAR_0->func_dequeueInputBuffer);
    return VAR_0->func_dequeueInputBuffer(VAR_0, VAR_1);
}
