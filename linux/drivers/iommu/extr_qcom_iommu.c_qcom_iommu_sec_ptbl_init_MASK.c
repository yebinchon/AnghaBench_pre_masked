
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,size_t) ;
 void* FUNC_2 (struct device*,size_t,int *,int ,unsigned long) ;
 int FUNC_3 (struct device*,size_t,void*,int ,unsigned long) ;
 int FUNC_4 (int ,size_t,unsigned int) ;
 int FUNC_5 (unsigned int,size_t*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3)
{
 size_t VAR_4 = 0;
 unsigned int VAR_5 = 0;
 void *VAR_6;
 dma_addr_t VAR_7;
 unsigned long VAR_8;
 static bool VAR_9 = 0;
 int VAR_10;

 if (VAR_9)
  return 0;

 VAR_10 = FUNC_5(VAR_5, &VAR_4);
 if (VAR_10) {
  FUNC_0(VAR_3, "failed to get iommu secure pgtable size (%d)\n",
   VAR_10);
  return VAR_10;
 }

 FUNC_1(VAR_3, "iommu sec: pgtable size: %zu\n", VAR_4);

 VAR_8 = VAR_0;

 VAR_6 = FUNC_2(VAR_3, VAR_4, &VAR_7, VAR_2, VAR_8);
 if (!VAR_6) {
  FUNC_0(VAR_3, "failed to allocate %zu bytes for pgtable\n",
   VAR_4);
  return -VAR_1;
 }

 VAR_10 = FUNC_4(VAR_7, VAR_4, VAR_5);
 if (VAR_10) {
  FUNC_0(VAR_3, "failed to init iommu pgtable (%d)\n", VAR_10);
  goto free_mem;
 }

 VAR_9 = 1;
 return 0;

free_mem:
 FUNC_3(VAR_3, VAR_4, VAR_6, VAR_7, VAR_8);
 return VAR_10;
}
