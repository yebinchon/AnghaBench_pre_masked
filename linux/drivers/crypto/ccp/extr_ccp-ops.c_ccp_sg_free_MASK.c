
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_sg_workarea {scalar_t__ dma_count; int dma_dir; int nents; int dma_sg; int dma_dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ccp_sg_workarea *VAR_0)
{
 if (VAR_0->dma_count)
  FUNC_0(VAR_0->dma_dev, VAR_0->dma_sg, VAR_0->nents, VAR_0->dma_dir);

 VAR_0->dma_count = 0;
}
