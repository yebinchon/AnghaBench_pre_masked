
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stedma40_half_channel_info {int data_width; } ;
struct stedma40_chan_cfg {struct stedma40_half_channel_info dst_info; struct stedma40_half_channel_info src_info; } ;
struct scatterlist {int dummy; } ;
struct TYPE_3__ {int dst; int src; } ;
struct d40_desc {TYPE_1__ lli_log; } ;
struct TYPE_4__ {int lcsp3; int lcsp1; } ;
struct d40_chan {TYPE_2__ log_def; struct stedma40_chan_cfg dma_cfg; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct scatterlist*,unsigned int,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct d40_chan *VAR_0, struct d40_desc *VAR_1,
  struct scatterlist *VAR_2, struct scatterlist *VAR_3,
  unsigned int VAR_4, dma_addr_t VAR_5,
  dma_addr_t VAR_6)
{
 struct stedma40_chan_cfg *VAR_7 = &VAR_0->dma_cfg;
 struct stedma40_half_channel_info *VAR_8 = &VAR_7->src_info;
 struct stedma40_half_channel_info *VAR_9 = &VAR_7->dst_info;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_2, VAR_4,
    VAR_5,
    VAR_1->lli_log.src,
    VAR_0->log_def.lcsp1,
    VAR_8->data_width,
    VAR_9->data_width);

 VAR_10 = FUNC_0(VAR_3, VAR_4,
    VAR_6,
    VAR_1->lli_log.dst,
    VAR_0->log_def.lcsp3,
    VAR_9->data_width,
    VAR_8->data_width);

 return VAR_10 < 0 ? VAR_10 : 0;
}
