
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_ops {size_t (* unmap ) (struct iommu_domain*,unsigned long,size_t,struct iommu_iotlb_gather*) ;} ;
struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {unsigned long pgsize_bitmap; int type; struct iommu_ops* ops; } ;


 int FUNC_0 (unsigned long,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 size_t FUNC_2 (struct iommu_domain*,unsigned long,size_t) ;
 int FUNC_3 (char*,unsigned long,size_t) ;
 int FUNC_4 (char*,unsigned long,size_t,unsigned int) ;
 size_t FUNC_5 (struct iommu_domain*,unsigned long,size_t,struct iommu_iotlb_gather*) ;
 int FUNC_6 (unsigned long,size_t,size_t) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static size_t FUNC_8(struct iommu_domain *VAR_1,
       unsigned long VAR_2, size_t VAR_3,
       struct iommu_iotlb_gather *VAR_4)
{
 const struct iommu_ops *VAR_5 = VAR_1->ops;
 size_t VAR_6, VAR_7 = 0;
 unsigned long VAR_8 = VAR_2;
 unsigned int VAR_9;

 if (FUNC_7(VAR_5->unmap == ((void*)0) ||
       VAR_1->pgsize_bitmap == 0UL))
  return 0;

 if (FUNC_7(!(VAR_1->type & VAR_0)))
  return 0;


 VAR_9 = 1 << FUNC_1(VAR_1->pgsize_bitmap);






 if (!FUNC_0(VAR_2 | VAR_3, VAR_9)) {
  FUNC_4("unaligned: iova 0x%lx size 0x%zx min_pagesz 0x%x\n",
         VAR_2, VAR_3, VAR_9);
  return 0;
 }

 FUNC_3("unmap this: iova 0x%lx size 0x%zx\n", VAR_2, VAR_3);





 while (VAR_7 < VAR_3) {
  size_t VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_3 - VAR_7);

  VAR_6 = VAR_5->unmap(VAR_1, VAR_2, VAR_10, VAR_4);
  if (!VAR_6)
   break;

  FUNC_3("unmapped: iova 0x%lx size 0x%zx\n",
    VAR_2, VAR_6);

  VAR_2 += VAR_6;
  VAR_7 += VAR_6;
 }

 FUNC_6(VAR_8, VAR_3, VAR_7);
 return VAR_7;
}
