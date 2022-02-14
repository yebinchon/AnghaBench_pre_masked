
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct kgd2kfd_shared_resources {int num_pipe_per_mec; int num_queue_per_pipe; int non_cp_doorbells_end; int non_cp_doorbells_start; int doorbell_start_offset; int doorbell_aperture_size; int doorbell_physical_address; int queue_bitmap; int sdma_doorbell_idx; int drm_render_minor; int gpuvm_size; int compute_vmid_bitmap; } ;
struct TYPE_11__ {scalar_t__ dev; } ;
struct TYPE_20__ {int last_non_cp; int first_non_cp; int sdma_engine; } ;
struct TYPE_18__ {int num_pipe_per_mec; int num_queue_per_pipe; int queue_bitmap; } ;
struct TYPE_15__ {scalar_t__ ready; } ;
struct TYPE_16__ {int queue; int pipe; scalar_t__ me; TYPE_4__ sched; } ;
struct TYPE_17__ {TYPE_5__ ring; } ;
struct TYPE_19__ {TYPE_7__ mec; TYPE_6__ kiq; } ;
struct TYPE_12__ {int max_pfn; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_10__ kfd; TYPE_9__ doorbell_index; TYPE_8__ gfx; TYPE_3__* ddev; TYPE_1__ vm_manager; } ;
struct TYPE_14__ {TYPE_2__* render; } ;
struct TYPE_13__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdgpu_device*,int *,int *,int *) ;
 int FUNC_1 (struct amdgpu_device*,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int,int ) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,struct kgd2kfd_shared_resources*) ;
 int FUNC_5 (int,int ) ;

void FUNC_6(struct amdgpu_device *VAR_5)
{
 int VAR_6;
 int VAR_7;

 if (VAR_5->kfd.dev) {
  struct kgd2kfd_shared_resources VAR_8 = {
   .compute_vmid_bitmap = VAR_4,
   .num_pipe_per_mec = VAR_5->gfx.mec.num_pipe_per_mec,
   .num_queue_per_pipe = VAR_5->gfx.mec.num_queue_per_pipe,
   .gpuvm_size = FUNC_5(VAR_5->vm_manager.max_pfn
       << VAR_1,
       VAR_0),
   .drm_render_minor = VAR_5->ddev->render->index,
   .sdma_doorbell_idx = VAR_5->doorbell_index.sdma_engine,

  };




  FUNC_2(VAR_8.queue_bitmap,
      VAR_5->gfx.mec.queue_bitmap,
      VAR_3);


  if (VAR_5->gfx.kiq.ring.sched.ready)
   FUNC_3(FUNC_1(VAR_5,
         VAR_5->gfx.kiq.ring.me - 1,
         VAR_5->gfx.kiq.ring.pipe,
         VAR_5->gfx.kiq.ring.queue),
      VAR_8.queue_bitmap);




  VAR_7 = 1
    * VAR_5->gfx.mec.num_pipe_per_mec
    * VAR_5->gfx.mec.num_queue_per_pipe;
  for (VAR_6 = VAR_7; VAR_6 < VAR_3; ++VAR_6)
   FUNC_3(VAR_6, VAR_8.queue_bitmap);

  FUNC_0(VAR_5,
    &VAR_8.doorbell_physical_address,
    &VAR_8.doorbell_aperture_size,
    &VAR_8.doorbell_start_offset);
  if (VAR_5->asic_type >= VAR_2) {
   VAR_8.non_cp_doorbells_start =
     VAR_5->doorbell_index.first_non_cp;
   VAR_8.non_cp_doorbells_end =
     VAR_5->doorbell_index.last_non_cp;
  }

  FUNC_4(VAR_5->kfd.dev, &VAR_8);
 }
}
