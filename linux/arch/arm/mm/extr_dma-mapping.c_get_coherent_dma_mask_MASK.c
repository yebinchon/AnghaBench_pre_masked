
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct device {scalar_t__ coherent_dma_mask; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,scalar_t__,int) ;
 int FUNC_2 (struct device*,char*) ;

__attribute__((used)) static u64 FUNC_3(struct device *VAR_0)
{
 u64 VAR_1 = (u64)FUNC_0(32);

 if (VAR_0) {
  VAR_1 = VAR_0->coherent_dma_mask;





  if (VAR_1 == 0) {
   FUNC_2(VAR_0, "coherent DMA mask is unset\n");
   return 0;
  }

  if (!FUNC_1(VAR_0, VAR_1, 1))
   return 0;
 }

 return VAR_1;
}
