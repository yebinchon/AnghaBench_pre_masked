
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


union PM4_MES_TYPE_3_HEADER {int type; unsigned int queue_size; int is_interop; int priority; int queue_percent; int doorbell_ptr; int * cu_mask; int eop_ring_buffer_size; int eop_ring_buffer_address; int * write_ptr; int * read_ptr; scalar_t__ queue_address; scalar_t__ vmid; int doorbell_off; int u32all; int opcode; } ;
typedef int uint32_t ;
struct queue_properties {int type; unsigned int queue_size; int is_interop; int priority; int queue_percent; int doorbell_ptr; int * cu_mask; int eop_ring_buffer_size; int eop_ring_buffer_address; int * write_ptr; int * read_ptr; scalar_t__ queue_address; scalar_t__ vmid; int doorbell_off; int u32all; int opcode; } ;
struct kfd_dev {TYPE_3__* device_info; TYPE_1__* dqm; } ;
struct TYPE_13__ {int (* initialize ) (struct kernel_queue*,struct kfd_dev*,int,unsigned int) ;} ;
struct kernel_queue {TYPE_9__* pq; TYPE_9__* eop_mem; TYPE_9__* rptr_mem; TYPE_9__* wptr_mem; TYPE_4__* queue; TYPE_5__* mqd_mgr; TYPE_9__* fence_mem_obj; scalar_t__ fence_gpu_addr; union PM4_MES_TYPE_3_HEADER* fence_kernel_address; int eop_gpu_addr; scalar_t__ wptr_gpu_addr; scalar_t__ rptr_gpu_addr; scalar_t__ pq_gpu_addr; union PM4_MES_TYPE_3_HEADER* wptr_kernel; union PM4_MES_TYPE_3_HEADER* rptr_kernel; union PM4_MES_TYPE_3_HEADER* pq_kernel_addr; TYPE_2__ ops_asic_specific; int nop_packet; struct kfd_dev* dev; } ;
typedef int prop ;
typedef int nop ;
typedef enum kfd_queue_type { ____Placeholder_kfd_queue_type } kfd_queue_type ;
struct TYPE_17__ {scalar_t__ gpu_addr; union PM4_MES_TYPE_3_HEADER* cpu_ptr; } ;
struct TYPE_16__ {int (* free_mqd ) (TYPE_5__*,int ,int ) ;int (* load_mqd ) (TYPE_5__*,int ,int ,int ,int *,int *) ;int (* init_mqd ) (TYPE_5__*,int *,int ,int *,int *) ;int dev; int (* allocate_mqd ) (int ,int *) ;} ;
struct TYPE_15__ {int mqd_mem_obj; int mqd; int properties; int queue; int pipe; int gart_mqd_addr; int process; struct kfd_dev* device; } ;
struct TYPE_14__ {int doorbell_size; } ;
struct TYPE_12__ {TYPE_5__** mqd_mgrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_4__**,union PM4_MES_TYPE_3_HEADER*) ;
 int FUNC_2 (struct kfd_dev*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct kfd_dev*,int,TYPE_9__**) ;
 int FUNC_5 (struct kfd_dev*,TYPE_9__*) ;
 int FUNC_6 (struct kfd_dev*,int ) ;
 int FUNC_7 (union PM4_MES_TYPE_3_HEADER*,int ,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (struct kernel_queue*,struct kfd_dev*,int,unsigned int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (TYPE_5__*,int *,int ,int *,int *) ;
 int FUNC_14 (TYPE_5__*,int ,int ,int ,int *,int *) ;
 int FUNC_15 (TYPE_5__*,int ,int ) ;
 int FUNC_16 (TYPE_4__*) ;

__attribute__((used)) static bool FUNC_17(struct kernel_queue *VAR_9, struct kfd_dev *VAR_10,
  enum kfd_queue_type VAR_11, unsigned int VAR_12)
{
 struct queue_properties VAR_13;
 int VAR_14;
 union PM4_MES_TYPE_3_HEADER VAR_15;

 if (FUNC_0(VAR_11 != 129 && VAR_11 != 128))
  return 0;

 FUNC_8("Initializing queue type %d size %d\n", 128,
   VAR_12);

 FUNC_7(&VAR_13, 0, sizeof(VAR_13));
 FUNC_7(&VAR_15, 0, sizeof(VAR_15));

 VAR_15.opcode = VAR_0;
 VAR_15.type = VAR_7;
 VAR_15.u32all |= VAR_6;

 VAR_9->dev = VAR_10;
 VAR_9->nop_packet = VAR_15.u32all;
 switch (VAR_11) {
 case 129:
  VAR_9->mqd_mgr = VAR_10->dqm->mqd_mgrs[VAR_3];
  break;
 case 128:
  VAR_9->mqd_mgr = VAR_10->dqm->mqd_mgrs[VAR_4];
  break;
 default:
  FUNC_9("Invalid queue type %d\n", VAR_11);
  return 0;
 }

 if (!VAR_9->mqd_mgr)
  return 0;

 VAR_13.doorbell_ptr = FUNC_2(VAR_10, &VAR_13.doorbell_off);

 if (!VAR_13.doorbell_ptr) {
  FUNC_9("Failed to initialize doorbell");
  goto err_get_kernel_doorbell;
 }

 VAR_14 = FUNC_4(VAR_10, VAR_12, &VAR_9->pq);
 if (VAR_14 != 0) {
  FUNC_9("Failed to init pq queues size %d\n", VAR_12);
  goto err_pq_allocate_vidmem;
 }

 VAR_9->pq_kernel_addr = VAR_9->pq->cpu_ptr;
 VAR_9->pq_gpu_addr = VAR_9->pq->gpu_addr;

 VAR_14 = VAR_9->ops_asic_specific.initialize(VAR_9, VAR_10, VAR_11, VAR_12);
 if (!VAR_14)
  goto err_eop_allocate_vidmem;

 VAR_14 = FUNC_4(VAR_10, sizeof(*VAR_9->rptr_kernel),
     &VAR_9->rptr_mem);

 if (VAR_14 != 0)
  goto err_rptr_allocate_vidmem;

 VAR_9->rptr_kernel = VAR_9->rptr_mem->cpu_ptr;
 VAR_9->rptr_gpu_addr = VAR_9->rptr_mem->gpu_addr;

 VAR_14 = FUNC_4(VAR_10, VAR_10->device_info->doorbell_size,
     &VAR_9->wptr_mem);

 if (VAR_14 != 0)
  goto err_wptr_allocate_vidmem;

 VAR_9->wptr_kernel = VAR_9->wptr_mem->cpu_ptr;
 VAR_9->wptr_gpu_addr = VAR_9->wptr_mem->gpu_addr;

 FUNC_7(VAR_9->pq_kernel_addr, 0, VAR_12);
 FUNC_7(VAR_9->rptr_kernel, 0, sizeof(*VAR_9->rptr_kernel));
 FUNC_7(VAR_9->wptr_kernel, 0, sizeof(*VAR_9->wptr_kernel));

 VAR_13.queue_size = VAR_12;
 VAR_13.is_interop = 0;
 VAR_13.priority = 1;
 VAR_13.queue_percent = 100;
 VAR_13.type = VAR_11;
 VAR_13.vmid = 0;
 VAR_13.queue_address = VAR_9->pq_gpu_addr;
 VAR_13.read_ptr = (uint32_t *) VAR_9->rptr_gpu_addr;
 VAR_13.write_ptr = (uint32_t *) VAR_9->wptr_gpu_addr;
 VAR_13.eop_ring_buffer_address = VAR_9->eop_gpu_addr;
 VAR_13.eop_ring_buffer_size = VAR_5;
 VAR_13.cu_mask = ((void*)0);

 if (FUNC_1(&VAR_9->queue, &VAR_13) != 0)
  goto err_init_queue;

 VAR_9->queue->device = VAR_10;
 VAR_9->queue->process = FUNC_3(VAR_8);

 VAR_9->queue->mqd_mem_obj = VAR_9->mqd_mgr->allocate_mqd(VAR_9->mqd_mgr->dev,
     &VAR_9->queue->properties);
 if (!VAR_9->queue->mqd_mem_obj)
  goto err_allocate_mqd;
 VAR_9->mqd_mgr->init_mqd(VAR_9->mqd_mgr, &VAR_9->queue->mqd,
     VAR_9->queue->mqd_mem_obj,
     &VAR_9->queue->gart_mqd_addr,
     &VAR_9->queue->properties);

 if (VAR_11 == 128) {
  FUNC_8("Assigning hiq to hqd\n");
  VAR_9->queue->pipe = VAR_1;
  VAR_9->queue->queue = VAR_2;
  VAR_9->mqd_mgr->load_mqd(VAR_9->mqd_mgr, VAR_9->queue->mqd,
    VAR_9->queue->pipe, VAR_9->queue->queue,
    &VAR_9->queue->properties, ((void*)0));
 } else {


  VAR_14 = FUNC_4(VAR_10, sizeof(uint32_t),
      &VAR_9->fence_mem_obj);

  if (VAR_14 != 0)
   goto err_alloc_fence;

  VAR_9->fence_kernel_address = VAR_9->fence_mem_obj->cpu_ptr;
  VAR_9->fence_gpu_addr = VAR_9->fence_mem_obj->gpu_addr;
 }

 FUNC_10(VAR_9->queue);

 return 1;
err_alloc_fence:
 VAR_9->mqd_mgr->free_mqd(VAR_9->mqd_mgr, VAR_9->queue->mqd, VAR_9->queue->mqd_mem_obj);
err_allocate_mqd:
 FUNC_16(VAR_9->queue);
err_init_queue:
 FUNC_5(VAR_10, VAR_9->wptr_mem);
err_wptr_allocate_vidmem:
 FUNC_5(VAR_10, VAR_9->rptr_mem);
err_rptr_allocate_vidmem:
 FUNC_5(VAR_10, VAR_9->eop_mem);
err_eop_allocate_vidmem:
 FUNC_5(VAR_10, VAR_9->pq);
err_pq_allocate_vidmem:
 FUNC_6(VAR_10, VAR_13.doorbell_ptr);
err_get_kernel_doorbell:
 return 0;

}
