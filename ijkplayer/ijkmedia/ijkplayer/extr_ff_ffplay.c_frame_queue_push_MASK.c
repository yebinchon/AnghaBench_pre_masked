
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ windex; scalar_t__ max_size; int mutex; int cond; int size; } ;
typedef TYPE_1__ FrameQueue ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(FrameQueue *VAR_0)
{
    if (++VAR_0->windex == VAR_0->max_size)
        VAR_0->windex = 0;
    FUNC_1(VAR_0->mutex);
    VAR_0->size++;
    FUNC_0(VAR_0->cond);
    FUNC_2(VAR_0->mutex);
}
