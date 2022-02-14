
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t rindex; int * queue; } ;
typedef TYPE_1__ FrameQueue ;
typedef int Frame ;



__attribute__((used)) static Frame *FUNC_0(FrameQueue *VAR_0)
{
    return &VAR_0->queue[VAR_0->rindex];
}
