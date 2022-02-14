
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl08x_phy_chan {int id; } ;
struct pl08x_driver_data {TYPE_1__* adev; } ;
struct pl08x_dma_chan {int state; struct pl08x_phy_chan* phychan; int name; int waiting_at; struct pl08x_driver_data* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,...) ;
 int VAR_2 ;
 struct pl08x_phy_chan* FUNC_1 (struct pl08x_driver_data*,struct pl08x_dma_chan*) ;
 int FUNC_2 (struct pl08x_dma_chan*) ;

__attribute__((used)) static void FUNC_3(struct pl08x_dma_chan *VAR_3)
{
 struct pl08x_driver_data *VAR_4 = VAR_3->host;
 struct pl08x_phy_chan *VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (!VAR_5) {
  FUNC_0(&VAR_4->adev->dev, "no physical channel available for xfer on %s\n", VAR_3->name);
  VAR_3->state = VAR_1;
  VAR_3->waiting_at = VAR_2;
  return;
 }

 FUNC_0(&VAR_4->adev->dev, "allocated physical channel %d for xfer on %s\n",
  VAR_5->id, VAR_3->name);

 VAR_3->phychan = VAR_5;
 VAR_3->state = VAR_0;
 FUNC_2(VAR_3);
}
