
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int coherent_dma_mask; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int FUNC_0 (struct device*) ;
 void* FUNC_1 (struct device*,size_t,int *,int ,unsigned long) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 void* FUNC_4 (struct device*,int ,size_t,int *,int ,int ,int ) ;

__attribute__((used)) static void *FUNC_5(struct device *VAR_0, size_t VAR_1,
          dma_addr_t *VAR_2, gfp_t VAR_3,
          unsigned long VAR_4)
{
 if (FUNC_2(VAR_0))
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 return FUNC_4(VAR_0, FUNC_3(VAR_0), VAR_1,
        VAR_2, VAR_0->coherent_dma_mask, VAR_3,
        FUNC_0(VAR_0));
}
