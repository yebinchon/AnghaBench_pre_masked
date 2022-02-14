
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_chan {int id; int name; struct xgene_dma* pdma; int dev; } ;
struct xgene_dma {int dev; struct xgene_dma_chan* chan; int ring_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,int) ;

__attribute__((used)) static void FUNC_1(struct xgene_dma *VAR_2)
{
 struct xgene_dma_chan *VAR_3;
 int VAR_4;

 VAR_2->ring_num = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_2->chan[VAR_4];
  VAR_3->dev = VAR_2->dev;
  VAR_3->pdma = VAR_2;
  VAR_3->id = VAR_4;
  FUNC_0(VAR_3->name, sizeof(VAR_3->name), "dmachan%d", VAR_3->id);
 }
}
