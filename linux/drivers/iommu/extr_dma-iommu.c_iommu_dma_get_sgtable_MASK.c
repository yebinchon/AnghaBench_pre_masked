
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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 int VAR_2 ;
 struct page** FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (struct sg_table*,int,int ) ;
 int FUNC_5 (struct sg_table*,struct page**,int,int ,size_t,int ) ;
 int FUNC_6 (int ,struct page*,int,int ) ;
 struct page* FUNC_7 (void*) ;
 struct page* FUNC_8 (void*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_3, struct sg_table *VAR_4,
  void *VAR_5, dma_addr_t VAR_6, size_t VAR_7,
  unsigned long VAR_8)
{
 struct page *VAR_9;
 int VAR_10;

 if (FUNC_0(VAR_0) && FUNC_3(VAR_5)) {
  struct page **VAR_11 = FUNC_2(VAR_5);

  if (VAR_11) {
   return FUNC_5(VAR_4, VAR_11,
     FUNC_1(VAR_7) >> VAR_2,
     0, VAR_7, VAR_1);
  }

  VAR_9 = FUNC_8(VAR_5);
 } else {
  VAR_9 = FUNC_7(VAR_5);
 }

 VAR_10 = FUNC_4(VAR_4, 1, VAR_1);
 if (!VAR_10)
  FUNC_6(VAR_4->sgl, VAR_9, FUNC_1(VAR_7), 0);
 return VAR_10;
}
