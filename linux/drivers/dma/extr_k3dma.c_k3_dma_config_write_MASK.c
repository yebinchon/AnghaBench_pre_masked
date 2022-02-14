
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int chan_id; } ;
struct TYPE_4__ {TYPE_1__ chan; } ;
struct k3_dma_chan {int ccfg; TYPE_2__ vc; int dev_addr; } ;
struct dma_slave_config {int src_maxburst; int src_addr_width; int dst_maxburst; int dst_addr_width; int dst_addr; int src_addr; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int FUNC_0 (int) ;
 struct k3_dma_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_2(struct dma_chan *VAR_7,
          enum dma_transfer_direction VAR_8,
          struct dma_slave_config *VAR_9)
{
 struct k3_dma_chan *VAR_10 = FUNC_1(VAR_7);
 u32 VAR_11 = 0, VAR_12 = 0;
 enum dma_slave_buswidth VAR_13 = VAR_6;

 if (VAR_8 == VAR_4) {
  VAR_10->ccfg = VAR_0;
  VAR_10->dev_addr = VAR_9->src_addr;
  VAR_11 = VAR_9->src_maxburst;
  VAR_13 = VAR_9->src_addr_width;
 } else if (VAR_8 == VAR_5) {
  VAR_10->ccfg = VAR_3;
  VAR_10->dev_addr = VAR_9->dst_addr;
  VAR_11 = VAR_9->dst_maxburst;
  VAR_13 = VAR_9->dst_addr_width;
 }
 switch (VAR_13) {
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_12 = FUNC_0(VAR_13);
  break;
 default:
  VAR_12 = 3;
  break;
 }
 VAR_10->ccfg |= (VAR_12 << 12) | (VAR_12 << 16);

 if ((VAR_11 == 0) || (VAR_11 > 16))
  VAR_12 = 15;
 else
  VAR_12 = VAR_11 - 1;
 VAR_10->ccfg |= (VAR_12 << 20) | (VAR_12 << 24);
 VAR_10->ccfg |= VAR_2 | VAR_1;


 VAR_10->ccfg |= VAR_10->vc.chan.chan_id << 4;

 return 0;
}
