
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_ops {int (* map ) (struct iommu_domain*,unsigned long,unsigned long,size_t,int) ;int (* iotlb_sync_map ) (struct iommu_domain*) ;} ;
struct iommu_domain {unsigned long pgsize_bitmap; int type; struct iommu_ops* ops; } ;
typedef unsigned long phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned long) ;
 size_t FUNC_2 (struct iommu_domain*,unsigned long,size_t) ;
 int FUNC_3 (struct iommu_domain*,unsigned long,size_t) ;
 int FUNC_4 (char*,unsigned long,unsigned long*,size_t) ;
 int FUNC_5 (char*,unsigned long,unsigned long*,size_t,unsigned int) ;
 int FUNC_6 (struct iommu_domain*,unsigned long,unsigned long,size_t,int) ;
 int FUNC_7 (struct iommu_domain*) ;
 int FUNC_8 (unsigned long,unsigned long,size_t) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct iommu_domain *VAR_3, unsigned long VAR_4,
       phys_addr_t VAR_5, size_t VAR_6, int VAR_7)
{
 const struct iommu_ops *VAR_8 = VAR_3->ops;
 unsigned long VAR_9 = VAR_4;
 unsigned int VAR_10;
 size_t VAR_11 = VAR_6;
 phys_addr_t VAR_12 = VAR_5;
 int VAR_13 = 0;

 if (FUNC_9(VAR_8->map == ((void*)0) ||
       VAR_3->pgsize_bitmap == 0UL))
  return -VAR_1;

 if (FUNC_9(!(VAR_3->type & VAR_2)))
  return -VAR_0;


 VAR_10 = 1 << FUNC_1(VAR_3->pgsize_bitmap);






 if (!FUNC_0(VAR_4 | VAR_5 | VAR_6, VAR_10)) {
  FUNC_5("unaligned: iova 0x%lx pa %pa size 0x%zx min_pagesz 0x%x\n",
         VAR_4, &VAR_5, VAR_6, VAR_10);
  return -VAR_0;
 }

 FUNC_4("map: iova 0x%lx pa %pa size 0x%zx\n", VAR_4, &VAR_5, VAR_6);

 while (VAR_6) {
  size_t VAR_14 = FUNC_2(VAR_3, VAR_4 | VAR_5, VAR_6);

  FUNC_4("mapping: iova 0x%lx pa %pa pgsize 0x%zx\n",
    VAR_4, &VAR_5, VAR_14);

  VAR_13 = VAR_8->map(VAR_3, VAR_4, VAR_5, VAR_14, VAR_7);
  if (VAR_13)
   break;

  VAR_4 += VAR_14;
  VAR_5 += VAR_14;
  VAR_6 -= VAR_14;
 }

 if (VAR_8->iotlb_sync_map)
  VAR_8->iotlb_sync_map(VAR_3);


 if (VAR_13)
  FUNC_3(VAR_3, VAR_9, VAR_11 - VAR_6);
 else
  FUNC_8(VAR_9, VAR_12, VAR_11);

 return VAR_13;
}
