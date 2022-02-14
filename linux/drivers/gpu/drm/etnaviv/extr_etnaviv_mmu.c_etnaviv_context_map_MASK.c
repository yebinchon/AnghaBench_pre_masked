
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct etnaviv_iommu_context {TYPE_2__* global; } ;
typedef unsigned long phys_addr_t ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* map ) (struct etnaviv_iommu_context*,unsigned long,unsigned long,size_t,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,size_t) ;
 size_t VAR_1 ;
 int FUNC_1 (struct etnaviv_iommu_context*,unsigned long,size_t) ;
 int FUNC_2 (char*,unsigned long,unsigned long*,size_t,size_t) ;
 int FUNC_3 (struct etnaviv_iommu_context*,unsigned long,unsigned long,size_t,int) ;

__attribute__((used)) static int FUNC_4(struct etnaviv_iommu_context *VAR_2,
         unsigned long VAR_3, phys_addr_t VAR_4,
         size_t VAR_5, int VAR_6)
{
 unsigned long VAR_7 = VAR_3;
 size_t VAR_8 = VAR_1;
 size_t VAR_9 = VAR_5;
 int VAR_10 = 0;

 if (!FUNC_0(VAR_3 | VAR_4 | VAR_5, VAR_8)) {
  FUNC_2("unaligned: iova 0x%lx pa %pa size 0x%zx min_pagesz 0x%zx\n",
         VAR_3, &VAR_4, VAR_5, VAR_8);
  return -VAR_0;
 }

 while (VAR_5) {
  VAR_10 = VAR_2->global->ops->map(VAR_2, VAR_3, VAR_4, VAR_8,
      VAR_6);
  if (VAR_10)
   break;

  VAR_3 += VAR_8;
  VAR_4 += VAR_8;
  VAR_5 -= VAR_8;
 }


 if (VAR_10)
  FUNC_1(VAR_2, VAR_7, VAR_9 - VAR_5);

 return VAR_10;
}
