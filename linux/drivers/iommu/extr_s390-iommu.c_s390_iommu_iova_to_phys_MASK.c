
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s390_domain {unsigned long* dma_table; int dma_table_lock; } ;
struct TYPE_2__ {scalar_t__ aperture_start; scalar_t__ aperture_end; } ;
struct iommu_domain {TYPE_1__ geometry; } ;
typedef unsigned long phys_addr_t ;
typedef scalar_t__ dma_addr_t ;


 unsigned long VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 unsigned long* FUNC_3 (unsigned long) ;
 unsigned long* FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct s390_domain* FUNC_9 (struct iommu_domain*) ;

__attribute__((used)) static phys_addr_t FUNC_10(struct iommu_domain *VAR_1,
        dma_addr_t VAR_2)
{
 struct s390_domain *VAR_3 = FUNC_9(VAR_1);
 unsigned long *VAR_4, *VAR_5, *VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 phys_addr_t VAR_11 = 0;

 if (VAR_2 < VAR_1->geometry.aperture_start ||
     VAR_2 > VAR_1->geometry.aperture_end)
  return 0;

 VAR_8 = FUNC_1(VAR_2);
 VAR_9 = FUNC_2(VAR_2);
 VAR_10 = FUNC_0(VAR_2);
 VAR_6 = VAR_3->dma_table;

 FUNC_7(&VAR_3->dma_table_lock, VAR_7);
 if (VAR_6 && FUNC_6(VAR_6[VAR_8])) {
  VAR_4 = FUNC_3(VAR_6[VAR_8]);
  if (VAR_4 && FUNC_6(VAR_4[VAR_9])) {
   VAR_5 = FUNC_4(VAR_4[VAR_9]);
   if (VAR_5 && FUNC_5(VAR_5[VAR_10]))
    VAR_11 = VAR_5[VAR_10] & VAR_0;
  }
 }
 FUNC_8(&VAR_3->dma_table_lock, VAR_7);

 return VAR_11;
}
