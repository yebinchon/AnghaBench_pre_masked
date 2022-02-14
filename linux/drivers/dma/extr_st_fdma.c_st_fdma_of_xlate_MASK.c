
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* dev; } ;
struct st_fdma_dev {TYPE_3__* slim_rproc; int dev; TYPE_4__ dma_device; } ;
struct TYPE_6__ {scalar_t__ of_node; int req_line; int req_ctrl; int type; } ;
struct st_fdma_chan {int dreq_line; TYPE_2__ cfg; } ;
struct of_phandle_args {int args_count; scalar_t__ np; int* args; } ;
struct of_dma {struct st_fdma_dev* of_dma_data; } ;
struct dma_chan {int dummy; } ;
struct TYPE_7__ {int rproc; } ;
struct TYPE_5__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dma_chan* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int,int,int) ;
 struct dma_chan* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct st_fdma_chan*) ;
 struct st_fdma_chan* FUNC_7 (struct dma_chan*) ;

__attribute__((used)) static struct dma_chan *FUNC_8(struct of_phandle_args *VAR_5,
      struct of_dma *VAR_6)
{
 struct st_fdma_dev *VAR_7 = VAR_6->of_dma_data;
 struct dma_chan *VAR_8;
 struct st_fdma_chan *VAR_9;
 int VAR_10;

 if (VAR_5->args_count < 1)
  return FUNC_0(-VAR_0);

 if (VAR_7->dma_device.dev->of_node != VAR_5->np)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_4(VAR_7->slim_rproc->rproc);
 if (VAR_10 == -VAR_1)
  return FUNC_0(-VAR_2);
 else if (VAR_10)
  return FUNC_0(VAR_10);

 VAR_8 = FUNC_3(&VAR_7->dma_device);
 if (!VAR_8)
  goto err_chan;

 VAR_9 = FUNC_7(VAR_8);

 VAR_9->cfg.of_node = VAR_5->np;
 VAR_9->cfg.req_line = VAR_5->args[0];
 VAR_9->cfg.req_ctrl = 0;
 VAR_9->cfg.type = VAR_4;

 if (VAR_5->args_count > 1)
  VAR_9->cfg.req_ctrl = VAR_5->args[1]
   & VAR_3;

 if (VAR_5->args_count > 2)
  VAR_9->cfg.type = VAR_5->args[2];

 if (VAR_9->cfg.type == VAR_4) {
  VAR_9->dreq_line = 0;
 } else {
  VAR_9->dreq_line = FUNC_6(VAR_9);
  if (FUNC_1(VAR_9->dreq_line)) {
   VAR_8 = FUNC_0(VAR_9->dreq_line);
   goto err_chan;
  }
 }

 FUNC_2(VAR_7->dev, "xlate req_line:%d type:%d req_ctrl:%#lx\n",
  VAR_9->cfg.req_line, VAR_9->cfg.type, VAR_9->cfg.req_ctrl);

 return VAR_8;

err_chan:
 FUNC_5(VAR_7->slim_rproc->rproc);
 return VAR_8;

}
