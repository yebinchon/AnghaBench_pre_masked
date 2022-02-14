
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 void* FUNC_0 (struct device*,size_t,int *,int ,unsigned long) ;
 int FUNC_1 (struct device*,size_t,void*,int ,unsigned long) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void *FUNC_4(struct device *VAR_1, size_t VAR_2,
  dma_addr_t *VAR_3, gfp_t VAR_4, unsigned long VAR_5)
{
 void *VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 *VAR_3 = FUNC_2(FUNC_3(VAR_6), VAR_2);
 if (*VAR_3 == VAR_0) {
  FUNC_1(VAR_1, VAR_2, VAR_6, *VAR_3, VAR_5);
  return ((void*)0);
 }

 return VAR_6;
}
