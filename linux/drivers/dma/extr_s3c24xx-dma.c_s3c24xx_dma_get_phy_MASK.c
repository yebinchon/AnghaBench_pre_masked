
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s3c24xx_dma_phy {struct s3c24xx_dma_chan* serving; int id; int clk; int lock; int valid; } ;
struct s3c24xx_dma_engine {TYPE_3__* pdev; TYPE_2__* sdata; TYPE_1__* pdata; struct s3c24xx_dma_phy* phy_chans; } ;
struct s3c24xx_dma_chan {struct s3c24xx_dma_engine* host; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ has_clocks; } ;
struct TYPE_4__ {int num_phy_channels; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct s3c24xx_dma_chan*,struct s3c24xx_dma_phy*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static
struct s3c24xx_dma_phy *FUNC_6(struct s3c24xx_dma_chan *VAR_0)
{
 struct s3c24xx_dma_engine *VAR_1 = VAR_0->host;
 struct s3c24xx_dma_phy *VAR_2 = ((void*)0);
 unsigned long VAR_3;
 int VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1->pdata->num_phy_channels; VAR_4++) {
  VAR_2 = &VAR_1->phy_chans[VAR_4];

  if (!VAR_2->valid)
   continue;

  if (!FUNC_3(VAR_0, VAR_2))
   continue;

  FUNC_4(&VAR_2->lock, VAR_3);

  if (!VAR_2->serving) {
   VAR_2->serving = VAR_0;
   FUNC_5(&VAR_2->lock, VAR_3);
   break;
  }

  FUNC_5(&VAR_2->lock, VAR_3);
 }


 if (VAR_4 == VAR_1->pdata->num_phy_channels) {
  FUNC_2(&VAR_1->pdev->dev, "no phy channel available\n");
  return ((void*)0);
 }


 if (VAR_1->sdata->has_clocks) {
  VAR_5 = FUNC_0(VAR_2->clk);
  if (VAR_5) {
   FUNC_1(&VAR_1->pdev->dev, "could not enable clock for channel %d, err %d\n",
    VAR_2->id, VAR_5);
   VAR_2->serving = ((void*)0);
   return ((void*)0);
  }
 }

 return VAR_2;
}
