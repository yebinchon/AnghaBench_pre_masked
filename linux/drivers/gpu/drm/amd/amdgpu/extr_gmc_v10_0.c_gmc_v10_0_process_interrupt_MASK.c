
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u64 ;
struct amdgpu_vmhub {int vm_l2_pro_fault_cntl; int vm_l2_pro_fault_status; } ;
struct amdgpu_task_info {int pid; int task_name; int tgid; int process_name; } ;
struct amdgpu_iv_entry {size_t vmid_src; int client_id; int pasid; int vmid; int ring_id; int src_id; scalar_t__* src_data; } ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dev; struct amdgpu_vmhub* vmhub; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,int ,struct amdgpu_task_info*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct amdgpu_task_info*,int ,int) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_7,
           struct amdgpu_irq_src *VAR_8,
           struct amdgpu_iv_entry *VAR_9)
{
 struct amdgpu_vmhub *VAR_10 = &VAR_7->vmhub[VAR_9->vmid_src];
 uint32_t VAR_11 = 0;
 u64 VAR_12;

 VAR_12 = (u64)VAR_9->src_data[0] << 12;
 VAR_12 |= ((u64)VAR_9->src_data[1] & 0xf) << 44;

 if (!FUNC_3(VAR_7)) {





  if (VAR_9->vmid_src == VAR_0)
   FUNC_1(VAR_10->vm_l2_pro_fault_status);

  VAR_11 = FUNC_1(VAR_10->vm_l2_pro_fault_status);
  FUNC_2(VAR_10->vm_l2_pro_fault_cntl, 1, ~1);
 }

 if (FUNC_7()) {
  struct amdgpu_task_info VAR_13;

  FUNC_6(&VAR_13, 0, sizeof(struct amdgpu_task_info));
  FUNC_4(VAR_7, VAR_9->pasid, &VAR_13);

  FUNC_5(VAR_7->dev,
   "[%s] page fault (src_id:%u ring:%u vmid:%u pasid:%u, "
   "for process %s pid %d thread %s pid %d)\n",
   VAR_9->vmid_src ? "mmhub" : "gfxhub",
   VAR_9->src_id, VAR_9->ring_id, VAR_9->vmid,
   VAR_9->pasid, VAR_13.process_name, VAR_13.tgid,
   VAR_13.task_name, VAR_13.pid);
  FUNC_5(VAR_7->dev, "  in page starting at address 0x%016llx from client %d\n",
   VAR_12, VAR_9->client_id);
  if (!FUNC_3(VAR_7)) {
   FUNC_5(VAR_7->dev,
    "GCVM_L2_PROTECTION_FAULT_STATUS:0x%08X\n",
    VAR_11);
   FUNC_5(VAR_7->dev, "\t MORE_FAULTS: 0x%lx\n",
    FUNC_0(VAR_11,
    VAR_1, VAR_3));
   FUNC_5(VAR_7->dev, "\t WALKER_ERROR: 0x%lx\n",
    FUNC_0(VAR_11,
    VAR_1, VAR_6));
   FUNC_5(VAR_7->dev, "\t PERMISSION_FAULTS: 0x%lx\n",
    FUNC_0(VAR_11,
    VAR_1, VAR_4));
   FUNC_5(VAR_7->dev, "\t MAPPING_ERROR: 0x%lx\n",
    FUNC_0(VAR_11,
    VAR_1, VAR_2));
   FUNC_5(VAR_7->dev, "\t RW: 0x%lx\n",
    FUNC_0(VAR_11,
    VAR_1, VAR_5));
  }
 }

 return 0;
}
