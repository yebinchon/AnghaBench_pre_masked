
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernel_queue {int pending_wptr; TYPE_2__* queue; int * wptr_kernel; } ;
struct TYPE_3__ {int doorbell_ptr; } ;
struct TYPE_4__ {TYPE_1__ properties; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct kernel_queue *VAR_0)
{
 *VAR_0->wptr_kernel = VAR_0->pending_wptr;
 FUNC_0(VAR_0->queue->properties.doorbell_ptr,
    VAR_0->pending_wptr);
}
