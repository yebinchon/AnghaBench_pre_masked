
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct msi_msg {int address_lo; int data; scalar_t__ address_hi; } ;
struct TYPE_2__ {size_t msi_index; } ;
struct msi_desc {TYPE_1__ platform; } ;
struct device {int dummy; } ;
struct arm_smmu_device {int base; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 struct arm_smmu_device* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct msi_desc*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct msi_desc *VAR_3, struct msi_msg *VAR_4)
{
 phys_addr_t VAR_5;
 struct device *VAR_6 = FUNC_1(VAR_3);
 struct arm_smmu_device *VAR_7 = FUNC_0(VAR_6);
 phys_addr_t *VAR_8 = VAR_2[VAR_3->platform.msi_index];

 VAR_5 = (((u64)VAR_4->address_hi) << 32) | VAR_4->address_lo;
 VAR_5 &= VAR_1;

 FUNC_3(VAR_5, VAR_7->base + VAR_8[0]);
 FUNC_2(VAR_4->data, VAR_7->base + VAR_8[1]);
 FUNC_2(VAR_0, VAR_7->base + VAR_8[2]);
}
