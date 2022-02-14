
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_msg {int address_hi; int address_lo; int data; } ;
struct intel_iommu {int reg; int register_lock; } ;


 int FUNC_0 (struct intel_iommu*,int) ;
 struct intel_iommu* FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int) ;

void FUNC_5(int VAR_0, struct msi_msg *VAR_1)
{
 struct intel_iommu *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = FUNC_0(VAR_2, VAR_0);
 unsigned long VAR_4;

 FUNC_2(&VAR_2->register_lock, VAR_4);
 FUNC_4(VAR_1->data, VAR_2->reg + VAR_3 + 4);
 FUNC_4(VAR_1->address_lo, VAR_2->reg + VAR_3 + 8);
 FUNC_4(VAR_1->address_hi, VAR_2->reg + VAR_3 + 12);
 FUNC_3(&VAR_2->register_lock, VAR_4);
}
