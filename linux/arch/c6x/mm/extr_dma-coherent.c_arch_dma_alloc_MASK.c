
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (void*,int ,int) ;
 void* FUNC_3 (int ) ;

void *FUNC_4(struct device *VAR_2, size_t VAR_3, dma_addr_t *VAR_4,
  gfp_t VAR_5, unsigned long VAR_6)
{
 void *VAR_7;
 u32 VAR_8;
 int VAR_9;

 if (!VAR_1 || !VAR_3)
  return ((void*)0);

 VAR_9 = FUNC_1(((VAR_3 - 1) >> VAR_0) + 1);

 VAR_8 = FUNC_0(VAR_9);

 if (VAR_4)
  *VAR_4 = VAR_8;

 if (!VAR_8)
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_8);
 FUNC_2(VAR_7, 0, 1 << VAR_9);
 return VAR_7;
}
