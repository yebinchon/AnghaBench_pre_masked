
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arm_smmu_device {void* smr_mask_mask; void* streamid_mask; int smrs; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct arm_smmu_device*,int ) ;
 int FUNC_4 (struct arm_smmu_device*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct arm_smmu_device *VAR_2)
{
 u32 VAR_3;

 if (!VAR_2->smrs)
  return;






 VAR_3 = FUNC_2(VAR_0, VAR_2->streamid_mask);
 FUNC_4(VAR_2, FUNC_0(0), VAR_3);
 VAR_3 = FUNC_3(VAR_2, FUNC_0(0));
 VAR_2->streamid_mask = FUNC_1(VAR_0, VAR_3);

 VAR_3 = FUNC_2(VAR_1, VAR_2->streamid_mask);
 FUNC_4(VAR_2, FUNC_0(0), VAR_3);
 VAR_3 = FUNC_3(VAR_2, FUNC_0(0));
 VAR_2->smr_mask_mask = FUNC_1(VAR_1, VAR_3);
}
