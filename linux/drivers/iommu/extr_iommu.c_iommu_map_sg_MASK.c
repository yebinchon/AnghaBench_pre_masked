
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {size_t length; } ;
struct iommu_domain {int dummy; } ;
typedef scalar_t__ phys_addr_t ;


 int FUNC_0 (struct iommu_domain*,unsigned long,scalar_t__,size_t,int) ;
 int FUNC_1 (struct iommu_domain*,unsigned long,size_t) ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;

size_t FUNC_4(struct iommu_domain *VAR_0, unsigned long VAR_1,
      struct scatterlist *VAR_2, unsigned int VAR_3, int VAR_4)
{
 size_t VAR_5 = 0, VAR_6 = 0;
 phys_addr_t VAR_7;
 unsigned int VAR_8 = 0;
 int VAR_9;

 while (VAR_8 <= VAR_3) {
  phys_addr_t VAR_10 = FUNC_3(VAR_2);

  if (VAR_5 && VAR_10 != VAR_7 + VAR_5) {
   VAR_9 = FUNC_0(VAR_0, VAR_1 + VAR_6, VAR_7, VAR_5, VAR_4);
   if (VAR_9)
    goto out_err;

   VAR_6 += VAR_5;
   VAR_5 = 0;
  }

  if (VAR_5) {
   VAR_5 += VAR_2->length;
  } else {
   VAR_5 = VAR_2->length;
   VAR_7 = VAR_10;
  }

  if (++VAR_8 < VAR_3)
   VAR_2 = FUNC_2(VAR_2);
 }

 return VAR_6;

out_err:

 FUNC_1(VAR_0, VAR_1, VAR_6);

 return 0;

}
