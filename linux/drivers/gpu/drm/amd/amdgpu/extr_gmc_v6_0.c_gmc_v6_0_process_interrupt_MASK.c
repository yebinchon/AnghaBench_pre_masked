
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_iv_entry {int * src_data; int src_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_5,
          struct amdgpu_irq_src *VAR_6,
          struct amdgpu_iv_entry *VAR_7)
{
 u32 VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_3);
 VAR_9 = FUNC_0(VAR_4);
 FUNC_1(VAR_2, 1, ~1);

 if (!VAR_8 && !VAR_9)
  return 0;

 if (VAR_1 == VAR_0)
  FUNC_3(VAR_5, 0);

 if (FUNC_5()) {
  FUNC_2(VAR_5->dev, "GPU fault detected: %d 0x%08x\n",
   VAR_7->src_id, VAR_7->src_data[0]);
  FUNC_2(VAR_5->dev, "  VM_CONTEXT1_PROTECTION_FAULT_ADDR   0x%08X\n",
   VAR_8);
  FUNC_2(VAR_5->dev, "  VM_CONTEXT1_PROTECTION_FAULT_STATUS 0x%08X\n",
   VAR_9);
  FUNC_4(VAR_5, VAR_9, VAR_8, 0);
 }

 return 0;
}
