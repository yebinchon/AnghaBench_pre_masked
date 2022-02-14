
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qup_i2c_block {scalar_t__ is_tx_blk_mode; int rx_bytes_read; int fifo_available; int is_rx_blk_mode; int tx_fifo_free; } ;
struct qup_i2c_dev {int qup_err; int bus_err; int xfer; TYPE_1__* msg; int (* read_rx_fifo ) (struct qup_i2c_dev*) ;scalar_t__ in_blk_sz; scalar_t__ in_fifo_sz; scalar_t__ base; int (* write_tx_fifo ) (struct qup_i2c_dev*) ;int (* write_rx_tags ) (struct qup_i2c_dev*) ;scalar_t__ out_blk_sz; scalar_t__ use_dma; struct qup_i2c_block blk; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct qup_i2c_dev*) ;
 int FUNC_3 (struct qup_i2c_dev*) ;
 int FUNC_4 (struct qup_i2c_dev*) ;
 int FUNC_5 (struct qup_i2c_dev*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_14, void *VAR_15)
{
 struct qup_i2c_dev *VAR_16 = VAR_15;
 struct qup_i2c_block *VAR_17 = &VAR_16->blk;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;

 VAR_18 = FUNC_1(VAR_16->base + VAR_6);
 VAR_19 = FUNC_1(VAR_16->base + VAR_5);
 VAR_20 = FUNC_1(VAR_16->base + VAR_9);

 if (!VAR_16->msg) {

  FUNC_6(VAR_11, VAR_16->base + VAR_12);
  return VAR_3;
 }

 VAR_18 &= VAR_1;
 VAR_19 &= VAR_13;


 if (VAR_19)
  FUNC_6(VAR_19, VAR_16->base + VAR_5);


 if (VAR_18)
  FUNC_6(VAR_18, VAR_16->base + VAR_6);






 if (VAR_16->use_dma && (VAR_16->qup_err || VAR_16->bus_err))
  return VAR_3;


 if (VAR_19 || VAR_18) {






  if (!VAR_16->use_dma)
   FUNC_6(VAR_11, VAR_16->base + VAR_12);
  goto done;
 }

 if (VAR_20 & VAR_10) {
  FUNC_6(VAR_10, VAR_16->base + VAR_9);

  if (VAR_20 & VAR_4) {
   VAR_17->tx_fifo_free += VAR_16->out_blk_sz;
   if (VAR_16->msg->flags & VAR_0)
    VAR_16->write_rx_tags(VAR_16);
   else
    VAR_16->write_tx_fifo(VAR_16);
  }
 }

 if (VAR_20 & VAR_7) {
  FUNC_6(VAR_7, VAR_16->base + VAR_9);

  if (!VAR_17->is_rx_blk_mode) {
   VAR_17->fifo_available += VAR_16->in_fifo_sz;
   VAR_16->read_rx_fifo(VAR_16);
  } else if (VAR_20 & VAR_2) {
   VAR_17->fifo_available += VAR_16->in_blk_sz;
   VAR_16->read_rx_fifo(VAR_16);
  }
 }

 if (VAR_16->msg->flags & VAR_0) {
  if (!VAR_17->rx_bytes_read)
   return VAR_3;
 } else {







  if (VAR_17->is_tx_blk_mode && !(VAR_20 & VAR_8))
   return VAR_3;
 }

done:
 VAR_16->qup_err = VAR_19;
 VAR_16->bus_err = VAR_18;
 FUNC_0(&VAR_16->xfer);
 return VAR_3;
}
