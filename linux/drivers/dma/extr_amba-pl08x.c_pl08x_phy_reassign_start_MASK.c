
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl08x_phy_chan {struct pl08x_dma_chan* serving; int id; } ;
struct pl08x_driver_data {TYPE_1__* adev; } ;
struct pl08x_dma_chan {int state; struct pl08x_phy_chan* phychan; int name; struct pl08x_driver_data* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct pl08x_dma_chan*) ;

__attribute__((used)) static void FUNC_2(struct pl08x_phy_chan *VAR_1,
 struct pl08x_dma_chan *VAR_2)
{
 struct pl08x_driver_data *VAR_3 = VAR_2->host;

 FUNC_0(&VAR_3->adev->dev, "reassigned physical channel %d for xfer on %s\n",
  VAR_1->id, VAR_2->name);






 VAR_1->serving = VAR_2;
 VAR_2->phychan = VAR_1;
 VAR_2->state = VAR_0;
 FUNC_1(VAR_2);
}
