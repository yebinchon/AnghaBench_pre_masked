
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device {int coherent_dma_mask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_1, u64 VAR_2)
{
 if (FUNC_1(VAR_1))
  VAR_2 &= FUNC_0(28);

 if ((VAR_2 & FUNC_0(28)) == FUNC_0(28)) {
  VAR_1->coherent_dma_mask = VAR_2;
  return 0;
 }

 return -VAR_0;
}
