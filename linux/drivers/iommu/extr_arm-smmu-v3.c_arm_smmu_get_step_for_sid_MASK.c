
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arm_smmu_strtab_l1_desc {int * l2ptr; } ;
struct arm_smmu_strtab_cfg {int * strtab; struct arm_smmu_strtab_l1_desc* l1_desc; } ;
struct arm_smmu_device {int features; struct arm_smmu_strtab_cfg strtab_cfg; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __le64 *FUNC_0(struct arm_smmu_device *VAR_4, u32 VAR_5)
{
 __le64 *VAR_6;
 struct arm_smmu_strtab_cfg *VAR_7 = &VAR_4->strtab_cfg;

 if (VAR_4->features & VAR_0) {
  struct arm_smmu_strtab_l1_desc *VAR_8;
  int VAR_9;


  VAR_9 = (VAR_5 >> VAR_2) * VAR_1;
  VAR_8 = &VAR_7->l1_desc[VAR_9];
  VAR_9 = (VAR_5 & ((1 << VAR_2) - 1)) * VAR_3;
  VAR_6 = &VAR_8->l2ptr[VAR_9];
 } else {

  VAR_6 = &VAR_7->strtab[VAR_5 * VAR_3];
 }

 return VAR_6;
}
