
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_msg {void* address_hi; void* address_lo; void* data; } ;
struct intel_iommu {int reg; int register_lock; } ;


 int FUNC_0 (struct intel_iommu*,int) ;
 struct intel_iommu* FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 void* FUNC_4 (int) ;

void FUNC_5(int VAR_0, struct msi_msg *VAR_1)
{
 struct intel_iommu *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = FUNC_0(VAR_2, VAR_0);
 unsigned long VAR_4;

 FUNC_2(&VAR_2->register_lock, VAR_4);
 VAR_1->data = FUNC_4(VAR_2->reg + VAR_3 + 4);
 VAR_1->address_lo = FUNC_4(VAR_2->reg + VAR_3 + 8);
 VAR_1->address_hi = FUNC_4(VAR_2->reg + VAR_3 + 12);
 FUNC_3(&VAR_2->register_lock, VAR_4);
}
