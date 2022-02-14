
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arm_smmu_smr {scalar_t__ valid; int mask; int id; } ;
struct arm_smmu_device {int features; struct arm_smmu_smr* smrs; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct arm_smmu_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct arm_smmu_device *VAR_4, int VAR_5)
{
 struct arm_smmu_smr *VAR_6 = VAR_4->smrs + VAR_5;
 u32 VAR_7 = FUNC_1(VAR_1, VAR_6->id) | FUNC_1(VAR_2, VAR_6->mask);

 if (!(VAR_4->features & VAR_0) && VAR_6->valid)
  VAR_7 |= VAR_3;
 FUNC_2(VAR_4, FUNC_0(VAR_5), VAR_7);
}
