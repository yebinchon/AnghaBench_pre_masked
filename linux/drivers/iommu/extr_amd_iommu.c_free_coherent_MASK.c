
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protection_domain {int dummy; } ;
struct page {int dummy; } ;
struct dma_ops_domain {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct protection_domain*) ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_1 ;
 int FUNC_2 (struct page*,int ) ;
 int FUNC_3 (struct dma_ops_domain*,int ,size_t,int ) ;
 int FUNC_4 (struct device*,struct page*,size_t) ;
 struct protection_domain* FUNC_5 (struct device*) ;
 int FUNC_6 (size_t) ;
 struct dma_ops_domain* FUNC_7 (struct protection_domain*) ;
 struct page* FUNC_8 (void*) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_2, size_t VAR_3,
     void *VAR_4, dma_addr_t VAR_5,
     unsigned long VAR_6)
{
 struct protection_domain *VAR_7;
 struct dma_ops_domain *VAR_8;
 struct page *VAR_9;

 VAR_9 = FUNC_8(VAR_4);
 VAR_3 = FUNC_1(VAR_3);

 VAR_7 = FUNC_5(VAR_2);
 if (FUNC_0(VAR_7))
  goto free_mem;

 VAR_8 = FUNC_7(VAR_7);

 FUNC_3(VAR_8, VAR_5, VAR_3, VAR_0);

free_mem:
 if (!FUNC_4(VAR_2, VAR_9, VAR_3 >> VAR_1))
  FUNC_2(VAR_9, FUNC_6(VAR_3));
}
