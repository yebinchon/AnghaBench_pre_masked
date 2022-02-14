
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c24xx_dma_platdata {struct s3c24xx_dma_channel* channels; } ;
struct s3c24xx_dma_phy {int id; } ;
struct s3c24xx_dma_engine {TYPE_1__* sdata; struct s3c24xx_dma_platdata* pdata; } ;
struct s3c24xx_dma_channel {int chansel; } ;
struct s3c24xx_dma_chan {size_t id; int slave; struct s3c24xx_dma_engine* host; } ;
struct TYPE_2__ {scalar_t__ has_reqsel; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct s3c24xx_dma_chan *VAR_2,
      struct s3c24xx_dma_phy *VAR_3)
{
 struct s3c24xx_dma_engine *VAR_4 = VAR_2->host;
 const struct s3c24xx_dma_platdata *VAR_5 = VAR_4->pdata;
 struct s3c24xx_dma_channel *VAR_6 = &VAR_5->channels[VAR_2->id];
 int VAR_7;


 if (!VAR_2->slave)
  return 1;


 if (VAR_4->sdata->has_reqsel)
  return 1;

 VAR_7 = (VAR_6->chansel >> (VAR_3->id * VAR_1));
 return (VAR_7 & VAR_0) ? 1 : 0;
}
