
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 unsigned long FUNC_0 (size_t) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct page*,int ) ;
 int FUNC_3 (void*,size_t) ;
 int FUNC_4 (struct device*,struct page*,unsigned long) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (size_t) ;
 struct page* FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (void*) ;
 struct page* FUNC_10 (int ) ;

void FUNC_11(struct device *VAR_1, size_t VAR_2, void *VAR_3,
  dma_addr_t VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6 = FUNC_0(VAR_2) >> VAR_0;
 struct page *VAR_7;

 if (FUNC_9(VAR_3)) {
  VAR_7 = FUNC_10(FUNC_8(VAR_3));
 } else {



  VAR_7 = FUNC_7(FUNC_1(FUNC_5(VAR_1, VAR_4)));
 }

 if (!FUNC_4(VAR_1, VAR_7, VAR_6))
  FUNC_2(VAR_7, FUNC_6(VAR_2));
}
