
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c24xx_dma_phy {int irq; } ;
struct s3c24xx_dma_engine {struct s3c24xx_dma_phy* phy_chans; TYPE_1__* pdata; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int num_phy_channels; } ;


 int FUNC_0 (int *,int ,struct s3c24xx_dma_phy*) ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_0,
    struct s3c24xx_dma_engine *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->pdata->num_phy_channels; VAR_2++) {
  struct s3c24xx_dma_phy *VAR_3 = &VAR_1->phy_chans[VAR_2];

  FUNC_0(&VAR_0->dev, VAR_3->irq, VAR_3);
 }
}
