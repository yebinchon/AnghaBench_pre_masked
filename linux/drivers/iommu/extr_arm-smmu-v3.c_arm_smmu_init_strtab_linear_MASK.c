
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct arm_smmu_strtab_cfg {int num_l1_ents; int strtab_base_cfg; void* strtab; int strtab_dma; } ;
struct arm_smmu_device {int sid_bits; int dev; struct arm_smmu_strtab_cfg strtab_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (int ,char*,int) ;
 void* FUNC_3 (int ,int,int *,int) ;

__attribute__((used)) static int FUNC_4(struct arm_smmu_device *VAR_7)
{
 void *VAR_8;
 u64 VAR_9;
 u32 VAR_10;
 struct arm_smmu_strtab_cfg *VAR_11 = &VAR_7->strtab_cfg;

 VAR_10 = (1 << VAR_7->sid_bits) * (VAR_5 << 3);
 VAR_8 = FUNC_3(VAR_7->dev, VAR_10, &VAR_11->strtab_dma,
         VAR_1 | VAR_6);
 if (!VAR_8) {
  FUNC_2(VAR_7->dev,
   "failed to allocate linear stream table (%u bytes)\n",
   VAR_10);
  return -VAR_0;
 }
 VAR_11->strtab = VAR_8;
 VAR_11->num_l1_ents = 1 << VAR_7->sid_bits;


 VAR_9 = FUNC_0(VAR_2, VAR_3);
 VAR_9 |= FUNC_0(VAR_4, VAR_7->sid_bits);
 VAR_11->strtab_base_cfg = VAR_9;

 FUNC_1(VAR_8, VAR_11->num_l1_ents);
 return 0;
}
