
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_3__ {void* num_busy_placement; void* num_placement; TYPE_2__* busy_placement; TYPE_2__* placement; } ;
struct TYPE_4__ {int flags; scalar_t__ lpfn; scalar_t__ fpfn; } ;
struct virtio_gpu_object {TYPE_1__ placement; TYPE_2__ placement_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct virtio_gpu_object *VAR_3)
{
 u32 VAR_4 = 1;

 VAR_3->placement.placement = &VAR_3->placement_code;
 VAR_3->placement.busy_placement = &VAR_3->placement_code;
 VAR_3->placement_code.fpfn = 0;
 VAR_3->placement_code.lpfn = 0;
 VAR_3->placement_code.flags =
  VAR_2 | VAR_1 |
  VAR_0;
 VAR_3->placement.num_placement = VAR_4;
 VAR_3->placement.num_busy_placement = VAR_4;

}
