
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_chan {int tasklet; } ;
struct xgene_dma {int clk; struct xgene_dma_chan* chan; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct xgene_dma* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xgene_dma*) ;
 int FUNC_5 (struct xgene_dma_chan*) ;
 int FUNC_6 (struct xgene_dma*) ;
 int FUNC_7 (struct xgene_dma*) ;
 int FUNC_8 (struct xgene_dma*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct xgene_dma *VAR_2 = FUNC_2(VAR_1);
 struct xgene_dma_chan *VAR_3;
 int VAR_4;

 FUNC_4(VAR_2);


 FUNC_8(VAR_2);
 FUNC_6(VAR_2);
 FUNC_7(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_2->chan[VAR_4];
  FUNC_3(&VAR_3->tasklet);
  FUNC_5(VAR_3);
 }

 if (!FUNC_0(VAR_2->clk))
  FUNC_1(VAR_2->clk);

 return 0;
}
