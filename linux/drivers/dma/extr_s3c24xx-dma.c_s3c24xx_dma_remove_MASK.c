
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_data {scalar_t__ has_clocks; } ;
struct s3c24xx_dma_platdata {int num_phy_channels; } ;
struct s3c24xx_dma_phy {int clk; scalar_t__ valid; } ;
struct s3c24xx_dma_engine {struct s3c24xx_dma_phy* phy_chans; int memcpy; int slave; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct s3c24xx_dma_platdata* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct s3c24xx_dma_engine* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,struct s3c24xx_dma_engine*) ;
 int FUNC_5 (int *) ;
 struct soc_data* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 const struct s3c24xx_dma_platdata *VAR_1 = FUNC_1(&VAR_0->dev);
 struct s3c24xx_dma_engine *VAR_2 = FUNC_3(VAR_0);
 struct soc_data *VAR_3 = FUNC_6(VAR_0);
 int VAR_4;

 FUNC_2(&VAR_2->slave);
 FUNC_2(&VAR_2->memcpy);

 FUNC_4(VAR_0, VAR_2);

 FUNC_5(&VAR_2->slave);
 FUNC_5(&VAR_2->memcpy);

 if (VAR_3->has_clocks)
  for (VAR_4 = 0; VAR_4 < VAR_1->num_phy_channels; VAR_4++) {
   struct s3c24xx_dma_phy *VAR_5 = &VAR_2->phy_chans[VAR_4];
   if (VAR_5->valid)
    FUNC_0(VAR_5->clk);
  }

 return 0;
}
