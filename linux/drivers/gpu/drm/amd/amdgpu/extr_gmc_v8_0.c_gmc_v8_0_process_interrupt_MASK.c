
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kfd_vm_fault_info {int vmid; int status; int page_addr; int prot_valid; int prot_read; int prot_write; int prot_exec; void* mc_id; } ;
struct amdgpu_task_info {int pid; int task_name; int tgid; int process_name; } ;
struct amdgpu_iv_entry {int pasid; int * src_data; int src_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_2__ {int vm_fault_info_updated; struct kfd_vm_fault_info* vm_fault_info; } ;
struct amdgpu_device {TYPE_1__ gmc; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*,int) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct amdgpu_device*,int ,struct amdgpu_task_info*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct amdgpu_device*,int) ;
 int FUNC_10 (struct amdgpu_device*,int,int,int,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (struct amdgpu_task_info*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_13 () ;

__attribute__((used)) static int FUNC_14(struct amdgpu_device *VAR_10,
          struct amdgpu_irq_src *VAR_11,
          struct amdgpu_iv_entry *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15, VAR_16;

 if (FUNC_4(VAR_10)) {
  FUNC_8(VAR_10->dev, "GPU fault detected: %d 0x%08x\n",
   VAR_12->src_id, VAR_12->src_data[0]);
  FUNC_8(VAR_10->dev, " Can't decode VM fault info here on SRIOV VF\n");
  return 0;
 }

 VAR_13 = FUNC_1(VAR_7);
 VAR_14 = FUNC_1(VAR_9);
 VAR_15 = FUNC_1(VAR_8);

 FUNC_2(VAR_6, 1, ~1);

 if (!VAR_13 && !VAR_14)
  return 0;

 if (VAR_5 == VAR_0)
  FUNC_9(VAR_10, 0);

 if (FUNC_13()) {
  struct amdgpu_task_info VAR_17;

  FUNC_12(&VAR_17, 0, sizeof(struct amdgpu_task_info));
  FUNC_5(VAR_10, VAR_12->pasid, &VAR_17);

  FUNC_8(VAR_10->dev, "GPU fault detected: %d 0x%08x for process %s pid %d thread %s pid %d\n",
   VAR_12->src_id, VAR_12->src_data[0], VAR_17.process_name,
   VAR_17.tgid, VAR_17.task_name, VAR_17.pid);
  FUNC_8(VAR_10->dev, "  VM_CONTEXT1_PROTECTION_FAULT_ADDR   0x%08X\n",
   VAR_13);
  FUNC_8(VAR_10->dev, "  VM_CONTEXT1_PROTECTION_FAULT_STATUS 0x%08X\n",
   VAR_14);
  FUNC_10(VAR_10, VAR_14, VAR_13, VAR_15,
      VAR_12->pasid);
 }

 VAR_16 = FUNC_0(VAR_14, VAR_4,
        VAR_3);
 if (FUNC_3(VAR_10, VAR_16)
  && !FUNC_6(&VAR_10->gmc.vm_fault_info_updated)) {
  struct kfd_vm_fault_info *VAR_18 = VAR_10->gmc.vm_fault_info;
  u32 VAR_19 = FUNC_0(VAR_14,
     VAR_4,
     VAR_2);

  VAR_18->vmid = VAR_16;
  VAR_18->mc_id = FUNC_0(VAR_14,
         VAR_4,
         VAR_1);
  VAR_18->status = VAR_14;
  VAR_18->page_addr = VAR_13;
  VAR_18->prot_valid = VAR_19 & 0x7 ? 1 : 0;
  VAR_18->prot_read = VAR_19 & 0x8 ? 1 : 0;
  VAR_18->prot_write = VAR_19 & 0x10 ? 1 : 0;
  VAR_18->prot_exec = VAR_19 & 0x20 ? 1 : 0;
  FUNC_11();
  FUNC_7(&VAR_10->gmc.vm_fault_info_updated, 1);
 }

 return 0;
}
