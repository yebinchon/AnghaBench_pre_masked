
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct st_fdma_dev {int dev; } ;
struct TYPE_8__ {int dir; int req_ctrl; scalar_t__ dev_addr; } ;
struct TYPE_7__ {int src_addr_width; int dst_addr_width; scalar_t__ dst_addr; scalar_t__ dst_maxburst; scalar_t__ src_addr; scalar_t__ src_maxburst; } ;
struct TYPE_5__ {int chan_id; } ;
struct TYPE_6__ {TYPE_1__ chan; } ;
struct st_fdma_chan {TYPE_4__ cfg; TYPE_3__ scfg; struct st_fdma_dev* fdev; TYPE_2__ vchan; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,int,scalar_t__,int ) ;
 int FUNC_2 (struct st_fdma_chan*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct st_fdma_chan *VAR_9,
     enum dma_transfer_direction VAR_10)
{
 u32 VAR_11 = 0, VAR_12 = 0;
 enum dma_slave_buswidth VAR_13;
 int VAR_14 = VAR_9->vchan.chan.chan_id;
 struct st_fdma_dev *VAR_15 = VAR_9->fdev;

 switch (VAR_10) {

 case 133:
  VAR_9->cfg.req_ctrl &= ~VAR_8;
  VAR_11 = VAR_9->scfg.src_maxburst;
  VAR_13 = VAR_9->scfg.src_addr_width;
  VAR_12 = VAR_9->scfg.src_addr;
  break;

 case 132:
  VAR_9->cfg.req_ctrl |= VAR_8;
  VAR_11 = VAR_9->scfg.dst_maxburst;
  VAR_13 = VAR_9->scfg.dst_addr_width;
  VAR_12 = VAR_9->scfg.dst_addr;
  break;

 default:
  return -VAR_0;
 }

 VAR_9->cfg.req_ctrl &= ~VAR_7;

 switch (VAR_13) {

 case 131:
  VAR_9->cfg.req_ctrl |= VAR_3;
  break;

 case 130:
  VAR_9->cfg.req_ctrl |= VAR_4;
  break;

 case 129:
  VAR_9->cfg.req_ctrl |= VAR_5;
  break;

 case 128:
  VAR_9->cfg.req_ctrl |= VAR_6;
  break;

 default:
  return -VAR_0;
 }

 VAR_9->cfg.req_ctrl &= ~VAR_1;
 VAR_9->cfg.req_ctrl |= FUNC_0(VAR_11-1);
 FUNC_2(VAR_9, VAR_9->cfg.req_ctrl, VAR_2);

 VAR_9->cfg.dev_addr = VAR_12;
 VAR_9->cfg.dir = VAR_10;

 FUNC_1(VAR_15->dev, "chan:%d config_reqctrl:%#x req_ctrl:%#lx\n",
  VAR_14, VAR_12, VAR_9->cfg.req_ctrl);

 return 0;
}
