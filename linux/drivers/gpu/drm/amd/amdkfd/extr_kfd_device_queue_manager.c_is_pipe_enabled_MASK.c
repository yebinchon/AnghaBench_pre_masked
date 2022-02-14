
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_queue_manager {TYPE_2__* dev; } ;
struct TYPE_3__ {int num_pipe_per_mec; int num_queue_per_pipe; int queue_bitmap; } ;
struct TYPE_4__ {TYPE_1__ shared_resources; } ;


 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static bool FUNC_1(struct device_queue_manager *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_1 * VAR_0->dev->shared_resources.num_pipe_per_mec
  + VAR_2 * VAR_0->dev->shared_resources.num_queue_per_pipe;


 for (VAR_3 = 0; VAR_3 < VAR_0->dev->shared_resources.num_queue_per_pipe; ++VAR_3)
  if (FUNC_0(VAR_4 + VAR_3,
         VAR_0->dev->shared_resources.queue_bitmap))
   return 1;
 return 0;
}
