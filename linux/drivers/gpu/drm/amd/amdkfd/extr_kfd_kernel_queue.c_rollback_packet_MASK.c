
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kernel_queue {int pending_wptr; int* wptr_kernel; TYPE_3__* queue; int * wptr64_kernel; int pending_wptr64; TYPE_2__* dev; } ;
struct TYPE_8__ {int queue_size; } ;
struct TYPE_7__ {TYPE_4__ properties; } ;
struct TYPE_6__ {TYPE_1__* device_info; } ;
struct TYPE_5__ {int doorbell_size; } ;



__attribute__((used)) static void FUNC_0(struct kernel_queue *VAR_0)
{
 if (VAR_0->dev->device_info->doorbell_size == 8) {
  VAR_0->pending_wptr64 = *VAR_0->wptr64_kernel;
  VAR_0->pending_wptr = *VAR_0->wptr_kernel %
   (VAR_0->queue->properties.queue_size / 4);
 } else {
  VAR_0->pending_wptr = *VAR_0->wptr_kernel;
 }
}
