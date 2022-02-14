
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct etnaviv_iommu_context {TYPE_2__* global; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {size_t (* unmap ) (struct etnaviv_iommu_context*,unsigned long,size_t) ;} ;


 int FUNC_0 (unsigned long,size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (char*,unsigned long,size_t,size_t) ;
 size_t FUNC_2 (struct etnaviv_iommu_context*,unsigned long,size_t) ;

__attribute__((used)) static void FUNC_3(struct etnaviv_iommu_context *VAR_1,
     unsigned long VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5 = 0;
 size_t VAR_6 = VAR_0;

 if (!FUNC_0(VAR_2 | VAR_3, VAR_6)) {
  FUNC_1("unaligned: iova 0x%lx size 0x%zx min_pagesz 0x%zx\n",
         VAR_2, VAR_3, VAR_6);
  return;
 }

 while (VAR_5 < VAR_3) {
  VAR_4 = VAR_1->global->ops->unmap(VAR_1, VAR_2,
           VAR_6);
  if (!VAR_4)
   break;

  VAR_2 += VAR_4;
  VAR_5 += VAR_4;
 }
}
