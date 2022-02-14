
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct protection_domain {int dummy; } ;
struct page {int dummy; } ;
struct dma_ops_domain {int dummy; } ;
struct device {scalar_t__* dma_mask; scalar_t__ coherent_dma_mask; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct protection_domain*) ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_3 ;
 int FUNC_2 (struct protection_domain*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (struct device*,struct dma_ops_domain*,int ,size_t,int ,scalar_t__) ;
 struct page* FUNC_5 (int,int ) ;
 struct page* FUNC_6 (struct device*,size_t,int ,int) ;
 int FUNC_7 (struct device*,struct page*,size_t) ;
 struct protection_domain* FUNC_8 (struct device*) ;
 int FUNC_9 (size_t) ;
 int FUNC_10 (int) ;
 void* FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 struct dma_ops_domain* FUNC_13 (struct protection_domain*) ;

__attribute__((used)) static void *FUNC_14(struct device *VAR_9, size_t VAR_10,
       dma_addr_t *VAR_11, gfp_t VAR_12,
       unsigned long VAR_13)
{
 u64 VAR_14 = VAR_9->coherent_dma_mask;
 struct protection_domain *VAR_15;
 struct dma_ops_domain *VAR_16;
 struct page *VAR_17;

 VAR_15 = FUNC_8(VAR_9);
 if (FUNC_2(VAR_15) == -VAR_2) {
  VAR_17 = FUNC_5(VAR_12, FUNC_9(VAR_10));
  *VAR_11 = FUNC_12(VAR_17);
  return FUNC_11(VAR_17);
 } else if (FUNC_0(VAR_15))
  return ((void*)0);

 VAR_16 = FUNC_13(VAR_15);
 VAR_10 = FUNC_1(VAR_10);
 VAR_14 = VAR_9->coherent_dma_mask;
 VAR_12 &= ~(VAR_4 | VAR_6 | VAR_5);
 VAR_12 |= VAR_8;

 VAR_17 = FUNC_5(VAR_12 | VAR_7, FUNC_9(VAR_10));
 if (!VAR_17) {
  if (!FUNC_10(VAR_12))
   return ((void*)0);

  VAR_17 = FUNC_6(VAR_9, VAR_10 >> VAR_3,
     FUNC_9(VAR_10), VAR_12 & VAR_7);
  if (!VAR_17)
   return ((void*)0);
 }

 if (!VAR_14)
  VAR_14 = *VAR_9->dma_mask;

 *VAR_11 = FUNC_4(VAR_9, VAR_16, FUNC_12(VAR_17),
     VAR_10, VAR_0, VAR_14);

 if (*VAR_11 == VAR_1)
  goto out_free;

 return FUNC_11(VAR_17);

out_free:

 if (!FUNC_7(VAR_9, VAR_17, VAR_10 >> VAR_3))
  FUNC_3(VAR_17, FUNC_9(VAR_10));

 return ((void*)0);
}
