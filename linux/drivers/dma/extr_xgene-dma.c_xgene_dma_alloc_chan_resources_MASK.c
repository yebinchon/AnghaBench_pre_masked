
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_desc_sw {int dummy; } ;
struct xgene_dma_chan {scalar_t__ desc_pool; int dev; int name; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xgene_dma_chan*,char*) ;
 int FUNC_1 (struct xgene_dma_chan*,char*) ;
 scalar_t__ FUNC_2 (int ,int ,int,int ,int ) ;
 struct xgene_dma_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_4(struct dma_chan *VAR_1)
{
 struct xgene_dma_chan *VAR_2 = FUNC_3(VAR_1);


 if (VAR_2->desc_pool)
  return 1;

 VAR_2->desc_pool = FUNC_2(VAR_2->name, VAR_2->dev,
       sizeof(struct xgene_dma_desc_sw),
       0, 0);
 if (!VAR_2->desc_pool) {
  FUNC_1(VAR_2, "Failed to allocate descriptor pool\n");
  return -VAR_0;
 }

 FUNC_0(VAR_2, "Allocate descriptor pool\n");

 return 1;
}
