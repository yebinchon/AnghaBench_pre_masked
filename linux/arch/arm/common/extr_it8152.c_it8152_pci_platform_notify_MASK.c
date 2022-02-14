
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int* dma_mask; int coherent_dma_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3)
{
 if (FUNC_0(VAR_3)) {
  if (VAR_3->dma_mask)
   *VAR_3->dma_mask = (VAR_1 - 1) | VAR_0;
  VAR_3->coherent_dma_mask = (VAR_1 - 1) | VAR_0;
  FUNC_1(VAR_3, 2048, 4096, VAR_2);
 }
 return 0;
}
