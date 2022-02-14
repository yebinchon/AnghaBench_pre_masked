
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct protection_domain {int dummy; } ;
struct page {int dummy; } ;
struct dma_ops_domain {int dummy; } ;
struct device {int * dma_mask; } ;
typedef scalar_t__ phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct protection_domain*) ;
 int FUNC_1 (struct protection_domain*) ;
 int FUNC_2 (struct device*,struct dma_ops_domain*,scalar_t__,size_t,int,int ) ;
 struct protection_domain* FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 struct dma_ops_domain* FUNC_5 (struct protection_domain*) ;

__attribute__((used)) static dma_addr_t FUNC_6(struct device *VAR_2, struct page *VAR_3,
      unsigned long VAR_4, size_t VAR_5,
      enum dma_data_direction VAR_6,
      unsigned long VAR_7)
{
 phys_addr_t VAR_8 = FUNC_4(VAR_3) + VAR_4;
 struct protection_domain *VAR_9;
 struct dma_ops_domain *VAR_10;
 u64 VAR_11;

 VAR_9 = FUNC_3(VAR_2);
 if (FUNC_1(VAR_9) == -VAR_1)
  return (dma_addr_t)VAR_8;
 else if (FUNC_0(VAR_9))
  return VAR_0;

 VAR_11 = *VAR_2->dma_mask;
 VAR_10 = FUNC_5(VAR_9);

 return FUNC_2(VAR_2, VAR_10, VAR_8, VAR_5, VAR_6, VAR_11);
}
