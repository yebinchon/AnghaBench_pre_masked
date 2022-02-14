
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {size_t pgsize_bitmap; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned int FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;

__attribute__((used)) static size_t FUNC_5(struct iommu_domain *VAR_0,
      unsigned long VAR_1, size_t VAR_2)
{
 unsigned int VAR_3;
 size_t VAR_4;


 VAR_3 = FUNC_2(VAR_2);


 if (FUNC_3(VAR_1)) {

  unsigned int VAR_5 = FUNC_1(VAR_1);
  VAR_3 = FUNC_4(VAR_3, VAR_5);
 }


 VAR_4 = (1UL << (VAR_3 + 1)) - 1;


 VAR_4 &= VAR_0->pgsize_bitmap;


 FUNC_0(!VAR_4);


 VAR_3 = FUNC_2(VAR_4);
 VAR_4 = 1UL << VAR_3;

 return VAR_4;
}
