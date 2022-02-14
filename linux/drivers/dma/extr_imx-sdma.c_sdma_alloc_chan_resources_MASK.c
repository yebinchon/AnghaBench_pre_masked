
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdma_channel {TYPE_1__* sdma; scalar_t__ event_id1; scalar_t__ event_id0; int peripheral_type; } ;
struct imx_dma_data {int priority; scalar_t__ dma_request2; scalar_t__ dma_request; int peripheral_type; } ;
struct dma_chan {struct imx_dma_data* private; } ;
struct TYPE_2__ {int clk_ipg; int clk_ahb; int dev; } ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct sdma_channel*,int ) ;
 int FUNC_4 (struct sdma_channel*,int) ;
 struct sdma_channel* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_1)
{
 struct sdma_channel *VAR_2 = FUNC_5(VAR_1);
 struct imx_dma_data *VAR_3 = VAR_1->private;
 struct imx_dma_data VAR_4;
 int VAR_5, VAR_6;
 if (!VAR_3) {
  FUNC_2(VAR_2->sdma->dev, "MEMCPY in case?\n");
  VAR_4.priority = 2;
  VAR_4.peripheral_type = VAR_0;
  VAR_4.dma_request = 0;
  VAR_4.dma_request2 = 0;
  VAR_3 = &VAR_4;

  FUNC_3(VAR_2, VAR_0);
 }

 switch (VAR_3->priority) {
 case 130:
  VAR_5 = 3;
  break;
 case 128:
  VAR_5 = 2;
  break;
 case 129:
 default:
  VAR_5 = 1;
  break;
 }

 VAR_2->peripheral_type = VAR_3->peripheral_type;
 VAR_2->event_id0 = VAR_3->dma_request;
 VAR_2->event_id1 = VAR_3->dma_request2;

 VAR_6 = FUNC_1(VAR_2->sdma->clk_ipg);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_1(VAR_2->sdma->clk_ahb);
 if (VAR_6)
  goto disable_clk_ipg;

 VAR_6 = FUNC_4(VAR_2, VAR_5);
 if (VAR_6)
  goto disable_clk_ahb;

 return 0;

disable_clk_ahb:
 FUNC_0(VAR_2->sdma->clk_ahb);
disable_clk_ipg:
 FUNC_0(VAR_2->sdma->clk_ipg);
 return VAR_6;
}
