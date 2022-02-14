
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s3c24xx_txd {int width; } ;
struct s3c24xx_dma_phy {scalar_t__ base; } ;
struct s3c24xx_dma_chan {struct s3c24xx_txd* at; struct s3c24xx_dma_phy* phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct s3c24xx_dma_chan *VAR_2)
{
 struct s3c24xx_dma_phy *VAR_3 = VAR_2->phy;
 struct s3c24xx_txd *VAR_4 = VAR_2->at;
 u32 VAR_5 = FUNC_0(VAR_3->base + VAR_0) & VAR_1;

 return VAR_5 * VAR_4->width;
}
