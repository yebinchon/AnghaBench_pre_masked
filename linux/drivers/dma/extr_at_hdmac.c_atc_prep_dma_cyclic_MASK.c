
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_slave_config {int src_addr_width; int dst_addr_width; } ;
struct dma_chan {struct at_dma_slave* private; } ;
struct dma_async_tx_descriptor {int cookie; int phys; } ;
struct at_dma_slave {int dummy; } ;
struct at_dma_chan {int status; struct dma_slave_config dma_sconfig; } ;
struct TYPE_2__ {int dscr; } ;
struct at_desc {size_t total_len; struct dma_async_tx_descriptor txd; TYPE_1__ lli; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct at_desc**,struct at_desc**,struct at_desc*) ;
 struct at_desc* FUNC_1 (struct at_dma_chan*) ;
 int FUNC_2 (struct at_dma_chan*,struct at_desc*) ;
 scalar_t__ FUNC_3 (unsigned int,int ,size_t) ;
 scalar_t__ FUNC_4 (struct dma_chan*,struct at_desc*,unsigned int,int ,unsigned int,size_t,int) ;
 int FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (int ,int *) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,char*,int *,unsigned int,size_t,size_t) ;
 int FUNC_11 (int) ;
 unsigned long FUNC_12 (int ,int *) ;
 struct at_dma_chan* FUNC_13 (struct dma_chan*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_15(struct dma_chan *VAR_3, dma_addr_t VAR_4, size_t VAR_5,
  size_t VAR_6, enum dma_transfer_direction VAR_7,
  unsigned long VAR_8)
{
 struct at_dma_chan *VAR_9 = FUNC_13(VAR_3);
 struct at_dma_slave *VAR_10 = VAR_3->private;
 struct dma_slave_config *VAR_11 = &VAR_9->dma_sconfig;
 struct at_desc *VAR_12 = ((void*)0);
 struct at_desc *VAR_13 = ((void*)0);
 unsigned long VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16 = VAR_5 / VAR_6;
 unsigned int VAR_17;

 FUNC_10(FUNC_5(VAR_3), "prep_dma_cyclic: %s buf@%pad - %d (%d/%d)\n",
   VAR_7 == VAR_1 ? "TO DEVICE" : "FROM DEVICE",
   &VAR_4,
   VAR_16, VAR_5, VAR_6);

 if (FUNC_14(!VAR_10 || !VAR_5 || !VAR_6)) {
  FUNC_8(FUNC_5(VAR_3), "prep_dma_cyclic: length is zero!\n");
  return ((void*)0);
 }

 VAR_14 = FUNC_12(VAR_0, &VAR_9->status);
 if (VAR_14) {
  FUNC_8(FUNC_5(VAR_3), "prep_dma_cyclic: channel in use!\n");
  return ((void*)0);
 }

 if (FUNC_14(!FUNC_11(VAR_7)))
  goto err_out;

 if (VAR_7 == VAR_1)
  VAR_15 = FUNC_7(VAR_11->dst_addr_width);
 else
  VAR_15 = FUNC_7(VAR_11->src_addr_width);


 if (FUNC_3(VAR_15, VAR_4, VAR_6))
  goto err_out;


 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  struct at_desc *VAR_18;

  VAR_18 = FUNC_1(VAR_9);
  if (!VAR_18)
   goto err_desc_get;

  if (FUNC_4(VAR_3, VAR_18, VAR_17, VAR_4,
          VAR_15, VAR_6, VAR_7))
   goto err_desc_get;

  FUNC_0(&VAR_12, &VAR_13, VAR_18);
 }


 VAR_13->lli.dscr = VAR_12->txd.phys;


 VAR_12->txd.cookie = -VAR_2;
 VAR_12->total_len = VAR_5;

 return &VAR_12->txd;

err_desc_get:
 FUNC_9(FUNC_5(VAR_3), "not enough descriptors available\n");
 FUNC_2(VAR_9, VAR_12);
err_out:
 FUNC_6(VAR_0, &VAR_9->status);
 return ((void*)0);
}
