
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qup_i2c_block {int is_tx_blk_mode; scalar_t__ total_tx_len; int is_rx_blk_mode; scalar_t__ total_rx_len; } ;
struct qup_i2c_dev {scalar_t__ out_fifo_sz; scalar_t__ in_fifo_sz; scalar_t__ base; struct qup_i2c_block blk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct qup_i2c_dev *VAR_12)
{
 struct qup_i2c_block *VAR_13 = &VAR_12->blk;
 u32 VAR_14 = VAR_0 | VAR_1;
 u32 VAR_15 = VAR_11;

 VAR_13->is_tx_blk_mode =
  VAR_13->total_tx_len > VAR_12->out_fifo_sz ? 1 : 0;
 VAR_13->is_rx_blk_mode =
  VAR_13->total_rx_len > VAR_12->in_fifo_sz ? 1 : 0;

 if (VAR_13->is_tx_blk_mode) {
  VAR_15 |= VAR_10;
  FUNC_0(0, VAR_12->base + VAR_8);
  FUNC_0(VAR_13->total_tx_len, VAR_12->base + VAR_6);
 } else {
  FUNC_0(0, VAR_12->base + VAR_6);
  FUNC_0(VAR_13->total_tx_len, VAR_12->base + VAR_8);
 }

 if (VAR_13->total_rx_len) {
  if (VAR_13->is_rx_blk_mode) {
   VAR_15 |= VAR_3;
   FUNC_0(0, VAR_12->base + VAR_7);
   FUNC_0(VAR_13->total_rx_len, VAR_12->base + VAR_5);
  } else {
   FUNC_0(0, VAR_12->base + VAR_5);
   FUNC_0(VAR_13->total_rx_len, VAR_12->base + VAR_7);
  }
 } else {
  VAR_14 |= VAR_9;
 }

 FUNC_0(VAR_14, VAR_12->base + VAR_2);
 FUNC_0(VAR_15, VAR_12->base + VAR_4);
}
