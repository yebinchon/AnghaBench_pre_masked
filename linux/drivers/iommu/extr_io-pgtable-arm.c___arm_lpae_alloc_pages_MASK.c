
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct io_pgtable_cfg {int coherent_walk; struct device* iommu_dev; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct page*,int) ;
 struct page* FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (struct device*,void*,size_t,int ) ;
 scalar_t__ FUNC_6 (struct device*,scalar_t__) ;
 int FUNC_7 (struct device*,scalar_t__,size_t,int ) ;
 int FUNC_8 (size_t) ;
 void* FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (void*) ;

__attribute__((used)) static void *FUNC_11(size_t VAR_4, gfp_t VAR_5,
        struct io_pgtable_cfg *VAR_6)
{
 struct device *VAR_7 = VAR_6->iommu_dev;
 int VAR_8 = FUNC_8(VAR_4);
 struct page *VAR_9;
 dma_addr_t VAR_10;
 void *VAR_11;

 FUNC_0((VAR_5 & VAR_2));
 VAR_9 = FUNC_2(VAR_7 ? FUNC_4(VAR_7) : VAR_1,
        VAR_5 | VAR_3, VAR_8);
 if (!VAR_9)
  return ((void*)0);

 VAR_11 = FUNC_9(VAR_9);
 if (!VAR_6->coherent_walk) {
  VAR_10 = FUNC_5(VAR_7, VAR_11, VAR_4, VAR_0);
  if (FUNC_6(VAR_7, VAR_10))
   goto out_free;





  if (VAR_10 != FUNC_10(VAR_11))
   goto out_unmap;
 }

 return VAR_11;

out_unmap:
 FUNC_3(VAR_7, "Cannot accommodate DMA translation for IOMMU page tables\n");
 FUNC_7(VAR_7, VAR_10, VAR_4, VAR_0);
out_free:
 FUNC_1(VAR_9, VAR_8);
 return ((void*)0);
}
