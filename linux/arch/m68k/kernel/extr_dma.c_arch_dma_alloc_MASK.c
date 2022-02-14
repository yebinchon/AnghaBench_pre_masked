
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int* dma_mask; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (void*,int ,size_t) ;
 int FUNC_3 (void*) ;

void *FUNC_4(struct device *VAR_1, size_t VAR_2, dma_addr_t *VAR_3,
  gfp_t VAR_4, unsigned long VAR_5)
{
 void *VAR_6;

 if (VAR_1 == ((void*)0) || (*VAR_1->dma_mask < 0xffffffff))
  VAR_4 |= VAR_0;
 VAR_6 = (void *)FUNC_0(VAR_4, FUNC_1(VAR_2));

 if (VAR_6 != ((void*)0)) {
  FUNC_2(VAR_6, 0, VAR_2);
  *VAR_3 = FUNC_3(VAR_6);
 }
 return VAR_6;
}
