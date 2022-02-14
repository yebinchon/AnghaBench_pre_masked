
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int sgl; } ;
struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 unsigned long FUNC_1 (struct device*,int ) ;
 struct page* FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct sg_table*,int,int ) ;
 int FUNC_5 (int ,struct page*,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct device *VAR_2, struct sg_table *VAR_3,
   void *VAR_4, dma_addr_t VAR_5, size_t VAR_6,
   unsigned long VAR_7)
{
 unsigned long VAR_8 = FUNC_1(VAR_2, VAR_5);
 struct page *VAR_9;
 int VAR_10;


 if (!FUNC_3(VAR_8))
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8);

 VAR_10 = FUNC_4(VAR_3, 1, VAR_1);
 if (FUNC_6(VAR_10))
  return VAR_10;

 FUNC_5(VAR_3->sgl, VAR_9, FUNC_0(VAR_6), 0);
 return 0;
}
