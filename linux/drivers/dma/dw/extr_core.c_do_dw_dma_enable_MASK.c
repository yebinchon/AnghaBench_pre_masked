
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_dma_chip {struct dw_dma* dw; } ;
struct dw_dma {int (* enable ) (struct dw_dma*) ;} ;


 int FUNC_0 (struct dw_dma*) ;

int FUNC_1(struct dw_dma_chip *VAR_0)
{
 struct dw_dma *VAR_1 = VAR_0->dw;

 VAR_1->enable(VAR_1);
 return 0;
}
