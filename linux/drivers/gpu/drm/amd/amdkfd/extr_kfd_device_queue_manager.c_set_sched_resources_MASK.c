
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scheduling_resources {unsigned long long queue_mask; unsigned long long gws_mask; int vmid_mask; scalar_t__ gds_heap_size; scalar_t__ gds_heap_base; scalar_t__ oac_mask; } ;
struct device_queue_manager {int packets; TYPE_2__* dev; } ;
struct TYPE_3__ {int num_queue_per_pipe; int num_pipe_per_mec; int queue_bitmap; int compute_vmid_bitmap; } ;
struct TYPE_4__ {TYPE_1__ shared_resources; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct scheduling_resources*) ;
 int FUNC_2 (char*,int ,unsigned long long) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct device_queue_manager *VAR_1)
{
 int VAR_2, VAR_3;
 struct scheduling_resources VAR_4;

 VAR_4.vmid_mask = VAR_1->dev->shared_resources.compute_vmid_bitmap;

 VAR_4.queue_mask = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  VAR_3 = (VAR_2 / VAR_1->dev->shared_resources.num_queue_per_pipe)
   / VAR_1->dev->shared_resources.num_pipe_per_mec;

  if (!FUNC_4(VAR_2, VAR_1->dev->shared_resources.queue_bitmap))
   continue;


  if (VAR_3 > 0)
   continue;





  if (FUNC_0(VAR_2 >= (sizeof(VAR_4.queue_mask)*8))) {
   FUNC_3("Invalid queue enabled by amdgpu: %d\n", VAR_2);
   break;
  }

  VAR_4.queue_mask |= (1ull << VAR_2);
 }
 VAR_4.gws_mask = ~0ull;
 VAR_4.oac_mask = VAR_4.gds_heap_base = VAR_4.gds_heap_size = 0;

 FUNC_2("Scheduling resources:\n"
   "vmid mask: 0x%8X\n"
   "queue mask: 0x%8llX\n",
   VAR_4.vmid_mask, VAR_4.queue_mask);

 return FUNC_1(&VAR_1->packets, &VAR_4);
}
