
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdma_engine {int clk_ratio; int context_phys; int dev; int clk_ipg; int clk_ahb; int * channel; scalar_t__ regs; TYPE_1__* drvdata; scalar_t__ channel_control; void* context; } ;
struct sdma_context_data {int dummy; } ;
struct sdma_channel_control {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int num_events; scalar_t__ check_ratio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct sdma_engine*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int ,int,int*,int ) ;
 int FUNC_6 (int *,int,int,int) ;
 int FUNC_7 (struct sdma_engine*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct sdma_engine *VAR_8)
{
 int VAR_9, VAR_10;
 dma_addr_t VAR_11;

 VAR_10 = FUNC_2(VAR_8->clk_ipg);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_2(VAR_8->clk_ahb);
 if (VAR_10)
  goto disable_clk_ipg;

 if (VAR_8->drvdata->check_ratio &&
     (FUNC_3(VAR_8->clk_ahb) == FUNC_3(VAR_8->clk_ipg)))
  VAR_8->clk_ratio = 1;


 FUNC_9(0, VAR_8->regs + VAR_5);

 VAR_8->channel_control = FUNC_5(VAR_8->dev,
   VAR_2 * sizeof (struct sdma_channel_control) +
   sizeof(struct sdma_context_data),
   &VAR_11, VAR_1);

 if (!VAR_8->channel_control) {
  VAR_10 = -VAR_0;
  goto err_dma_alloc;
 }

 VAR_8->context = (void *)VAR_8->channel_control +
  VAR_2 * sizeof (struct sdma_channel_control);
 VAR_8->context_phys = VAR_11 +
  VAR_2 * sizeof (struct sdma_channel_control);


 for (VAR_9 = 0; VAR_9 < VAR_8->drvdata->num_events; VAR_9++)
  FUNC_9(0, VAR_8->regs + FUNC_0(VAR_8, VAR_9));


 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  FUNC_9(0, VAR_8->regs + VAR_4 + VAR_9 * 4);

 VAR_10 = FUNC_7(VAR_8);
 if (VAR_10)
  goto err_dma_alloc;

 FUNC_6(&VAR_8->channel[0], 0, 1, 0);


 FUNC_9(0x4050, VAR_8->regs + VAR_3);


 if (VAR_8->clk_ratio)
  FUNC_9(VAR_7, VAR_8->regs + VAR_6);
 else
  FUNC_9(0, VAR_8->regs + VAR_6);

 FUNC_9(VAR_11, VAR_8->regs + VAR_5);


 FUNC_8(&VAR_8->channel[0], 7);

 FUNC_1(VAR_8->clk_ipg);
 FUNC_1(VAR_8->clk_ahb);

 return 0;

err_dma_alloc:
 FUNC_1(VAR_8->clk_ahb);
disable_clk_ipg:
 FUNC_1(VAR_8->clk_ipg);
 FUNC_4(VAR_8->dev, "initialisation failed with %d\n", VAR_10);
 return VAR_10;
}
