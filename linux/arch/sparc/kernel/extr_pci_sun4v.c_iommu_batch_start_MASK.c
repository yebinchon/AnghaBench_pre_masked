
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_batch {unsigned long prot; unsigned long entry; scalar_t__ npages; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct iommu_batch* FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct device *VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 struct iommu_batch *VAR_4 = FUNC_0(&VAR_0);

 VAR_4->dev = VAR_1;
 VAR_4->prot = VAR_2;
 VAR_4->entry = VAR_3;
 VAR_4->npages = 0;
}
