
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltq_dma_channel {int phys; int desc_base; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct ltq_dma_channel*) ;

void
FUNC_2(struct ltq_dma_channel *VAR_2)
{
 if (!VAR_2->desc_base)
  return;
 FUNC_1(VAR_2);
 FUNC_0(VAR_2->dev, VAR_0 * VAR_1,
  VAR_2->desc_base, VAR_2->phys);
}
