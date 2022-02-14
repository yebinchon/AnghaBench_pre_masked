
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stedma40_half_channel_info {int dummy; } ;
struct stedma40_chan_cfg {struct stedma40_half_channel_info dst_info; struct stedma40_half_channel_info src_info; } ;
struct scatterlist {int dummy; } ;
struct TYPE_6__ {int size; int dma_addr; } ;
struct TYPE_4__ {int dst; int src; } ;
struct d40_desc {TYPE_3__ lli_pool; TYPE_1__ lli_phy; scalar_t__ cyclic; } ;
struct d40_chan {TYPE_2__* base; int dst_def_cfg; int src_def_cfg; struct stedma40_chan_cfg dma_cfg; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct scatterlist*,unsigned int,int ,int ,int ,int ,struct stedma40_half_channel_info*,struct stedma40_half_channel_info*,unsigned long) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct d40_chan *VAR_3, struct d40_desc *VAR_4,
  struct scatterlist *VAR_5, struct scatterlist *VAR_6,
  unsigned int VAR_7, dma_addr_t VAR_8,
  dma_addr_t VAR_9)
{
 struct stedma40_chan_cfg *VAR_10 = &VAR_3->dma_cfg;
 struct stedma40_half_channel_info *VAR_11 = &VAR_10->src_info;
 struct stedma40_half_channel_info *VAR_12 = &VAR_10->dst_info;
 unsigned long VAR_13 = 0;
 int VAR_14;

 if (VAR_4->cyclic)
  VAR_13 |= VAR_1 | VAR_2;

 VAR_14 = FUNC_0(VAR_5, VAR_7, VAR_8,
    VAR_4->lli_phy.src,
    FUNC_2(VAR_4->lli_phy.src),
    VAR_3->src_def_cfg,
    VAR_11, VAR_12, VAR_13);

 VAR_14 = FUNC_0(VAR_6, VAR_7, VAR_9,
    VAR_4->lli_phy.dst,
    FUNC_2(VAR_4->lli_phy.dst),
    VAR_3->dst_def_cfg,
    VAR_12, VAR_11, VAR_13);

 FUNC_1(VAR_3->base->dev, VAR_4->lli_pool.dma_addr,
       VAR_4->lli_pool.size, VAR_0);

 return VAR_14 < 0 ? VAR_14 : 0;
}
