
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_process_device_apertures {size_t gpu_id; size_t lds_base; size_t lds_limit; size_t gpuvm_base; size_t gpuvm_limit; size_t scratch_base; size_t scratch_limit; } ;
struct kfd_process_device {size_t lds_base; size_t lds_limit; size_t gpuvm_base; size_t gpuvm_limit; size_t scratch_base; size_t scratch_limit; TYPE_1__* dev; } ;
struct kfd_process {size_t pasid; int mutex; } ;
struct kfd_ioctl_get_process_apertures_args {size_t num_of_nodes; struct kfd_process_device_apertures* process_apertures; } ;
struct file {int dummy; } ;
struct TYPE_2__ {size_t id; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 int VAR_1 ;
 struct kfd_process_device* FUNC_1 (struct kfd_process*) ;
 struct kfd_process_device* FUNC_2 (struct kfd_process*,struct kfd_process_device*) ;
 scalar_t__ FUNC_3 (struct kfd_process*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2,
    struct kfd_process *VAR_3, void *VAR_4)
{
 struct kfd_ioctl_get_process_apertures_args *VAR_5 = VAR_4;
 struct kfd_process_device_apertures *VAR_6;
 struct kfd_process_device *VAR_7;

 FUNC_0(VAR_1, "get apertures for PASID %d", VAR_3->pasid);

 VAR_5->num_of_nodes = 0;

 FUNC_4(&VAR_3->mutex);


 if (FUNC_3(VAR_3)) {

  VAR_7 = FUNC_1(VAR_3);
  do {
   VAR_6 =
    &VAR_5->process_apertures[VAR_5->num_of_nodes];
   VAR_6->gpu_id = VAR_7->dev->id;
   VAR_6->lds_base = VAR_7->lds_base;
   VAR_6->lds_limit = VAR_7->lds_limit;
   VAR_6->gpuvm_base = VAR_7->gpuvm_base;
   VAR_6->gpuvm_limit = VAR_7->gpuvm_limit;
   VAR_6->scratch_base = VAR_7->scratch_base;
   VAR_6->scratch_limit = VAR_7->scratch_limit;

   FUNC_0(VAR_1,
    "node id %u\n", VAR_5->num_of_nodes);
   FUNC_0(VAR_1,
    "gpu id %u\n", VAR_7->dev->id);
   FUNC_0(VAR_1,
    "lds_base %llX\n", VAR_7->lds_base);
   FUNC_0(VAR_1,
    "lds_limit %llX\n", VAR_7->lds_limit);
   FUNC_0(VAR_1,
    "gpuvm_base %llX\n", VAR_7->gpuvm_base);
   FUNC_0(VAR_1,
    "gpuvm_limit %llX\n", VAR_7->gpuvm_limit);
   FUNC_0(VAR_1,
    "scratch_base %llX\n", VAR_7->scratch_base);
   FUNC_0(VAR_1,
    "scratch_limit %llX\n", VAR_7->scratch_limit);

   VAR_5->num_of_nodes++;

   VAR_7 = FUNC_2(VAR_3, VAR_7);
  } while (VAR_7 && (VAR_5->num_of_nodes < VAR_0));
 }

 FUNC_5(&VAR_3->mutex);

 return 0;
}
