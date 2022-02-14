
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u64 ;
struct amdgpu_vmhub {int vm_l2_pro_fault_cntl; int vm_l2_pro_fault_status; } ;
struct amdgpu_task_info {int pid; int task_name; int tgid; int process_name; } ;
struct amdgpu_iv_entry {int* src_data; size_t vmid_src; int client_id; int pasid; int vmid; int ring_id; int src_id; int timestamp; } ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dev; struct amdgpu_vmhub* vmhub; } ;
typedef int hub_name ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int,int) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*,int,int ,int ) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,int ,struct amdgpu_task_info*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct amdgpu_task_info*,int ,int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char*,int,char*) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_11,
    struct amdgpu_irq_src *VAR_12,
    struct amdgpu_iv_entry *VAR_13)
{
 struct amdgpu_vmhub *VAR_14;
 bool VAR_15 = !!(VAR_13->src_data[1] & 0x80);
 uint32_t VAR_16 = 0;
 u64 VAR_17;
 char VAR_18[10];

 VAR_17 = (u64)VAR_13->src_data[0] << 12;
 VAR_17 |= ((u64)VAR_13->src_data[1] & 0xf) << 44;

 if (VAR_15 && FUNC_3(VAR_11, VAR_17, VAR_13->pasid,
          VAR_13->timestamp))
  return 1;

 if (VAR_13->client_id == VAR_7) {
  FUNC_9(VAR_18, sizeof(VAR_18), "mmhub0");
  VAR_14 = &VAR_11->vmhub[VAR_1];
 } else if (VAR_13->client_id == VAR_8) {
  FUNC_9(VAR_18, sizeof(VAR_18), "mmhub1");
  VAR_14 = &VAR_11->vmhub[VAR_2];
 } else {
  FUNC_9(VAR_18, sizeof(VAR_18), "gfxhub0");
  VAR_14 = &VAR_11->vmhub[VAR_0];
 }


 if (!FUNC_4(VAR_11)) {





  if (VAR_13->vmid_src == VAR_0)
   FUNC_1(VAR_14->vm_l2_pro_fault_status);

  VAR_16 = FUNC_1(VAR_14->vm_l2_pro_fault_status);
  FUNC_2(VAR_14->vm_l2_pro_fault_cntl, 1, ~1);
 }

 if (FUNC_8()) {
  struct amdgpu_task_info VAR_19;

  FUNC_7(&VAR_19, 0, sizeof(struct amdgpu_task_info));
  FUNC_5(VAR_11, VAR_13->pasid, &VAR_19);

  FUNC_6(VAR_11->dev,
   "[%s] %s page fault (src_id:%u ring:%u vmid:%u "
   "pasid:%u, for process %s pid %d thread %s pid %d)\n",
   VAR_18, VAR_15 ? "retry" : "no-retry",
   VAR_13->src_id, VAR_13->ring_id, VAR_13->vmid,
   VAR_13->pasid, VAR_19.process_name, VAR_19.tgid,
   VAR_19.task_name, VAR_19.pid);
  FUNC_6(VAR_11->dev, "  in page starting at address 0x%016llx from client %d\n",
   VAR_17, VAR_13->client_id);
  if (!FUNC_4(VAR_11)) {
   FUNC_6(VAR_11->dev,
    "VM_L2_PROTECTION_FAULT_STATUS:0x%08X\n",
    VAR_16);
   FUNC_6(VAR_11->dev, "\t MORE_FAULTS: 0x%lx\n",
    FUNC_0(VAR_16,
    VAR_9, VAR_4));
   FUNC_6(VAR_11->dev, "\t WALKER_ERROR: 0x%lx\n",
    FUNC_0(VAR_16,
    VAR_9, VAR_10));
   FUNC_6(VAR_11->dev, "\t PERMISSION_FAULTS: 0x%lx\n",
    FUNC_0(VAR_16,
    VAR_9, VAR_5));
   FUNC_6(VAR_11->dev, "\t MAPPING_ERROR: 0x%lx\n",
    FUNC_0(VAR_16,
    VAR_9, VAR_3));
   FUNC_6(VAR_11->dev, "\t RW: 0x%lx\n",
    FUNC_0(VAR_16,
    VAR_9, VAR_6));

  }
 }

 return 0;
}
