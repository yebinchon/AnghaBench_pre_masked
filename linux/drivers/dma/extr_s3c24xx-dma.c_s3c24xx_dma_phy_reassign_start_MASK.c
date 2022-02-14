
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c24xx_dma_phy {struct s3c24xx_dma_chan* serving; int id; } ;
struct s3c24xx_dma_engine {TYPE_1__* pdev; } ;
struct s3c24xx_dma_chan {int state; struct s3c24xx_dma_phy* phy; int name; struct s3c24xx_dma_engine* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct s3c24xx_dma_chan*) ;

__attribute__((used)) static void FUNC_2(struct s3c24xx_dma_phy *VAR_1,
 struct s3c24xx_dma_chan *VAR_2)
{
 struct s3c24xx_dma_engine *VAR_3 = VAR_2->host;

 FUNC_0(&VAR_3->pdev->dev, "reassigned physical channel %d for xfer on %s\n",
  VAR_1->id, VAR_2->name);






 VAR_1->serving = VAR_2;
 VAR_2->phy = VAR_1;
 VAR_2->state = VAR_0;
 FUNC_1(VAR_2);
}
