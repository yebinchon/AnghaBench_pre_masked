
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (size_t) ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int ,unsigned int) ;
 struct iommu_table* FUNC_2 (struct device*) ;
 int FUNC_3 (unsigned long,unsigned int) ;
 unsigned int FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (struct device*,struct iommu_table*,void*,unsigned int,int ) ;
 int FUNC_6 (void*,int ,size_t) ;

__attribute__((used)) static void* FUNC_7(struct device *VAR_3, size_t VAR_4,
 dma_addr_t *VAR_5, gfp_t VAR_6, unsigned long VAR_7)
{
 void *VAR_8 = ((void*)0);
 dma_addr_t VAR_9;
 unsigned int VAR_10, VAR_11;
 struct iommu_table *VAR_12 = FUNC_2(VAR_3);

 VAR_4 = FUNC_0(VAR_4);
 VAR_10 = VAR_4 >> VAR_2;
 VAR_11 = FUNC_4(VAR_4);


 VAR_8 = (void *)FUNC_1(VAR_6, VAR_11);
 if (!VAR_8)
  goto error;
 FUNC_6(VAR_8, 0, VAR_4);


 VAR_9 = FUNC_5(VAR_3, VAR_12, VAR_8, VAR_10, VAR_0);
 if (VAR_9 == VAR_1)
  goto free;
 *VAR_5 = VAR_9;
 return VAR_8;
free:
 FUNC_3((unsigned long)VAR_8, FUNC_4(VAR_4));
 VAR_8 = ((void*)0);
error:
 return VAR_8;
}
