
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {void* coherent_dma_mask; void** dma_mask; } ;


 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 VAR_1->dma_mask = &VAR_1->coherent_dma_mask;
 VAR_1->coherent_dma_mask = FUNC_0(32);
 return 0;
}
