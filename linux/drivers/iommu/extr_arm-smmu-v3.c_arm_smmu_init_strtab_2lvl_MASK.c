
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct arm_smmu_device*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 void* FUNC_4 (int ,int,int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct arm_smmu_device *VAR_10)
{
 void *VAR_11;
 u64 VAR_12;
 u32 VAR_13, VAR_14;
 struct arm_smmu_strtab_cfg *VAR_15 = &VAR_10->strtab_cfg;


 VAR_13 = VAR_7 - (FUNC_5(VAR_6) + 3);
 VAR_13 = FUNC_6(VAR_13, VAR_10->sid_bits - VAR_8);
 VAR_15->num_l1_ents = 1 << VAR_13;

 VAR_13 += VAR_8;
 if (VAR_13 < VAR_10->sid_bits)
  FUNC_3(VAR_10->dev,
    "2-level strtab only covers %u/%u bits of SID\n",
    VAR_13, VAR_10->sid_bits);

 VAR_14 = VAR_15->num_l1_ents * (VAR_6 << 3);
 VAR_11 = FUNC_4(VAR_10->dev, VAR_14, &VAR_15->strtab_dma,
         VAR_1 | VAR_9);
 if (!VAR_11) {
  FUNC_2(VAR_10->dev,
   "failed to allocate l1 stream table (%u bytes)\n",
   VAR_13);
  return -VAR_0;
 }
 VAR_15->strtab = VAR_11;


 VAR_12 = FUNC_0(VAR_2, VAR_3);
 VAR_12 |= FUNC_0(VAR_4, VAR_13);
 VAR_12 |= FUNC_0(VAR_5, VAR_8);
 VAR_15->strtab_base_cfg = VAR_12;

 return FUNC_1(VAR_10);
}
