
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct arm_smmu_smr {int mask; int id; int valid; } ;
struct arm_smmu_device {int num_mapping_groups; struct arm_smmu_smr* smrs; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct arm_smmu_device *VAR_2, u16 VAR_3, u16 VAR_4)
{
 struct arm_smmu_smr *VAR_5 = VAR_2->smrs;
 int VAR_6, VAR_7 = -VAR_1;


 if (!VAR_5)
  return VAR_3;


 for (VAR_6 = 0; VAR_6 < VAR_2->num_mapping_groups; ++VAR_6) {
  if (!VAR_5[VAR_6].valid) {




   if (VAR_7 < 0)
    VAR_7 = VAR_6;
   continue;
  }







  if ((VAR_4 & VAR_5[VAR_6].mask) == VAR_4 &&
      !((VAR_3 ^ VAR_5[VAR_6].id) & ~VAR_5[VAR_6].mask))
   return VAR_6;





  if (!((VAR_3 ^ VAR_5[VAR_6].id) & ~(VAR_5[VAR_6].mask | VAR_4)))
   return -VAR_0;
 }

 return VAR_7;
}
