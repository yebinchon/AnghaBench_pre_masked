
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amd_iommu_fault {int flags; int tag; int device_id; int pasid; int address; } ;
struct amd_iommu {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,struct amd_iommu_fault*) ;
 int VAR_1 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct amd_iommu *VAR_2, u64 *VAR_3)
{
 struct amd_iommu_fault VAR_4;

 if (FUNC_3(VAR_3[0]) != VAR_0) {
  FUNC_6("Unknown PPR request received\n");
  return;
 }

 VAR_4.address = VAR_3[1];
 VAR_4.pasid = FUNC_2(VAR_3[0]);
 VAR_4.device_id = FUNC_0(VAR_3[0]);
 VAR_4.tag = FUNC_4(VAR_3[0]);
 VAR_4.flags = FUNC_1(VAR_3[0]);

 FUNC_5(&VAR_1, 0, &VAR_4);
}
