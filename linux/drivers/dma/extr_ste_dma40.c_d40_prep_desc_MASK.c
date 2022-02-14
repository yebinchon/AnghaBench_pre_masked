
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data_width; } ;
struct TYPE_4__ {int data_width; } ;
struct stedma40_chan_cfg {TYPE_2__ dst_info; TYPE_1__ src_info; } ;
struct scatterlist {int dummy; } ;
struct TYPE_6__ {unsigned long flags; int tx_submit; } ;
struct d40_desc {scalar_t__ lli_len; TYPE_3__ txd; scalar_t__ lli_current; } ;
struct d40_chan {int chan; struct stedma40_chan_cfg dma_cfg; } ;


 int FUNC_0 (struct d40_chan*,char*) ;
 int FUNC_1 (struct d40_chan*,struct d40_desc*) ;
 struct d40_desc* FUNC_2 (struct d40_chan*) ;
 int FUNC_3 (struct d40_chan*,struct d40_desc*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct scatterlist*,unsigned int,int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_3__*,int *) ;

__attribute__((used)) static struct d40_desc *
FUNC_6(struct d40_chan *VAR_1, struct scatterlist *VAR_2,
       unsigned int VAR_3, unsigned long VAR_4)
{
 struct stedma40_chan_cfg *VAR_5;
 struct d40_desc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_1);
 if (!VAR_6)
  return ((void*)0);

 VAR_5 = &VAR_1->dma_cfg;
 VAR_6->lli_len = FUNC_4(VAR_2, VAR_3, VAR_5->src_info.data_width,
     VAR_5->dst_info.data_width);
 if (VAR_6->lli_len < 0) {
  FUNC_0(VAR_1, "Unaligned size\n");
  goto free_desc;
 }

 VAR_7 = FUNC_3(VAR_1, VAR_6, VAR_6->lli_len);
 if (VAR_7 < 0) {
  FUNC_0(VAR_1, "Could not allocate lli\n");
  goto free_desc;
 }

 VAR_6->lli_current = 0;
 VAR_6->txd.flags = VAR_4;
 VAR_6->txd.tx_submit = VAR_0;

 FUNC_5(&VAR_6->txd, &VAR_1->chan);

 return VAR_6;
 free_desc:
 FUNC_1(VAR_1, VAR_6);
 return ((void*)0);
}
