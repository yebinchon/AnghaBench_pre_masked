
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct arm_smmu_master {int num_sids; scalar_t__* sids; struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int dummy; } ;
typedef int __le64 ;


 int * FUNC_0 (struct arm_smmu_device*,scalar_t__) ;
 int FUNC_1 (struct arm_smmu_master*,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_2(struct arm_smmu_master *VAR_0)
{
 int VAR_1, VAR_2;
 struct arm_smmu_device *VAR_3 = VAR_0->smmu;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_sids; ++VAR_1) {
  u32 VAR_4 = VAR_0->sids[VAR_1];
  __le64 *VAR_5 = FUNC_0(VAR_3, VAR_4);


  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
   if (VAR_0->sids[VAR_2] == VAR_4)
    break;
  if (VAR_2 < VAR_1)
   continue;

  FUNC_1(VAR_0, VAR_4, VAR_5);
 }
}
