
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_tdma_desc {size_t src_addr; size_t dst_addr; size_t byte_cnt; scalar_t__ nxt_desc; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct mmp_tdma_chan {scalar_t__ status; int desc_num; size_t dev_addr; size_t buf_len; size_t period_len; struct dma_async_tx_descriptor desc; scalar_t__ pos; scalar_t__ desc_arr_phys; struct mmp_tdma_desc* desc_arr; int slave_config; int dev; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef size_t dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,char*,size_t,size_t) ;
 struct mmp_tdma_desc* FUNC_1 (struct mmp_tdma_chan*) ;
 int FUNC_2 (struct dma_chan*,int,int *) ;
 int FUNC_3 (struct mmp_tdma_chan*,int) ;
 struct mmp_tdma_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_5(
  struct dma_chan *VAR_6, dma_addr_t VAR_7, size_t VAR_8,
  size_t VAR_9, enum dma_transfer_direction VAR_10,
  unsigned long VAR_11)
{
 struct mmp_tdma_chan *VAR_12 = FUNC_4(VAR_6);
 struct mmp_tdma_desc *VAR_13;
 int VAR_14 = VAR_8 / VAR_9;
 int VAR_15 = 0, VAR_16 = 0;

 if (VAR_12->status != VAR_0)
  return ((void*)0);

 if (VAR_9 > VAR_5) {
  FUNC_0(VAR_12->dev,
    "maximum period size exceeded: %zu > %d\n",
    VAR_9, VAR_5);
  goto err_out;
 }

 VAR_12->status = VAR_2;
 VAR_12->desc_num = VAR_14;
 VAR_13 = FUNC_1(VAR_12);
 if (!VAR_13)
  goto err_out;

 FUNC_2(VAR_6, VAR_10, &VAR_12->slave_config);

 while (VAR_16 < VAR_8) {
  VAR_13 = &VAR_12->desc_arr[VAR_15];

  if (VAR_15 + 1 == VAR_14)
   VAR_13->nxt_desc = VAR_12->desc_arr_phys;
  else
   VAR_13->nxt_desc = VAR_12->desc_arr_phys +
    sizeof(*VAR_13) * (VAR_15 + 1);

  if (VAR_10 == VAR_3) {
   VAR_13->src_addr = VAR_7;
   VAR_13->dst_addr = VAR_12->dev_addr;
  } else {
   VAR_13->src_addr = VAR_12->dev_addr;
   VAR_13->dst_addr = VAR_7;
  }
  VAR_13->byte_cnt = VAR_9;
  VAR_7 += VAR_9;
  VAR_16 += VAR_9;
  VAR_15++;
 }


 if (VAR_11 & VAR_4)
  FUNC_3(VAR_12, 1);

 VAR_12->buf_len = VAR_8;
 VAR_12->period_len = VAR_9;
 VAR_12->pos = 0;

 return &VAR_12->desc;

err_out:
 VAR_12->status = VAR_1;
 return ((void*)0);
}
