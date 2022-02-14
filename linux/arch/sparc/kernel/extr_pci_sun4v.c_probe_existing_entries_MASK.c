
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_pbm_info {int devhandle; } ;
struct iommu_pool {unsigned long start; unsigned long end; } ;
struct iommu_map_table {unsigned long nr_pools; int map; struct iommu_pool* pools; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (unsigned long,int ) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int ,int) ;
 unsigned long FUNC_4 (int ,int ,unsigned long*,unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_5(struct pci_pbm_info *VAR_1,
         struct iommu_map_table *VAR_2)
{
 struct iommu_pool *VAR_3;
 unsigned long VAR_4, VAR_5, VAR_6 = 0;
 u32 VAR_7;

 VAR_7 = VAR_1->devhandle;
 for (VAR_5 = 0; VAR_5 < VAR_2->nr_pools; VAR_5++) {
  VAR_3 = &(VAR_2->pools[VAR_5]);
  for (VAR_4 = VAR_3->start; VAR_4 <= VAR_3->end; VAR_4++) {
   unsigned long VAR_8, VAR_9, VAR_10;

   VAR_8 = FUNC_4(VAR_7,
           FUNC_0(0, VAR_4),
           &VAR_9, &VAR_10);
   if (VAR_8 == VAR_0) {
    if (FUNC_2(VAR_10)) {
     FUNC_3(VAR_7,
             FUNC_0(0,
             VAR_4), 1);
    } else {
     VAR_6++;
     FUNC_1(VAR_4, VAR_2->map);
    }
   }
  }
 }
 return VAR_6;
}
