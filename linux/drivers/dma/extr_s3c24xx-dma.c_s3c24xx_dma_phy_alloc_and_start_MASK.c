
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c24xx_dma_phy {int id; } ;
struct s3c24xx_dma_engine {TYPE_1__* pdev; } ;
struct s3c24xx_dma_chan {int state; struct s3c24xx_dma_phy* phy; int name; struct s3c24xx_dma_engine* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,...) ;
 struct s3c24xx_dma_phy* FUNC_1 (struct s3c24xx_dma_chan*) ;
 int FUNC_2 (struct s3c24xx_dma_chan*) ;

__attribute__((used)) static void FUNC_3(struct s3c24xx_dma_chan *VAR_2)
{
 struct s3c24xx_dma_engine *VAR_3 = VAR_2->host;
 struct s3c24xx_dma_phy *VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4) {
  FUNC_0(&VAR_3->pdev->dev, "no physical channel available for xfer on %s\n",
   VAR_2->name);
  VAR_2->state = VAR_1;
  return;
 }

 FUNC_0(&VAR_3->pdev->dev, "allocated physical channel %d for xfer on %s\n",
  VAR_4->id, VAR_2->name);

 VAR_2->phy = VAR_4;
 VAR_2->state = VAR_0;

 FUNC_2(VAR_2);
}
