
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 int VAR_5 ;
 int FUNC_2 (struct device*,size_t,void*) ;
 int FUNC_3 (struct device*,int ,size_t,int) ;
 int FUNC_4 (struct device*) ;
 void* FUNC_5 (int ,struct page**,int ) ;
 int FUNC_6 (int ,int,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 void* FUNC_8 (struct device*,size_t,struct page**,int ,unsigned long) ;
 void* FUNC_9 (struct device*,size_t,int *,int ,unsigned long) ;
 int FUNC_10 (struct page*) ;

__attribute__((used)) static void *FUNC_11(struct device *VAR_6, size_t VAR_7,
  dma_addr_t *VAR_8, gfp_t VAR_9, unsigned long VAR_10)
{
 bool VAR_11 = FUNC_4(VAR_6);
 int VAR_12 = FUNC_6(VAR_3, VAR_11, VAR_10);
 struct page *VAR_13 = ((void*)0);
 void *VAR_14;

 VAR_9 |= VAR_5;

 if (FUNC_0(VAR_1) && FUNC_7(VAR_9) &&
     !(VAR_10 & VAR_2))
  return FUNC_9(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

 if (FUNC_0(VAR_0) &&
     !FUNC_7(VAR_9) && !VAR_11)
  VAR_14 = FUNC_5(FUNC_1(VAR_7), &VAR_13, VAR_9);
 else
  VAR_14 = FUNC_8(VAR_6, VAR_7, &VAR_13, VAR_9, VAR_10);
 if (!VAR_14)
  return ((void*)0);

 *VAR_8 = FUNC_3(VAR_6, FUNC_10(VAR_13), VAR_7, VAR_12);
 if (*VAR_8 == VAR_4) {
  FUNC_2(VAR_6, VAR_7, VAR_14);
  return ((void*)0);
 }

 return VAR_14;
}
